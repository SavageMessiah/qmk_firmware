#!/bin/ruby

num_row = [
  [:C_1, [:KC_Q, 'LGUI_T(KC_A)'], :KC_1],
  [:C_2, [:KC_W, 'LALT_T(KC_R)'], :KC_2],
  [:C_3, [:KC_F, 'LCTL_T(KC_S)'], :KC_3],
  [:C_4, [:KC_P, 'LSFT_T(KC_T)'], :KC_4],
  [:C_5, %i[KC_B KC_G], :KC_5],
  [:C_6, %i[KC_J KC_M], :KC_6],
  [:C_7, [:KC_L, 'RSFT_T(KC_N)'], :KC_7],
  [:C_8, [:KC_U, 'RCTL_T(KC_E)'], :KC_8],
  [:C_9, [:KC_Y, 'LALT_T(KC_I)'], :KC_9],
  [:C_0, [:KC_QUOT, 'RGUI_T(KC_O)'], :KC_0]
]

home_brackets = [
  [:LANG, ['LGUI_T(KC_A)', 'LALT_T(KC_R)'], :KC_LT],
  [:LCURL, ['LALT_T(KC_R)', 'LCTL_T(KC_S)'], :KC_LCBR],
  [:LPAREN, ['LCTL_T(KC_S)', 'LSFT_T(KC_T)'], :KC_LPRN],
  [:LSQUARE, ['LSFT_T(KC_T)', :KC_G], :KC_LBRC],
  [:RSQUARE, [:KC_M, 'RSFT_T(KC_N)'], :KC_RBRC],
  [:RPAREN, ['RSFT_T(KC_N)', 'RCTL_T(KC_E)'], :KC_RPRN],
  [:RCURL, ['RCTL_T(KC_E)', 'LALT_T(KC_I)'], :KC_RCBR],
  [:RANG, ['LALT_T(KC_I)', 'RGUI_T(KC_O)'], :KC_GT]
]

left_other = [
  [:DASH, ['LCTL_T(KC_S)', :KC_C], :KC_MINUS],
  [:EQ, ['LSFT_T(KC_T)', :KC_D], :KC_EQL]
]

right_other = [
  [:SEMI, ['RSFT_T(KC_N)', :KC_H], :KC_SCLN],
  [:BSLS, ['RCTL_T(KC_E)', :KC_COMM], :KC_BSLS],
  [:GRV, ['LALT_T(KC_I)', :KC_DOT], :KC_GRV]
]

combos = num_row + home_brackets + left_other + right_other

File.open('combos.h', 'w') do |f|
  combos.each do |c|
    f.puts "const uint16_t PROGMEM #{c[0]}_combo[] = {#{c[1].map(&:to_s).join(', ')}, COMBO_END};"
  end
  f.puts ''
  f.puts 'combo_t key_combos[] = {'
  combos.each do |c|
    f.puts "\tCOMBO(#{c[0]}_combo, #{c[2]}),"
  end
  f.puts '};'
end
