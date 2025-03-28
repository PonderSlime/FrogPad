/* Copyright 2024 Micah Edwards
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H


void process_combo_event(uint16_t combo_index, bool pressed) {
    if (!pressed) {
        switch(combo_index) {
            
        }
    }
}

/* bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        // Do nothing on press
        return false; // Skip further processing of this key
    } else {
        // Send keycode on release
        register_code(keycode);
        unregister_code(keycode);
        return false; // Skip further processing of this key
    }
} */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_A, KC_B,   KC_C,   KC_D,   KC_E, \
        KC_F, KC_G,   KC_H,   KC_I,   KC_J,  \
        KC_K, KC_L,   KC_M,   KC_N,   KC_O
    ),
    [1] = LAYOUT(
        KC_TRNS, KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS, \
        KC_TRNS, KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,  \
        KC_TRNS, KC_TRNS,   KC_TRNS,   KC_TRNS,   AC_TOGG
    ),
    [2] = LAYOUT(
        KC_TRNS, KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS, \
        KC_TRNS, KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,  \
        KC_TRNS, KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS
    ),
    [3] = LAYOUT(
        KC_TRNS, KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS, \
        KC_TRNS, KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,  \
        KC_TRNS, KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS
    )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(MS_WHLU, MS_WHLD) },
    [1] = { ENCODER_CCW_CW(MS_WHLU, MS_WHLD) },
    [2] = { ENCODER_CCW_CW(MS_WHLU, MS_WHLD) },
    [3] = { ENCODER_CCW_CW(MS_WHLU, MS_WHLD) }
};
#endif

#if defined(DIP_SWITCH_MAP_ENABLE)
const uint16_t PROGMEM dip_switch_map[NUM_DIP_SWITCHES][NUM_DIP_STATES] = {
    DIP_SWITCH_OFF_ON(KC_A, KC_B),
};
#endif

/*
void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

bool led_update_user(led_t led_state) {
    return true;
}
*/
