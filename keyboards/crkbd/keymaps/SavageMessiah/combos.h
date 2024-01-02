const uint16_t PROGMEM C_1_combo[] = {KC_Q, LGUI_T(KC_A), COMBO_END};
const uint16_t PROGMEM C_2_combo[] = {KC_W, LALT_T(KC_R), COMBO_END};
const uint16_t PROGMEM C_3_combo[] = {KC_F, LCTL_T(KC_S), COMBO_END};
const uint16_t PROGMEM C_4_combo[] = {KC_P, LSFT_T(KC_T), COMBO_END};
const uint16_t PROGMEM C_5_combo[] = {KC_B, KC_G, COMBO_END};
const uint16_t PROGMEM C_6_combo[] = {KC_J, KC_M, COMBO_END};
const uint16_t PROGMEM C_7_combo[] = {KC_L, RSFT_T(KC_N), COMBO_END};
const uint16_t PROGMEM C_8_combo[] = {KC_U, RCTL_T(KC_E), COMBO_END};
const uint16_t PROGMEM C_9_combo[] = {KC_Y, LALT_T(KC_I), COMBO_END};
const uint16_t PROGMEM C_0_combo[] = {KC_QUOT, RGUI_T(KC_O), COMBO_END};
const uint16_t PROGMEM LANG_combo[] = {LGUI_T(KC_A), LALT_T(KC_R), COMBO_END};
const uint16_t PROGMEM LCURL_combo[] = {LALT_T(KC_R), LCTL_T(KC_S), COMBO_END};
const uint16_t PROGMEM LPAREN_combo[] = {LCTL_T(KC_S), LSFT_T(KC_T), COMBO_END};
const uint16_t PROGMEM LSQUARE_combo[] = {LSFT_T(KC_T), KC_G, COMBO_END};
const uint16_t PROGMEM RSQUARE_combo[] = {KC_M, RSFT_T(KC_N), COMBO_END};
const uint16_t PROGMEM RPAREN_combo[] = {RSFT_T(KC_N), RCTL_T(KC_E), COMBO_END};
const uint16_t PROGMEM RCURL_combo[] = {RCTL_T(KC_E), LALT_T(KC_I), COMBO_END};
const uint16_t PROGMEM RANG_combo[] = {LALT_T(KC_I), RGUI_T(KC_O), COMBO_END};
const uint16_t PROGMEM DASH_combo[] = {LCTL_T(KC_S), KC_C, COMBO_END};
const uint16_t PROGMEM EQ_combo[] = {LSFT_T(KC_T), KC_D, COMBO_END};
const uint16_t PROGMEM SEMI_combo[] = {RSFT_T(KC_N), KC_H, COMBO_END};
const uint16_t PROGMEM BSLS_combo[] = {RCTL_T(KC_E), KC_COMM, COMBO_END};
const uint16_t PROGMEM GRV_combo[] = {LALT_T(KC_I), KC_DOT, COMBO_END};

combo_t key_combos[] = {
	COMBO(C_1_combo, KC_1),
	COMBO(C_2_combo, KC_2),
	COMBO(C_3_combo, KC_3),
	COMBO(C_4_combo, KC_4),
	COMBO(C_5_combo, KC_5),
	COMBO(C_6_combo, KC_6),
	COMBO(C_7_combo, KC_7),
	COMBO(C_8_combo, KC_8),
	COMBO(C_9_combo, KC_9),
	COMBO(C_0_combo, KC_0),
	COMBO(LANG_combo, KC_LT),
	COMBO(LCURL_combo, KC_LCBR),
	COMBO(LPAREN_combo, KC_LPRN),
	COMBO(LSQUARE_combo, KC_LBRC),
	COMBO(RSQUARE_combo, KC_RBRC),
	COMBO(RPAREN_combo, KC_RPRN),
	COMBO(RCURL_combo, KC_RCBR),
	COMBO(RANG_combo, KC_GT),
	COMBO(DASH_combo, KC_MINUS),
	COMBO(EQ_combo, KC_EQL),
	COMBO(SEMI_combo, KC_SCLN),
	COMBO(BSLS_combo, KC_BSLS),
	COMBO(GRV_combo, KC_GRV),
};
