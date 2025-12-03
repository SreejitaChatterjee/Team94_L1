#!/usr/bin/env python3
"""
PQC-DTLS 1.3 Server for Host PC
Inter IIT Tech Meet 14.0 - QTrino Labs Challenge

This server communicates with the RISC-V firmware over serial/UART
to demonstrate PQC-DTLS 1.3 handshake and encrypted communication.

Prerequisites:
    pip install pyserial pqcrypto cryptography

Usage:
    python pqc_dtls_server.py --port /dev/ttyUSB0  # Linux
    python pqc_dtls_server.py --port COM3          # Windows
"""

import argparse
import struct
import time
import os
import sys
from dataclasses import dataclass
from enum import IntEnum
from typing import Optional, Tuple
import hashlib
import secrets

try:
    import serial
except ImportError:
    print("Please install pyserial: pip install pyserial")
    sys.exit(1)

# Try to import cryptography for AES-GCM
try:
    from cryptography.hazmat.primitives.ciphers.aead import AESGCM
    from cryptography.hazmat.primitives import hashes
    from cryptography.hazmat.primitives.kdf.hkdf import HKDF
    HAS_CRYPTO = True
except ImportError:
    print("Warning: cryptography not installed. Using simplified mode.")
    HAS_CRYPTO = False

# ============================================================================
# Constants
# ============================================================================

DTLS_VERSION_1_3 = 0xFEFC  # DTLS 1.3 version
MAX_PACKET_SIZE = 1500
HANDSHAKE_TIMEOUT = 30.0  # seconds

# DTLS Content Types
class ContentType(IntEnum):
    CHANGE_CIPHER_SPEC = 20
    ALERT = 21
    HANDSHAKE = 22
    APPLICATION_DATA = 23

# DTLS Handshake Types
class HandshakeType(IntEnum):
    CLIENT_HELLO = 1
    SERVER_HELLO = 2
    HELLO_VERIFY_REQUEST = 3
    CERTIFICATE = 11
    SERVER_KEY_EXCHANGE = 12
    CERTIFICATE_REQUEST = 13
    SERVER_HELLO_DONE = 14
    CERTIFICATE_VERIFY = 15
    CLIENT_KEY_EXCHANGE = 16
    FINISHED = 20
    KEY_UPDATE = 24
    ENCRYPTED_EXTENSIONS = 8  # TLS 1.3

# ============================================================================
# ML-KEM (Kyber) Simulation
# For full implementation, use liboqs or pqcrypto library
# ============================================================================

class MlKemSimulator:
    """
    Simplified ML-KEM simulator for demo purposes.
    In production, use a proper ML-KEM/Kyber implementation.
    """

    # ML-KEM-512 sizes (FIPS 203)
    PUBLIC_KEY_SIZE = 800
    SECRET_KEY_SIZE = 1632
    CIPHERTEXT_SIZE = 768
    SHARED_SECRET_SIZE = 32

    def __init__(self):
        self.public_key = None
        self.secret_key = None

    def keygen(self) -> Tuple[bytes, bytes]:
        """Generate ML-KEM key pair"""
        # Simplified: generate random keys for demo
        self.secret_key = secrets.token_bytes(self.SECRET_KEY_SIZE)
        self.public_key = secrets.token_bytes(self.PUBLIC_KEY_SIZE)
        return self.public_key, self.secret_key

    def encapsulate(self, public_key: bytes) -> Tuple[bytes, bytes]:
        """Encapsulate shared secret"""
        shared_secret = secrets.token_bytes(self.SHARED_SECRET_SIZE)
        ciphertext = secrets.token_bytes(self.CIPHERTEXT_SIZE)
        return ciphertext, shared_secret

    def decapsulate(self, ciphertext: bytes) -> bytes:
        """Decapsulate to get shared secret"""
        # Simplified: derive from ciphertext hash
        return hashlib.sha256(ciphertext + self.secret_key[:32]).digest()

# ============================================================================
# DTLS Record Layer
# ============================================================================

@dataclass
class DTLSRecord:
    content_type: int
    version: int
    epoch: int
    sequence_number: int
    length: int
    fragment: bytes

    @classmethod
    def parse(cls, data: bytes) -> 'DTLSRecord':
        """Parse DTLS record from bytes"""
        if len(data) < 13:
            raise ValueError("Record too short")

        content_type = data[0]
        version = struct.unpack(">H", data[1:3])[0]
        epoch = struct.unpack(">H", data[3:5])[0]
        sequence_number = struct.unpack(">Q", b'\x00\x00' + data[5:11])[0]
        length = struct.unpack(">H", data[11:13])[0]
        fragment = data[13:13+length]

        return cls(content_type, version, epoch, sequence_number, length, fragment)

    def serialize(self) -> bytes:
        """Serialize DTLS record to bytes"""
        header = struct.pack(
            ">BHHQ",
            self.content_type,
            self.version,
            self.epoch,
            self.sequence_number
        )
        # Trim sequence number to 6 bytes
        header = header[:5] + header[7:13]
        header += struct.pack(">H", len(self.fragment))
        return header + self.fragment

