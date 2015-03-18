static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  KEYMAP( // Layer 0
  // Left hand
    ESC,    1,    2,    3,    4,    5,  GRV,
    TAB,    Q,    W,    E,    R,    T, LBRC,
  LCTRL,    A,    S,    D,    F,    G,
   LSFT,    Z,    X,    C,    V,    B, FN22,
    FN3,  FN2,  FN1, LALT, LGUI,
                                      _MUTE,_VOLDOWN,
                                             LALT,
                                  FN1, BSPC,  DEL,

  // Right hand
         BSLS,    6,    7,    8,    9,    0, MINS,
         RBRC,    Y,    U,    I,    O,    P,  EQL,
                  H,    J,    K,    L, SCLN, QUOT,
         FN23,    N,    M, COMM,  DOT, SLSH, RSFT,
                     RGUI, LEFT, DOWN,   UP, RGHT,
  _VOLUP, STOP,
   RALT,
    FN4,  ENT,  SPC),

  KEYMAP( // Layer 1
  // Left hand
   TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
    FN5, TRNS, FN19, TRNS, FN17, FN18, TRNS,
   TRNS, FN14, FN15, FN16, FN10, TRNS,
   TRNS,  FN6,  FN7,  FN8,  FN9, FN11, TRNS,
   TRNS, TRNS, TRNS, TRNS, TRNS,
                                       TRNS, TRNS,
                                             TRNS,
                                 TRNS, TRNS, TRNS,

  // Right hand
         TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
         TRNS, HOME, PGDN, PGUP,  END, FN13, TRNS,
               LEFT, DOWN,   UP, RGHT, TRNS, TRNS,
         TRNS, FN20, TRNS, TRNS, TRNS, TRNS, TRNS,
                     TRNS, TRNS, TRNS, TRNS, TRNS,
   TRNS, TRNS,
   TRNS,
   TRNS, TRNS, FN21),

  KEYMAP( // Layer 2
  // Left hand
   TRNS, TRNS, TRNS, WH_U, TRNS, TRNS, TRNS,
   TRNS, TRNS, WH_L, MS_U, WH_R, TRNS, TRNS,
   TRNS, TRNS, MS_L, MS_D, MS_R, TRNS,
   TRNS, TRNS, TRNS, WH_D, TRNS, TRNS, TRNS,
   TRNS, TRNS, TRNS, TRNS, TRNS,
                                       ACL0, ACL1,
                                             TRNS,
                                 TRNS, TRNS, TRNS,

  // Right hand
         TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
         TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
               LEFT, DOWN,   UP, RGHT, TRNS, TRNS,
         TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
                     TRNS, TRNS, TRNS, TRNS, TRNS,
   ACL2, TRNS,
   TRNS,
   TRNS, BTN1, BTN2),

  KEYMAP( // Layer 3
  // Left hand
    FN0, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
   TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
   TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
   TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
   TRNS, TRNS, TRNS, TRNS, TRNS,
                                       TRNS, TRNS,
                                             TRNS,
                                 TRNS, TRNS, TRNS,

  // Right hand
         TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
         TRNS, HOME, PGDN, PGUP,  END, TRNS, TRNS,
               LEFT, DOWN,   UP, RGHT, TRNS, TRNS,
         TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
                     TRNS, TRNS, TRNS, TRNS, TRNS,
   TRNS, TRNS,
   TRNS,
   TRNS, TRNS, TRNS)
};

enum function_id {
  TEENSY_KEY,
};


static const uint16_t PROGMEM fn_actions[] = {
  ACTION_FUNCTION(TEENSY_KEY),
  ACTION_LAYER_MOMENTARY(1),
  ACTION_LAYER_MOMENTARY(2),
  ACTION_LAYER_MOMENTARY(3),
  ACTION_LAYER_TOGGLE(2),
  ACTION_MODS_KEY(MOD_LGUI, KC_TAB),
  ACTION_MODS_KEY(MOD_LGUI, KC_Z),
  ACTION_MODS_KEY(MOD_LGUI, KC_X),
  ACTION_MODS_KEY(MOD_LGUI, KC_C),
  ACTION_MODS_KEY(MOD_LGUI, KC_V),
  ACTION_MODS_KEY(MOD_LGUI, KC_F),
  ACTION_MODS_KEY(MOD_LGUI, KC_B),
  ACTION_MODS_KEY(MOD_LGUI, KC_I),
  ACTION_MODS_KEY(MOD_LGUI, KC_P),
  ACTION_MODS_KEY(MOD_LGUI, KC_A),
  ACTION_MODS_KEY(MOD_LGUI, KC_S),
  ACTION_MODS_KEY(MOD_LGUI, KC_D),
  ACTION_MODS_KEY(MOD_LGUI, KC_R),
  ACTION_MODS_KEY(MOD_LGUI, KC_T),
  ACTION_MODS_KEY(MOD_LGUI, KC_W),
  ACTION_MODS_KEY(MOD_LGUI, KC_N),
  ACTION_MODS_KEY(MOD_LGUI, KC_SPC),
  ACTION_MODS_KEY(MOD_LSFT, KC_9),
  ACTION_MODS_KEY(MOD_LSFT, KC_0),
};

void action_function(keyrecord_t *event, uint8_t id, uint8_t opt)
{
    if (id == TEENSY_KEY) {
        clear_keyboard();
        print("\n\nJump to bootloader... ");
        _delay_ms(250);
        bootloader_jump(); // should not return
        print("not supported.\n");
    }
}