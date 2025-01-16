TAP_DANCE_ENABLE = yes
CONSOLE_ENABLE = no


NO_SUSPEND_POWER_DOWN = yes

MOUSEKEY_ENABLE = no
EXTRAKEY_ENABLE = no

EXTRAFLAGS += -flto -Os -ffunction-sections -fdata-sections -fno-exceptions -fno-unwind-tables
LDFLAGS += -Wl,--gc-sections
