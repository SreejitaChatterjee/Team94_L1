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
        "module": "serial2tcp",
        "interface": [
            "serial",
            "sys_clk"
        ],
        "args": {
            "port": "1234"
        }
    },
    {
        "timebase": 500000
    }
]