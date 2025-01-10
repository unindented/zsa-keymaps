#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  MAC_LOCK,
};



enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
  DANCE_3,
  DANCE_4,
  DANCE_5,
  DANCE_6,
  DANCE_7,
  DANCE_8,
  DANCE_9,
  DANCE_10,
  DANCE_11,
  DANCE_12,
  DANCE_13,
  DANCE_14,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    MO(5),          KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,       
    TG(4),          TD(DANCE_0),    TD(DANCE_1),    TD(DANCE_2),    TD(DANCE_3),    TD(DANCE_4),                                    KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_GRAVE,       
    ALL_T(KC_ESCAPE),TD(DANCE_5),    TD(DANCE_6),    TD(DANCE_7),    TD(DANCE_8),    TD(DANCE_9),                                    KC_H,           MT(MOD_RSFT, KC_J),MT(MOD_RGUI, KC_K),MT(MOD_LALT, KC_L),MT(MOD_RCTL, KC_SCLN),KC_QUOTE,       
    KC_MEH,         TD(DANCE_10),   TD(DANCE_11),   TD(DANCE_12),   TD(DANCE_13),   TD(DANCE_14),                                   KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_BSLS,        
                                                    LT(1,KC_SPACE), LT(2,KC_TAB),                                   KC_BSPC,        LT(3,KC_ENTER)
  ),
  [1] = LAYOUT_voyager(
    KC_NO,          KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,                                          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_HOME,        LGUI(KC_LEFT),  LGUI(KC_RIGHT), KC_END,         KC_NO,          KC_F12,         
    KC_HYPR,        KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_LEFT_GUI,    KC_LEFT_SHIFT,  KC_NO,                                          KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       LGUI(KC_LBRC),  LGUI(KC_RBRC),  
    KC_MEH,         KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          LGUI(LSFT(KC_GRAVE)),LCTL(LSFT(KC_TAB)),LCTL(KC_TAB),   LGUI(KC_GRAVE), LGUI(KC_MINUS), LGUI(LSFT(KC_EQUAL)),
                                                    KC_TRANSPARENT, KC_NO,                                          KC_NO,          KC_NO
  ),
  [2] = LAYOUT_voyager(
    KC_NO,          KC_F13,         KC_F14,         KC_F15,         KC_F16,         KC_F17,                                         KC_F18,         KC_F19,         KC_F20,         KC_F21,         KC_F22,         KC_F23,         
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_KP_MINUS,    KC_KP_SLASH,    KC_F24,         
    KC_HYPR,        KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_LEFT_GUI,    KC_LEFT_SHIFT,  KC_NO,                                          KC_KP_4,        KC_KP_5,        KC_KP_6,        KC_KP_PLUS,     KC_KP_ASTERISK, KC_TAB,         
    KC_MEH,         KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_KP_DOT,      KC_KP_EQUAL,    KC_KP_ENTER,    
                                                    KC_NO,          KC_TRANSPARENT,                                 KC_BSPC,        KC_KP_0
  ),
  [3] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_EXLM,        KC_AMPR,        KC_LBRC,        KC_RBRC,        KC_LABK,                                        KC_TILD,        KC_CIRC,        KC_DLR,         KC_QUES,        KC_AT,          KC_NO,          
    KC_NO,          KC_PLUS,        KC_EQUAL,       KC_LPRN,        KC_RPRN,        KC_RABK,                                        KC_GRAVE,       KC_QUOTE,       KC_DQUO,        KC_EXLM,        KC_COLN,        ST_MACRO_0,     
    KC_NO,          KC_MINUS,       KC_PIPE,        KC_LCBR,        KC_RCBR,        KC_HASH,                                        KC_PERC,        KC_UNDS,        KC_BSLS,        KC_ASTR,        KC_SLASH,       ST_MACRO_1,     
                                                    KC_NO,          KC_NO,                                          KC_NO,          KC_TRANSPARENT
  ),
  [4] = LAYOUT_voyager(
    KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_A,           KC_S,           KC_D,           KC_F,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_X,           KC_C,           KC_V,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          TOGGLE_LAYER_COLOR,RGB_VAD,        RGB_VAI,        KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_AUDIO_MUTE,  KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_NO,          KC_NO,          KC_NO,          
    EE_CLR,         KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_STOP,  KC_MEDIA_NEXT_TRACK,KC_NO,          KC_NO,          
    QK_BOOT,        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          MAC_LOCK,       KC_BRIGHTNESS_DOWN,KC_BRIGHTNESS_UP,KC_NO,          KC_NO,          KC_NO,          
                                                    KC_NO,          KC_NO,                                          KC_NO,          KC_NO
  ),
};



extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {251,255,142}, {78,207,162}, {78,207,162}, {78,207,162}, {78,207,162}, {78,207,162}, {147,255,248}, {147,255,248}, {147,255,248}, {147,255,248}, {147,255,248}, {147,255,248}, {165,27,121}, {190,146,254}, {190,146,254}, {190,146,254}, {190,146,254}, {147,255,248}, {165,27,121}, {147,255,248}, {147,255,248}, {147,255,248}, {147,255,248}, {147,255,248}, {112,152,221}, {78,207,162}, {78,207,162}, {78,207,162}, {78,207,162}, {78,207,162}, {78,207,162}, {144,211,255}, {147,255,248}, {147,255,248}, {147,255,248}, {147,255,248}, {147,255,248}, {144,211,255}, {147,255,248}, {190,146,254}, {190,146,254}, {190,146,254}, {190,146,254}, {144,211,255}, {147,255,248}, {147,255,248}, {144,211,255}, {144,211,255}, {144,211,255}, {144,211,255}, {165,27,121}, {22,255,167} },

    [1] = { {0,0,0}, {27,255,239}, {27,255,239}, {27,255,239}, {27,255,239}, {27,255,239}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {165,27,121}, {190,146,254}, {190,146,254}, {190,146,254}, {190,146,254}, {0,0,0}, {165,27,121}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {27,255,239}, {27,255,239}, {27,255,239}, {27,255,239}, {27,255,239}, {27,255,239}, {112,152,221}, {112,152,221}, {112,152,221}, {112,152,221}, {0,0,0}, {27,255,239}, {120,255,159}, {120,255,159}, {120,255,159}, {120,255,159}, {112,152,221}, {112,152,221}, {112,152,221}, {112,152,221}, {112,152,221}, {112,152,221}, {112,152,221}, {112,152,221}, {0,0,0}, {0,0,0} },

    [2] = { {0,0,0}, {27,255,239}, {27,255,239}, {27,255,239}, {27,255,239}, {27,255,239}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {165,27,121}, {190,146,254}, {190,146,254}, {190,146,254}, {190,146,254}, {0,0,0}, {165,27,121}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {27,255,239}, {27,255,239}, {27,255,239}, {27,255,239}, {27,255,239}, {27,255,239}, {78,207,162}, {78,207,162}, {78,207,162}, {64,145,216}, {64,145,216}, {27,255,239}, {78,207,162}, {78,207,162}, {78,207,162}, {64,145,216}, {64,145,216}, {165,27,121}, {78,207,162}, {78,207,162}, {78,207,162}, {64,145,216}, {64,145,216}, {165,27,121}, {165,27,121}, {78,207,162} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {215,171,225}, {215,171,225}, {11,210,255}, {11,210,255}, {11,210,255}, {0,0,0}, {27,255,239}, {27,255,239}, {11,210,255}, {11,210,255}, {11,210,255}, {0,0,0}, {27,255,239}, {215,171,225}, {11,210,255}, {11,210,255}, {22,255,167}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {215,171,225}, {215,171,225}, {215,171,225}, {215,171,225}, {215,171,225}, {0,0,0}, {165,27,121}, {165,27,121}, {165,27,121}, {215,171,225}, {215,171,225}, {165,27,121}, {22,255,167}, {215,171,225}, {215,171,225}, {27,255,239}, {27,255,239}, {165,27,121}, {0,0,0}, {0,0,0} },

    [4] = { {0,0,0}, {78,207,162}, {78,207,162}, {78,207,162}, {78,207,162}, {78,207,162}, {0,0,0}, {147,255,248}, {147,255,248}, {147,255,248}, {147,255,248}, {147,255,248}, {165,27,121}, {147,255,248}, {147,255,248}, {147,255,248}, {147,255,248}, {147,255,248}, {165,27,121}, {147,255,248}, {147,255,248}, {147,255,248}, {147,255,248}, {147,255,248}, {0,0,0}, {0,0,0}, {78,207,162}, {78,207,162}, {78,207,162}, {78,207,162}, {78,207,162}, {147,255,248}, {147,255,248}, {147,255,248}, {147,255,248}, {147,255,248}, {147,255,248}, {147,255,248}, {147,255,248}, {147,255,248}, {147,255,248}, {147,255,248}, {147,255,248}, {147,255,248}, {147,255,248}, {147,255,248}, {147,255,248}, {147,255,248}, {147,255,248}, {147,255,248}, {0,0,0}, {0,0,0} },

    [5] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {251,255,142}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {251,255,142}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,121,255}, {0,121,255}, {0,121,255}, {0,0,0}, {0,0,0}, {0,0,0}, {69,191,192}, {69,191,192}, {69,191,192}, {0,0,0}, {0,0,0}, {0,0,0}, {78,207,162}, {78,207,162}, {78,207,162}, {78,207,162}, {0,0,0}, {0,0,0}, {0,121,255}, {27,255,239}, {27,255,239}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
    case 5:
      set_layer_color(5);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_SCLN)) SS_DELAY(100) SS_LSFT(SS_TAP(X_SCLN)));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_DOT) SS_DELAY(100) SS_TAP(X_DOT) SS_DELAY(100) SS_TAP(X_SLASH));
    }
    break;
    case MAC_LOCK:
      HCS(0x19E);

    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}


typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[15];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_Q);
        tap_code16(KC_Q);
        tap_code16(KC_Q);
    }
    if(state->count > 3) {
        tap_code16(KC_Q);
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_Q); break;
        case DOUBLE_TAP: register_code16(LGUI(KC_Q)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_Q); register_code16(KC_Q);
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_Q); break;
        case DOUBLE_TAP: unregister_code16(LGUI(KC_Q)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_Q); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(tap_dance_state_t *state, void *user_data);
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void on_dance_1(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_W);
        tap_code16(KC_W);
        tap_code16(KC_W);
    }
    if(state->count > 3) {
        tap_code16(KC_W);
    }
}

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(KC_W); break;
        case DOUBLE_TAP: register_code16(LGUI(KC_W)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_W); register_code16(KC_W);
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(KC_W); break;
        case DOUBLE_TAP: unregister_code16(LGUI(KC_W)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_W); break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(tap_dance_state_t *state, void *user_data);
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void on_dance_2(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_E);
        tap_code16(KC_E);
        tap_code16(KC_E);
    }
    if(state->count > 3) {
        tap_code16(KC_E);
    }
}

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(KC_E); break;
        case DOUBLE_TAP: register_code16(LGUI(KC_E)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_E); register_code16(KC_E);
    }
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(KC_E); break;
        case DOUBLE_TAP: unregister_code16(LGUI(KC_E)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_E); break;
    }
    dance_state[2].step = 0;
}
void on_dance_3(tap_dance_state_t *state, void *user_data);
void dance_3_finished(tap_dance_state_t *state, void *user_data);
void dance_3_reset(tap_dance_state_t *state, void *user_data);

void on_dance_3(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_R);
        tap_code16(KC_R);
        tap_code16(KC_R);
    }
    if(state->count > 3) {
        tap_code16(KC_R);
    }
}

void dance_3_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP: register_code16(KC_R); break;
        case DOUBLE_TAP: register_code16(LGUI(KC_R)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_R); register_code16(KC_R);
    }
}

