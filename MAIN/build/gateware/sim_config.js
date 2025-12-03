[
    {
        "module": "clocker",
        "interface": [
            "sys_clk"
        ],
        "args": {
            "freq_hz": 1000000,
            "phase_deg": 0
        },
        "tickfirst": true
    },
    {
        "module": "serial2console",
        "interface": [
            "serial",
            "sys_clk"
        ]
    },
    {
        "module": "ethernet",
        "interface": [
            "eth",
            "sys_clk"
        ],
        "args": {
            "interface": "tap0",
            "ip": "192.168.1.100"
        }
    },
    {
        "timebase": 500000
    }
]