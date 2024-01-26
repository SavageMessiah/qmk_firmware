#!/bin/ruby
left = [
  [:SEMI, %i[KC_F KC_P], :KC_SCLN],
  [:DASH, %i[KC_C KC_D], :KC_MINUS],
  [:LESC, ['LSFT_T(KC_T)', :KC_F], :KC_ESC]
]

right = [
  [:COLON, %i[KC_L KC_U], :KC_COLN],
  [:UNDER, %i[KC_H KC_COMM], :KC_UNDS],
  [:RESC, ['RSFT_T(KC_N)', :KC_U], :KC_ESC]
]

combos = left + right

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