void dance_3_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
        case SINGLE_TAP: unregister_code16(KC_R); break;
        case DOUBLE_TAP: unregister_code16(LGUI(KC_R)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_R); break;
    }
    dance_state[3].step = 0;
}
void on_dance_4(tap_dance_state_t *state, void *user_data);
void dance_4_finished(tap_dance_state_t *state, void *user_data);
void dance_4_reset(tap_dance_state_t *state, void *user_data);

void on_dance_4(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_T);
        tap_code16(KC_T);
        tap_code16(KC_T);
    }
    if(state->count > 3) {
        tap_code16(KC_T);
    }
}

void dance_4_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[4].step = dance_step(state);
    switch (dance_state[4].step) {
        case SINGLE_TAP: register_code16(KC_T); break;
        case DOUBLE_TAP: register_code16(LGUI(KC_T)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_T); register_code16(KC_T);
    }
}

void dance_4_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[4].step) {
        case SINGLE_TAP: unregister_code16(KC_T); break;
        case DOUBLE_TAP: unregister_code16(LGUI(KC_T)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_T); break;
    }
    dance_state[4].step = 0;
}
void on_dance_5(tap_dance_state_t *state, void *user_data);
void dance_5_finished(tap_dance_state_t *state, void *user_data);
void dance_5_reset(tap_dance_state_t *state, void *user_data);

void on_dance_5(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_A);
        tap_code16(KC_A);
        tap_code16(KC_A);
    }
    if(state->count > 3) {
        tap_code16(KC_A);
    }
}

void dance_5_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[5].step = dance_step(state);
    switch (dance_state[5].step) {
        case SINGLE_TAP: register_code16(KC_A); break;
        case SINGLE_HOLD: register_code16(KC_LEFT_CTRL); break;
        case DOUBLE_TAP: register_code16(LGUI(KC_A)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_A); register_code16(KC_A);
    }
}

void dance_5_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[5].step) {
        case SINGLE_TAP: unregister_code16(KC_A); break;
        case SINGLE_HOLD: unregister_code16(KC_LEFT_CTRL); break;
        case DOUBLE_TAP: unregister_code16(LGUI(KC_A)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_A); break;
    }
    dance_state[5].step = 0;
}
void on_dance_6(tap_dance_state_t *state, void *user_data);
void dance_6_finished(tap_dance_state_t *state, void *user_data);
void dance_6_reset(tap_dance_state_t *state, void *user_data);

void on_dance_6(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_S);
        tap_code16(KC_S);
        tap_code16(KC_S);
    }
    if(state->count > 3) {
        tap_code16(KC_S);
    }
}

void dance_6_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[6].step = dance_step(state);
    switch (dance_state[6].step) {
        case SINGLE_TAP: register_code16(KC_S); break;
        case SINGLE_HOLD: register_code16(KC_LEFT_ALT); break;
        case DOUBLE_TAP: register_code16(LGUI(KC_S)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_S); register_code16(KC_S);
    }
}

void dance_6_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[6].step) {
        case SINGLE_TAP: unregister_code16(KC_S); break;
        case SINGLE_HOLD: unregister_code16(KC_LEFT_ALT); break;
        case DOUBLE_TAP: unregister_code16(LGUI(KC_S)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_S); break;
    }
    dance_state[6].step = 0;
}
void on_dance_7(tap_dance_state_t *state, void *user_data);
void dance_7_finished(tap_dance_state_t *state, void *user_data);
void dance_7_reset(tap_dance_state_t *state, void *user_data);

void on_dance_7(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_D);
        tap_code16(KC_D);
        tap_code16(KC_D);
    }
    if(state->count > 3) {
        tap_code16(KC_D);
    }
}

void dance_7_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[7].step = dance_step(state);
    switch (dance_state[7].step) {
        case SINGLE_TAP: register_code16(KC_D); break;
        case SINGLE_HOLD: register_code16(KC_LEFT_GUI); break;
        case DOUBLE_TAP: register_code16(LGUI(KC_D)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_D); register_code16(KC_D);
    }
}

void dance_7_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[7].step) {
        case SINGLE_TAP: unregister_code16(KC_D); break;
        case SINGLE_HOLD: unregister_code16(KC_LEFT_GUI); break;
        case DOUBLE_TAP: unregister_code16(LGUI(KC_D)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_D); break;
    }
    dance_state[7].step = 0;
}
void on_dance_8(tap_dance_state_t *state, void *user_data);
void dance_8_finished(tap_dance_state_t *state, void *user_data);
void dance_8_reset(tap_dance_state_t *state, void *user_data);

void on_dance_8(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F);
        tap_code16(KC_F);
        tap_code16(KC_F);
    }
    if(state->count > 3) {
        tap_code16(KC_F);
    }
}

void dance_8_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[8].step = dance_step(state);
    switch (dance_state[8].step) {
        case SINGLE_TAP: register_code16(KC_F); break;
        case SINGLE_HOLD: register_code16(KC_LEFT_SHIFT); break;
        case DOUBLE_TAP: register_code16(LGUI(KC_F)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F); register_code16(KC_F);
    }
}

void dance_8_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[8].step) {
        case SINGLE_TAP: unregister_code16(KC_F); break;
        case SINGLE_HOLD: unregister_code16(KC_LEFT_SHIFT); break;
        case DOUBLE_TAP: unregister_code16(LGUI(KC_F)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F); break;
    }
    dance_state[8].step = 0;
}
void on_dance_9(tap_dance_state_t *state, void *user_data);
void dance_9_finished(tap_dance_state_t *state, void *user_data);
void dance_9_reset(tap_dance_state_t *state, void *user_data);

void on_dance_9(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_G);
        tap_code16(KC_G);
        tap_code16(KC_G);
    }
    if(state->count > 3) {
        tap_code16(KC_G);
    }
}

void dance_9_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[9].step = dance_step(state);
    switch (dance_state[9].step) {
        case SINGLE_TAP: register_code16(KC_G); break;
        case DOUBLE_TAP: register_code16(LGUI(KC_G)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_G); register_code16(KC_G);
    }
}

void dance_9_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[9].step) {
        case SINGLE_TAP: unregister_code16(KC_G); break;
        case DOUBLE_TAP: unregister_code16(LGUI(KC_G)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_G); break;
    }
    dance_state[9].step = 0;
}
void on_dance_10(tap_dance_state_t *state, void *user_data);
void dance_10_finished(tap_dance_state_t *state, void *user_data);
void dance_10_reset(tap_dance_state_t *state, void *user_data);

void on_dance_10(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_Z);
        tap_code16(KC_Z);
        tap_code16(KC_Z);
    }
    if(state->count > 3) {
        tap_code16(KC_Z);
    }
}

void dance_10_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[10].step = dance_step(state);
    switch (dance_state[10].step) {
        case SINGLE_TAP: register_code16(KC_Z); break;
        case DOUBLE_TAP: register_code16(LGUI(KC_Z)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_Z); register_code16(KC_Z);
    }
}

void dance_10_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[10].step) {
        case SINGLE_TAP: unregister_code16(KC_Z); break;
        case DOUBLE_TAP: unregister_code16(LGUI(KC_Z)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_Z); break;
    }
    dance_state[10].step = 0;
}
void on_dance_11(tap_dance_state_t *state, void *user_data);
void dance_11_finished(tap_dance_state_t *state, void *user_data);
void dance_11_reset(tap_dance_state_t *state, void *user_data);

void on_dance_11(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_X);
        tap_code16(KC_X);
        tap_code16(KC_X);
    }
    if(state->count > 3) {
        tap_code16(KC_X);
    }
}

void dance_11_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[11].step = dance_step(state);
    switch (dance_state[11].step) {
        case SINGLE_TAP: register_code16(KC_X); break;
        case DOUBLE_TAP: register_code16(LGUI(KC_X)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_X); register_code16(KC_X);
    }
}

