#!/bin/bb

(def keys {:a "LGUI_T(KC_A)"
           :r "LALT_T(KC_R)"
           :s "LCTL_T(KC_S)"
           :t "LSFT_T(KC_T)"
           :n "RSFT_T(KC_N)"
           :e "RCTL_T(KC_E)"
           :i "LALT_T(KC_I)"
           :o "RGUI_T(KC_O)"})

(defn kw->key [kw]
  (let [default (str "KC_" (str/upper-case (name kw)))]
    (get keys kw default)))

(def combos
  {[:q :w] :tilde
   [:w :f] :exlm
   [:f :p] :scln
   [:p :b] :at

   [:z :x] :grv
   [:x :c] :plus
   [:c :d] :minus
   [:d :v] :astr

   [:t :f] :esc

   [:q :a] :pipe
   [:w :r] :lbrc
   [:f :s] :lcbr
   [:p :t] :lprn
   [:b :g] :lt

   [:j :l] :hash
   [:l :u] :coln
   [:u :y] :dlr
   [:y :quot] :perc

   [:k :h] :ampr
   [:h :comm] :unds
   [:comm :dot] :circ
   [:dot :slsh] :eql
   [:n :u] :esc

   [:j :m] :gt
   [:l :n] :rprn
   [:u :e] :rcbr
   [:y :i] :rbrc
   [:quot :o] :bsls})

(defn combos->header-lines [combos]
  (let [with-names (map-indexed (fn [idx combo]
                                  (conj combo (str "combo_" idx)))
                                combos)]
    (-> []
        (into (for [[keys _ name] with-names
                    :let [keystr (->> keys
                                      (map kw->key)
                                      (str/join ", "))]]
                (format "const uint16_t PROGMEM %s[] = {%s, COMBO_END};" name keystr)))
        (conj "combo_t key_combos[] = {")
        (into (for [[_ res name] with-names]
                (format "\tCOMBO(%s, %s)," name (kw->key res))))
        (conj "};"))))

(->> combos
    combos->header-lines
    (str/join "\n")
    (spit "combos.h"))
