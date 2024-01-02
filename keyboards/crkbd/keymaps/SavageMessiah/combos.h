const uint16_t PROGMEM LSQUARE_combo[] = {KC_B, KC_G, COMBO_END};
const uint16_t PROGMEM LPAREN_combo[] = {KC_P, LSFT_T(KC_T), COMBO_END};
const uint16_t PROGMEM LCURL_combo[] = {KC_F, LCTL_T(KC_S), COMBO_END};
const uint16_t PROGMEM LANG_combo[] = {KC_W, LALT_T(KC_R), COMBO_END};
const uint16_t PROGMEM RSQUARE_combo[] = {KC_J, KC_M, COMBO_END};
const uint16_t PROGMEM RPAREN_combo[] = {KC_L, RSFT_T(KC_N), COMBO_END};
const uint16_t PROGMEM RCURR_combo[] = {KC_U, RCTL_T(KC_E), COMBO_END};
const uint16_t PROGMEM RANG_combo[] = {KC_Y, LALT_T(KC_I), COMBO_END};
const uint16_t PROGMEM EQ_combo[] = {KC_G, KC_V, COMBO_END};
const uint16_t PROGMEM UNDER_combo[] = {LSFT_T(KC_T), KC_D, COMBO_END};
const uint16_t PROGMEM DASH_combo[] = {LCTL_T(KC_S), KC_C, COMBO_END};
const uint16_t PROGMEM SEMI_combo[] = {KC_M, KC_K, COMBO_END};
const uint16_t PROGMEM COLON_combo[] = {RSFT_T(KC_N), KC_H, COMBO_END};

combo_t key_combos[] = {
	COMBO(LSQUARE_combo, KC_LBRC),
	COMBO(LPAREN_combo, KC_LPRN),
	COMBO(LCURL_combo, KC_LCBR),
	COMBO(LANG_combo, KC_LT),
	COMBO(RSQUARE_combo, KC_RBRC),
	COMBO(RPAREN_combo, KC_RPRN),
	COMBO(RCURR_combo, KC_RCBR),
	COMBO(RANG_combo, KC_GT),
	COMBO(EQ_combo, KC_EQL),
	COMBO(UNDER_combo, KC_UNDS),
	COMBO(DASH_combo, KC_MINUS),
	COMBO(SEMI_combo, KC_SCLN),
	COMBO(COLON_combo, KC_COLN),
};