void dance_11_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[11].step) {
        case SINGLE_TAP: unregister_code16(KC_X); break;
        case DOUBLE_TAP: unregister_code16(LGUI(KC_X)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_X); break;
    }
    dance_state[11].step = 0;
}
void on_dance_12(tap_dance_state_t *state, void *user_data);
void dance_12_finished(tap_dance_state_t *state, void *user_data);
void dance_12_reset(tap_dance_state_t *state, void *user_data);

void on_dance_12(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_C);
        tap_code16(KC_C);
        tap_code16(KC_C);
    }
    if(state->count > 3) {
        tap_code16(KC_C);
    }
}

void dance_12_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[12].step = dance_step(state);
    switch (dance_state[12].step) {
        case SINGLE_TAP: register_code16(KC_C); break;
        case DOUBLE_TAP: register_code16(LGUI(KC_C)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_C); register_code16(KC_C);
    }
}

void dance_12_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[12].step) {
        case SINGLE_TAP: unregister_code16(KC_C); break;
        case DOUBLE_TAP: unregister_code16(LGUI(KC_C)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_C); break;
    }
    dance_state[12].step = 0;
}
void on_dance_13(tap_dance_state_t *state, void *user_data);
void dance_13_finished(tap_dance_state_t *state, void *user_data);
void dance_13_reset(tap_dance_state_t *state, void *user_data);

void on_dance_13(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_V);
        tap_code16(KC_V);
        tap_code16(KC_V);
    }
    if(state->count > 3) {
        tap_code16(KC_V);
    }
}

void dance_13_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[13].step = dance_step(state);
    switch (dance_state[13].step) {
        case SINGLE_TAP: register_code16(KC_V); break;
        case DOUBLE_TAP: register_code16(LGUI(KC_V)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_V); register_code16(KC_V);
    }
}

void dance_13_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[13].step) {
        case SINGLE_TAP: unregister_code16(KC_V); break;
        case DOUBLE_TAP: unregister_code16(LGUI(KC_V)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_V); break;
    }
    dance_state[13].step = 0;
}
void on_dance_14(tap_dance_state_t *state, void *user_data);
void dance_14_finished(tap_dance_state_t *state, void *user_data);
void dance_14_reset(tap_dance_state_t *state, void *user_data);

void on_dance_14(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_B);
        tap_code16(KC_B);
        tap_code16(KC_B);
    }
    if(state->count > 3) {
        tap_code16(KC_B);
    }
}

void dance_14_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[14].step = dance_step(state);
    switch (dance_state[14].step) {
        case SINGLE_TAP: register_code16(KC_B); break;
        case DOUBLE_TAP: register_code16(LGUI(KC_B)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_B); register_code16(KC_B);
    }
}

void dance_14_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[14].step) {
        case SINGLE_TAP: unregister_code16(KC_B); break;
        case DOUBLE_TAP: unregister_code16(LGUI(KC_B)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_B); break;
    }
    dance_state[14].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
        [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_3, dance_3_finished, dance_3_reset),
        [DANCE_4] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_4, dance_4_finished, dance_4_reset),
        [DANCE_5] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_5, dance_5_finished, dance_5_reset),
        [DANCE_6] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_6, dance_6_finished, dance_6_reset),
        [DANCE_7] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_7, dance_7_finished, dance_7_reset),
        [DANCE_8] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_8, dance_8_finished, dance_8_reset),
        [DANCE_9] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_9, dance_9_finished, dance_9_reset),
        [DANCE_10] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_10, dance_10_finished, dance_10_reset),
        [DANCE_11] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_11, dance_11_finished, dance_11_reset),
        [DANCE_12] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_12, dance_12_finished, dance_12_reset),
        [DANCE_13] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_13, dance_13_finished, dance_13_reset),
        [DANCE_14] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_14, dance_14_finished, dance_14_reset),
};



// Custom stuff

const key_override_t shift_bspc_del_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_BSPC, KC_DEL);

const key_override_t **key_overrides = (const key_override_t *[]){
  &shift_bspc_del_key_override
};