# ============================================================================
# Serial Communication with Length-Prefix Protocol
# ============================================================================

class SerialTransport:
    """UART transport with length-prefixed packets"""

    def __init__(self, port: str, baudrate: int = 115200):
        self.serial = serial.Serial(port, baudrate, timeout=1.0)
        print(f"Connected to {port} at {baudrate} baud")

    def send_packet(self, data: bytes):
        """Send length-prefixed packet"""
        length = len(data)
        header = struct.pack(">H", length)
        self.serial.write(header + data)
        self.serial.flush()
        print(f"[TX] {length} bytes: {data[:32].hex()}{'...' if len(data) > 32 else ''}")

    def recv_packet(self, timeout: float = 5.0) -> Optional[bytes]:
        """Receive length-prefixed packet"""
        start_time = time.time()

        # Read length header
        header = b''
        while len(header) < 2:
            if time.time() - start_time > timeout:
                return None
            chunk = self.serial.read(2 - len(header))
            if chunk:
                header += chunk

        length = struct.unpack(">H", header)[0]
        if length > MAX_PACKET_SIZE:
            print(f"Warning: packet too large ({length} bytes)")
            return None

        # Read payload
        data = b''
        while len(data) < length:
            if time.time() - start_time > timeout:
                return None
            chunk = self.serial.read(length - len(data))
            if chunk:
                data += chunk

        print(f"[RX] {length} bytes: {data[:32].hex()}{'...' if len(data) > 32 else ''}")
        return data

    def read_text_until(self, marker: str, timeout: float = 10.0) -> str:
        """Read text output until marker is found"""
        start_time = time.time()
        output = ""

        while time.time() - start_time < timeout:
            if self.serial.in_waiting:
                try:
                    char = self.serial.read().decode('utf-8', errors='ignore')
                    output += char
                    print(char, end='', flush=True)
                    if marker in output:
                        return output
                except:
                    pass
            time.sleep(0.01)

        return output

    def close(self):
        self.serial.close()

# ============================================================================
# PQC-DTLS 1.3 Server
# ============================================================================

