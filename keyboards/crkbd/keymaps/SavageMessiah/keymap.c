/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

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

#include QMK_KEYBOARD_H
//https://getreuer.info/posts/keyboards/layer-lock/index.html
#include "features/layer_lock.h"
//https://getreuer.info/posts/keyboards/achordion/index.html
#include "features/achordion.h"

enum custom_keycodes {
    LLOCK = SAFE_RANGE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_NO,    KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,                         KC_J,    KC_L,    KC_U,    KC_Y,   KC_QUOT,  KC_NO,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_NO,  LGUI_T(KC_A), LALT_T(KC_R), LCTL_T(KC_S), LSFT_T(KC_T), KC_G,       KC_M,  RSFT_T(KC_N), RCTL_T(KC_E), LALT_T(KC_I), RGUI_T(KC_O), KC_NO,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_NO,    KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,                         KC_K,    KC_H,  KC_COMM,  KC_DOT,  KC_SLSH,  KC_NO,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                 CW_TOGG, KC_SPC,  LT(1, KC_TAB),     LT(2, KC_ENT), KC_BSPC, LT(3, KC_ESC)
                                      //`--------------------------'  `--------------------------'

  ),

    //NAV
    [1] = LAYOUT_split_3x6_3(                                                             //maybe put some keys for using warpd here?
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_TAB,                       KC_DEL,  KC_CUT, KC_COPY, KC_PSTE, KC_CAPS,  KC_NO,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       KC_NO,  KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO,                        KC_NO,   KC_LEFT,KC_DOWN, KC_UP,   KC_RIGHT, KC_NO,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       KC_NO,  KC_NO,   KC_NO,   KC_NO,   LLOCK,   KC_NO,                        KC_INS,  KC_HOME,KC_PGDN, KC_PGUP, KC_END,   KC_NO,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_NO,  KC_NO,   _______,     KC_ENT, KC_BSPC, KC_NO
                                      //`--------------------------'  `--------------------------'
  ),

    //NUMSYM
    [2] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_NO,  KC_LBRC, KC_7,     KC_8,    KC_9,   KC_RBRC,                      KC_NO,   KC_BSPC,  KC_NO,   KC_NO,   KC_NO,  KC_NO,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_NO,  KC_SCLN, KC_4,     KC_5,    KC_6,   KC_EQL,                       KC_NO,   KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_NO,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_NO,  KC_GRV,  KC_1,     KC_2,    KC_3,   KC_BSLS,                      KC_NO,   LLOCK,   _______, _______, _______, KC_NO,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                         KC_0,     KC_SPC, KC_MINUS,    _______,  KC_NO, KC_NO
                                      //`--------------------------'  `--------------------------'
  ),

    //FUNCFLAPS
    [3] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_NO,   KC_F12,  KC_F7,   KC_F8,   KC_F9,  KC_KB_VOLUME_UP,                KC_NO, KC_PSCR, KC_BRK,  KC_SCRL, KC_APP,  KC_NO,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_NO,   KC_F11,  KC_F4,   KC_F5,   KC_F6,  KC_KB_MUTE,                     KC_NO, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_NO,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_NO,   KC_F10,  KC_F1,   KC_F2,   KC_F3,  KC_KB_VOLUME_DOWN,              KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                MEH(KC_ESC), MEH(KC_SPC), MEH(KC_TAB),  KC_NO,   KC_NO,   _______
                                      //`--------------------------'  `--------------------------'
  )
};

bool process_record_user(uint16_t keycode, keyrecord_t* record) {
    /* if (!process_achordion(keycode, record)) { return false; } */
    if (!process_layer_lock(keycode, record, LLOCK)) { return false; }

    return true;
}

/* void matrix_scan_user(void) { */
/*     achordion_task(); */
/* } */

#include "combos.h"
