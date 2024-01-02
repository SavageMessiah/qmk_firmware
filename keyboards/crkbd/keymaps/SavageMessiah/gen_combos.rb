#!/bin/ruby

left_brackets = [
  [:LSQUARE, %i[KC_B KC_G], :KC_LBRC],
  [:LPAREN, [:KC_P, 'LSFT_T(KC_T)'], :KC_LPRN],
  [:LCURL, [:KC_F, 'LCTL_T(KC_S)'], :KC_LCBR],
  [:LANG, [:KC_W, 'LALT_T(KC_R)'], :KC_LT]
]

right_brackets = [
  [:RSQUARE, %i[KC_J KC_M], :KC_RBRC],
  [:RPAREN, [:KC_L, 'RSFT_T(KC_N)'], :KC_RPRN],
  [:RCURR, [:KC_U, 'RCTL_T(KC_E)'], :KC_RCBR],
  [:RANG, [:KC_Y, 'LALT_T(KC_I)'], :KC_GT]
]

left_other = [
  [:EQ, %i[KC_G KC_V], :KC_EQL],
  [:UNDER, ['LSFT_T(KC_T)', :KC_D], :KC_UNDS],
  [:DASH, ['LCTL_T(KC_S)',  :KC_C], :KC_MINUS]
]

right_other = [
  [:SEMI, %i[KC_M KC_K], :KC_SCLN],
  [:COLON, ['RSFT_T(KC_N)', :KC_H], :KC_COLN]
]

combos = left_brackets + right_brackets + left_other + right_other

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
