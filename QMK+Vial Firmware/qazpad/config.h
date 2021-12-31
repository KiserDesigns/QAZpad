/*
Copyright 2021 Noah Kiser (contact@kiserdesigns.com)

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

#define VENDOR_ID       0x4B44
#define PRODUCT_ID      0x5170
#define DEVICE_VER 	0x0001
#define MANUFACTURER    Kiser Designs
#define PRODUCT         QAZpad

#define MATRIX_ROWS 8
#define MATRIX_COLS 7

#define MATRIX_ROW_PINS { B4, B5, C6, B6, D0, D2, D5, D6 }
#define MATRIX_COL_PINS { F7, F6, F5, F4, F1, F0, C7 }
#define UNUSED_PINS

#define ENCODERS_PAD_A { D7, D3 }
#define ENCODERS_PAD_B { D4, D1 }
#define ENCODER_RESOLUTION 4
#define ENCODER_DIRECTION_FLIP

#define DIODE_DIRECTION COL2ROW

#define TAPPING_TERM 200

#define VIAL_ENCODER_DEFAULT { KC_VOLD, KC_VOLU, KC_PGDN, KC_PGUP, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS }

#endif
