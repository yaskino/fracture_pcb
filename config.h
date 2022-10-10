#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFRAC
#define PRODUCT_ID      0xFR84
#define DEVICE_VER      0x0001
#define MANUFACTURER    royan
#define PRODUCT         royan fracture

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 16

#define MATRIX_ROW_PINS { F0, F1, F4, D7, B4, B5 }
#define MATRIX_COL_PINS { F7, F6, F5, C7, C6, B6, D4, D0, D1, D2, D3, D5, B0, B1, B2, B3 }
#define UNUSED_PINS

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW

#define RGB_DI_PIN B7
#ifdef RGB_DI_PIN
  #define RGBLED_NUM 14
  #define RGBLIGHT_HUE_STEP 8
  #define RGBLIGHT_SAT_STEP 8
  #define RGBLIGHT_VAL_STEP 8
  #define RGBLIGHT_LIMIT_VAL 255 /* The maximum brightness level */
  #define RGBLIGHT_SLEEP  /* If defined, the RGB lighting will be switched off when the host goes to sleep */
  #define RGBLIGHT_ANIMATIONS
#endif

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE
