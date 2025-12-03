import os.path
__dir__ = os.path.split(os.path.abspath(os.path.realpath(__file__)))[0]
data_location = os.path.join(__dir__, "sources")
src = "https://github.com/cr1901/sentinel"

# Module version
version_str = "0.0.post629"
version_tuple = (0, 0, 629)
try:
    from packaging.version import Version as V
    pversion = V("0.0.post629")
except ImportError:
    pass

# Data version info
data_version_str = "0.0.post477"
data_version_tuple = (0, 0, 477)
try:
    from packaging.version import Version as V
    pdata_version = V("0.0.post477")
except ImportError:
    pass
data_git_hash = "2dbf6cff7e99fafecce027077e7850cb6a126589"
data_git_describe = "v0.0-477-g2dbf6cf"
data_git_msg = """\
commit 2dbf6cff7e99fafecce027077e7850cb6a126589
Author: William D. Jones <thor0505@comcast.net>
Date:   Sun Jan 12 12:04:10 2025 -0500

    Update CHANGELOG.md. Prepare CI for tags. Tag v0.1.0-beta.

"""

# Tool version info
tool_version_str = "0.0.post152"
tool_version_tuple = (0, 0, 152)
try:
    from packaging.version import Version as V
    ptool_version = V("0.0.post152")
except ImportError:
    pass


def data_file(f):
    """Get absolute path for file inside pythondata_cpu_sentinel."""
    fn = os.path.join(data_location, f)
    fn = os.path.abspath(fn)
    if not os.path.exists(fn):
        raise IOError("File {f} doesn't exist in pythondata_cpu_sentinel".format(f))
    return fn