class PqcDtlsServer:
    """
    PQC-DTLS 1.3 Server implementation.
    Handles handshake with ML-KEM key exchange.
    """

    def __init__(self, transport: SerialTransport):
        self.transport = transport
        self.mlkem = MlKemSimulator()
        self.epoch = 0
        self.seq_num = 0
        self.handshake_complete = False
        self.shared_secret = None
        self.traffic_keys = None

    def run(self):
        """Main server loop"""
        print("\n" + "="*60)
        print("  PQC-DTLS 1.3 Server")
        print("  Waiting for client connection...")
        print("="*60 + "\n")

        # Wait for firmware to initialize
        print("Reading firmware output...")
        self.transport.read_text_until("start handshake", timeout=30.0)

        # Send trigger to start handshake
        print("\n\nTriggering handshake...")
        self.transport.serial.write(b'\x01')  # Send any byte to trigger
        time.sleep(0.5)

        # Perform handshake
        try:
            if self.do_handshake():
                print("\n*** Handshake successful! ***\n")
                self.handle_application_data()
            else:
                print("\n*** Handshake failed ***\n")
        except Exception as e:
            print(f"Error: {e}")
            import traceback
            traceback.print_exc()

    def do_handshake(self) -> bool:
        """Perform DTLS 1.3 handshake with PQC"""
        print("\n--- Starting DTLS 1.3 Handshake ---\n")

        # Step 1: Receive ClientHello
        print("Waiting for ClientHello...")
        client_hello = self.transport.recv_packet(timeout=HANDSHAKE_TIMEOUT)
        if not client_hello:
            print("Timeout waiting for ClientHello")
            return False

        print(f"Received ClientHello ({len(client_hello)} bytes)")

        # Step 2: Generate server key pair (ML-KEM)
        print("Generating ML-KEM key pair...")
        public_key, secret_key = self.mlkem.keygen()

        # Step 3: Send ServerHello + KeyShare
        server_hello = self.build_server_hello(public_key)
        print("Sending ServerHello...")
        self.transport.send_packet(server_hello)

        # Step 4: Send EncryptedExtensions
        enc_ext = self.build_encrypted_extensions()
        print("Sending EncryptedExtensions...")
        self.transport.send_packet(enc_ext)

        # Step 5: Send Certificate (self-signed for demo)
        cert = self.build_certificate()
        print("Sending Certificate...")
        self.transport.send_packet(cert)

        # Step 6: Send CertificateVerify
        cert_verify = self.build_certificate_verify()
        print("Sending CertificateVerify...")
        self.transport.send_packet(cert_verify)

        # Step 7: Send Finished
        finished = self.build_finished()
        print("Sending Finished...")
        self.transport.send_packet(finished)

        # Step 8: Receive client Finished
        print("Waiting for client Finished...")
        client_finished = self.transport.recv_packet(timeout=HANDSHAKE_TIMEOUT)
        if not client_finished:
            print("Timeout waiting for client Finished")
            return False

        print(f"Received client Finished ({len(client_finished)} bytes)")

        # Derive traffic keys
        self.derive_traffic_keys()

        self.handshake_complete = True
        return True

    def build_server_hello(self, public_key: bytes) -> bytes:
        """Build ServerHello message with ML-KEM key share"""
        # Simplified ServerHello structure
        msg_type = HandshakeType.SERVER_HELLO

        # Random (32 bytes)
        random = secrets.token_bytes(32)

        # Session ID (legacy, empty for TLS 1.3)
        session_id = b'\x00'

        # Cipher suite (TLS_AES_128_GCM_SHA256 = 0x1301)
        cipher_suite = b'\x13\x01'

        # Compression method (null)
        compression = b'\x00'

        # Extensions (include key_share with ML-KEM public key)
        key_share_ext = self.build_key_share_extension(public_key)
        supported_versions_ext = struct.pack(">HHH", 0x002B, 2, DTLS_VERSION_1_3)

        extensions = key_share_ext + supported_versions_ext
        extensions_len = struct.pack(">H", len(extensions))

        # Build handshake message
        body = (
            struct.pack(">H", DTLS_VERSION_1_3) +  # Legacy version
            random +
            session_id +
            cipher_suite +
            compression +
            extensions_len +
            extensions
        )

        # Handshake header
        handshake_header = struct.pack(
            ">BHH",
            msg_type,
            len(body) >> 8 & 0xFF,
            len(body) & 0xFFFF
        )

        # DTLS record wrapper
        record = DTLSRecord(
            content_type=ContentType.HANDSHAKE,
            version=DTLS_VERSION_1_3,
            epoch=self.epoch,
            sequence_number=self.seq_num,
            length=len(handshake_header) + len(body),
            fragment=handshake_header + body
        )
        self.seq_num += 1

        return record.serialize()

    def build_key_share_extension(self, public_key: bytes) -> bytes:
        """Build key_share extension with ML-KEM public key"""
        # Extension type: key_share (51)
        ext_type = 0x0033

        # Named group: Kyber512 (use experimental ID 0x6399)
        named_group = 0x6399

        # Key exchange data
        key_exchange = public_key

        entry = struct.pack(">HH", named_group, len(key_exchange)) + key_exchange
        ext_data = struct.pack(">H", len(entry)) + entry

        return struct.pack(">HH", ext_type, len(ext_data)) + ext_data

    def build_encrypted_extensions(self) -> bytes:
        """Build EncryptedExtensions message"""
        msg_type = HandshakeType.ENCRYPTED_EXTENSIONS
        extensions = b'\x00\x00'  # No extensions

        handshake = struct.pack(">B", msg_type) + struct.pack(">I", len(extensions))[1:] + extensions

        record = DTLSRecord(
            content_type=ContentType.HANDSHAKE,
            version=DTLS_VERSION_1_3,
            epoch=self.epoch,
            sequence_number=self.seq_num,
            length=len(handshake),
            fragment=handshake
        )
        self.seq_num += 1

        return record.serialize()

    def build_certificate(self) -> bytes:
        """Build Certificate message (self-signed for demo)"""
        msg_type = HandshakeType.CERTIFICATE

        # Certificate request context (empty for server)
        cert_context = b'\x00'

        # Dummy self-signed certificate (in production, use real cert)
        cert_data = b'DEMO_CERTIFICATE_' + secrets.token_bytes(100)
        cert_entry = struct.pack(">I", len(cert_data))[1:] + cert_data + b'\x00\x00'  # No extensions
        cert_list = struct.pack(">I", len(cert_entry))[1:] + cert_entry

        body = cert_context + cert_list
        handshake = struct.pack(">B", msg_type) + struct.pack(">I", len(body))[1:] + body

        record = DTLSRecord(
            content_type=ContentType.HANDSHAKE,
            version=DTLS_VERSION_1_3,
            epoch=self.epoch,
            sequence_number=self.seq_num,
            length=len(handshake),
            fragment=handshake
        )
        self.seq_num += 1

        return record.serialize()

    def build_certificate_verify(self) -> bytes:
        """Build CertificateVerify message (Dilithium signature)"""
        msg_type = HandshakeType.CERTIFICATE_VERIFY

        # Signature algorithm: Dilithium2 (use experimental ID)
        sig_algorithm = 0x0807  # Experimental

        # Dummy signature (in production, use real Dilithium signature)
        signature = secrets.token_bytes(2420)  # Dilithium2 signature size

        body = struct.pack(">H", sig_algorithm) + struct.pack(">H", len(signature)) + signature
        handshake = struct.pack(">B", msg_type) + struct.pack(">I", len(body))[1:] + body

        record = DTLSRecord(
            content_type=ContentType.HANDSHAKE,
            version=DTLS_VERSION_1_3,
            epoch=self.epoch,
            sequence_number=self.seq_num,
            length=len(handshake),
            fragment=handshake
        )
        self.seq_num += 1

        return record.serialize()

    def build_finished(self) -> bytes:
        """Build Finished message"""
        msg_type = HandshakeType.FINISHED

        # Verify data (HMAC of handshake transcript)
        verify_data = secrets.token_bytes(32)

        handshake = struct.pack(">B", msg_type) + struct.pack(">I", len(verify_data))[1:] + verify_data

        record = DTLSRecord(
            content_type=ContentType.HANDSHAKE,
            version=DTLS_VERSION_1_3,
            epoch=self.epoch,
            sequence_number=self.seq_num,
            length=len(handshake),
            fragment=handshake
        )
        self.seq_num += 1

        return record.serialize()

    def derive_traffic_keys(self):
        """Derive traffic keys from shared secret"""
        if not self.shared_secret:
            self.shared_secret = secrets.token_bytes(32)

        # Simplified key derivation (use HKDF in production)
        self.traffic_keys = {
            'client_write_key': hashlib.sha256(self.shared_secret + b'client').digest()[:16],
            'server_write_key': hashlib.sha256(self.shared_secret + b'server').digest()[:16],
            'client_write_iv': hashlib.sha256(self.shared_secret + b'client_iv').digest()[:12],
            'server_write_iv': hashlib.sha256(self.shared_secret + b'server_iv').digest()[:12],
        }
        print("Traffic keys derived")

    def handle_application_data(self):
        """Handle encrypted application data"""
        print("\n--- Application Data Exchange ---\n")

        # Receive encrypted message from client
        print("Waiting for client message...")
        enc_msg = self.transport.recv_packet(timeout=10.0)
        if enc_msg:
            print(f"Received encrypted application data ({len(enc_msg)} bytes)")
            # In production, decrypt with AES-GCM
            print(f"Ciphertext: {enc_msg[:32].hex()}...")

        # Send response
        response = b"Hello from PQC-DTLS Server! Handshake successful."
        print(f"Sending response: {response.decode()}")

        # Build application data record
        self.epoch = 1  # Switch to encrypted epoch
        record = DTLSRecord(
            content_type=ContentType.APPLICATION_DATA,
            version=DTLS_VERSION_1_3,
            epoch=self.epoch,
            sequence_number=0,
            length=len(response),
            fragment=response
        )

        self.transport.send_packet(record.serialize())
        print("\n*** Application data exchange complete ***")

