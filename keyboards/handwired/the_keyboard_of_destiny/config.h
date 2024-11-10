#pragma once

#define MATRIX_ROWS 4
#define MATRIX_COLS 9

// Rows are direct pins
#define MATRIX_ROW_PINS { D1, D0, D4, C6 }
// Cols are direct pins
#define MATRIX_COL_PINS { D7, E6, B4, B5, B6, B2, B3, B1, F7 }

// Diode direction
#define DIODE_DIRECTION COL2ROW

// Other recommended settings
#define DEBOUNCE 5
#define FORCE_NKRO
