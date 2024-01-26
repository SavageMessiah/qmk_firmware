const uint16_t PROGMEM SEMI_combo[] = {KC_F, KC_P, COMBO_END};
const uint16_t PROGMEM DASH_combo[] = {KC_C, KC_D, COMBO_END};
const uint16_t PROGMEM LESC_combo[] = {LSFT_T(KC_T), KC_F, COMBO_END};
const uint16_t PROGMEM COLON_combo[] = {KC_L, KC_U, COMBO_END};
const uint16_t PROGMEM UNDER_combo[] = {KC_H, KC_COMM, COMBO_END};
const uint16_t PROGMEM RESC_combo[] = {RSFT_T(KC_N), KC_U, COMBO_END};

combo_t key_combos[] = {
	COMBO(SEMI_combo, KC_SCLN),
	COMBO(DASH_combo, KC_MINUS),
	COMBO(LESC_combo, KC_ESC),
	COMBO(COLON_combo, KC_COLN),
	COMBO(UNDER_combo, KC_UNDS),
	COMBO(RESC_combo, KC_ESC),
};
