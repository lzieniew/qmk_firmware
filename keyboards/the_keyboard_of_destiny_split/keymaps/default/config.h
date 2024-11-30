#pragma once

#define TAPPING_TERM 200
#define PERMISSIVE_HOLD
#define TAPPING_FORCE_HOLD
#define RETRO_TAPPING
#define MOUSEKEY_DELAY 0
#define MOUSEKEY_INTERVAL 16
#define MOUSEKEY_MOVE_DELTA 8
#define MOUSEKEY_MAX_SPEED 3
#define MOUSEKEY_TIME_TO_MAX 60
#define COMBO_TERM 50             // How long for the combo to be pressed (in ms)
#define COMBO_MUST_HOLD_PER_COMBO // Makes the combo only trigger when held
#define COMBO_HOLD_TERM 150       // How long to hold for activation (in ms)

// Split keyboard specific options
#define SPLIT_USB_DETECT
#define SPLIT_USB_TIMEOUT 2000
#define SPLIT_USB_TIMEOUT_POLL 10
#define SOFT_SERIAL_PIN D2       // Use D2 as configured in your wiring
#define SELECT_SOFT_SERIAL_SPEED 1  // Slow down communication speed
