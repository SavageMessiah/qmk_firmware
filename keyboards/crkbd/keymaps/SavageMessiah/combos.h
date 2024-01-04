const uint16_t PROGMEM SEMI_combo[] = {LCTL_T(KC_S), KC_T, COMBO_END};
const uint16_t PROGMEM DASH_combo[] = {KC_C, KC_D, COMBO_END};
const uint16_t PROGMEM COLON_combo[] = {KC_N, RCTL_T(KC_E), COMBO_END};
const uint16_t PROGMEM UNDER_combo[] = {KC_H, KC_COMM, COMBO_END};
const uint16_t PROGMEM EQ_combo[] = {KC_L, KC_U, COMBO_END};

combo_t key_combos[] = {
	COMBO(SEMI_combo, KC_SCLN),
	COMBO(DASH_combo, KC_MINUS),
	COMBO(COLON_combo, KC_COLN),
	COMBO(UNDER_combo, KC_UNDS),
	COMBO(EQ_combo, KC_EQL),
};
