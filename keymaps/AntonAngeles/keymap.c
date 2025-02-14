// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#define _BASE 0 //defining base layer
#define _FIRST 1 //defining the 1st layer
#define _SECOND 2 //defining the 2nd layer
#define _TOGGLE 3 //defining the 2nd layer



//this refers to the matrix rows and coils in keyboard.json
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
     * │tab│ q │ w │ e │ r │ t │ y │ u │ i │ o │ p │bsp│
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │esc│ a │ s │ d │ f │ g │ h │ j │ k │ l │ ; │ ' │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │sft│ z │ x │ c │ v │ b │ n │ m │ , │ . │ / │sen│ shift hold and enter tap
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │ctr│ent│alt│win│L1 │spc│spc│ L2│ le│Dw │ Up│ Ri│
     * └───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┘
	 * visual representation of the keymap.
     */
	 
	 
	 //First layer
	 //These are all keycodes that QMK uses for keymapping.
	 //base layer layout codes
    [_BASE] = LAYOUT_ortho_4x12(
        KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    	KC_O,    	KC_P,  		KC_BSPC,
        KC_ESC,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    	KC_L,    	KC_SCLN,  	KC_QUOT,
        KC_LSFT,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMMA, KC_DOT,   	KC_SLASH,   SFT_T(KC_ENT),
        KC_LCTL,   KC_ENT, KC_LGUI, KC_LALT, MO(_FIRST),KC_SPC,TG(_TOGGLE), MO(_SECOND),KC_LEFT,	KC_DOWN,	KC_UP,    	KC_RGHT
    ), 
	// first layer layout codes
	[_FIRST] = LAYOUT_ortho_4x12(
        KC_GRV,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_CIRC, KC_AMPR, KC_ASTR,  KC_LPRN,    KC_RPRN,  	KC_BSPC,
        KC_TRNS,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_UNDS, KC_PLUS,  KC_LCBR,    KC_RCBR,  	KC_PIPE,
        KC_TRNS,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_TRNS, KC_TRNS, KC_TRNS, 	KC_TRNS, 	KC_TRNS,   	KC_TRNS,
        KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MNXT,  KC_VOLD,  	KC_VOLU,    KC_MPLY
    ),
	//second layer layout codes         
	[_SECOND] = LAYOUT_ortho_4x12(
        KC_TRNS,   KC_7,    KC_8,    KC_9,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    	KC_9,    	KC_0,  		KC_BSPC,
        KC_TRNS,   KC_4,    KC_5,    KC_6,    KC_F4,   KC_F5,   KC_F6,   KC_MINS, KC_EQL,   KC_LBRC,   	KC_RBRC,  	KC_BSLS,
        KC_LSFT,   KC_1,    KC_2,    KC_3,    KC_0, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,   	KC_TRNS,   	KC_DEL,
        KC_PGUP,   KC_PGDN, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,	KC_TRNS, KC_TRNS, KC_MNXT,  KC_VOLD,  	KC_VOLU,    KC_MPLY
    ),
    // base toggle switch layer layout codes
	[_TOGGLE] = LAYOUT_ortho_4x12(
        KC_TAB,    KC_7,    KC_8,    KC_9,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    	KC_O,    	KC_P,  		KC_BSPC,
        KC_ESC,    KC_4,    KC_5,    KC_6,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    	KC_L,    	KC_SCLN,  	KC_QUOT,
        KC_LSFT,   KC_1,    KC_2,    KC_3,    KC_0,    KC_B,    KC_N,    KC_M,    KC_COMMA, KC_DOT,   	KC_SLASH,   SFT_T(KC_ENT),
        KC_LCTL,   KC_ENT, KC_LGUI, KC_LALT, MO(_SECOND),KC_SPC, KC_TRNS, MO(_FIRST),KC_LEFT,	KC_DOWN,	KC_UP,    	KC_RGHT
    ), 
};
