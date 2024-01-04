#!/bin/ruby
left = [
  [:SEMI, ['LCTL_T(KC_S)', :KC_T], :KC_SCLN],
  [:DASH, %i[KC_C KC_D], :KC_MINUS]
]

right = [
  [:COLON, [:KC_N, 'RCTL_T(KC_E)'], :KC_COLN],
  [:UNDER, %i[KC_H KC_COMM], :KC_UNDS],
  [:EQ, %i[KC_L KC_U], :KC_EQL]
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
