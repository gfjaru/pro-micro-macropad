#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x2020
#define DEVICE_VER      0x0001
#define MANUFACTURER    Fajar Umbara
#define PRODUCT         mk2handwire
#define DESCRIPTION     2 button that save your life

#define MATRIX_ROWS 1
#define MATRIX_COLS 2

#define MATRIX_ROW_PINS { B1 }
#define MATRIX_COL_PINS { B3, B2 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

#define DEBOUNCE 5