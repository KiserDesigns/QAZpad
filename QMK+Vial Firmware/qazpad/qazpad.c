#include "qazpad.h"

void matrix_init_kb(void) {
	matrix_init_user();
}

bool encoder_update_kb(uint8_t index, bool clockwise) {
    return encoder_update_user(index, clockwise);
}