# ============================================================================
# Main Entry Point
# ============================================================================

def main():
    parser = argparse.ArgumentParser(
        description="PQC-DTLS 1.3 Server for Inter IIT Tech Meet 14.0"
    )
    parser.add_argument(
        "--port", "-p",
        default="/dev/ttyUSB0",
        help="Serial port (default: /dev/ttyUSB0)"
    )
    parser.add_argument(
        "--baudrate", "-b",
        type=int,
        default=115200,
        help="Baud rate (default: 115200)"
    )
    parser.add_argument(
        "--simulate",
        action="store_true",
        help="Run in simulation mode (for litex_sim)"
    )

    args = parser.parse_args()

    print("="*60)
    print("  PQC-DTLS 1.3 Server")
    print("  Inter IIT Tech Meet 14.0 - QTrino Labs")
    print("="*60)
    print(f"\nPort: {args.port}")
    print(f"Baudrate: {args.baudrate}")
    print()

    if args.simulate:
        print("Running in simulation mode...")
        print("Connect to litex_sim using: litex_term /dev/pts/X")
        print()

    try:
        transport = SerialTransport(args.port, args.baudrate)
        server = PqcDtlsServer(transport)
        server.run()
    except serial.SerialException as e:
        print(f"Serial error: {e}")
        print("\nTips:")
        print("  - Check that the serial port exists")
        print("  - For litex_sim, use the PTY port shown in simulation output")
        print("  - On Windows, use COMx format (e.g., COM3)")
        print("  - On Linux, use /dev/ttyUSBx or /dev/pts/x")
    except KeyboardInterrupt:
        print("\nServer stopped by user")
    finally:
        if 'transport' in dir():
            transport.close()

if __name__ == "__main__":
    main()
