#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  HSV_245_247_250,
  HSV_188_255_255,
  HSV_118_235_221,
  HSV_94_255_255,
  HSV_94_228_255,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
  ST_MACRO_5,
  ST_MACRO_6,
  ST_MACRO_7,
  ST_MACRO_8,
  ST_MACRO_9,
  ST_MACRO_10,
  ST_MACRO_11,
  ST_MACRO_12,
  ST_MACRO_13,
  ST_MACRO_14,
  ST_MACRO_15,
  ST_MACRO_16,
  ST_MACRO_17,
  ST_MACRO_18,
  ST_MACRO_19,
  ST_MACRO_20,
  ST_MACRO_21,
};



#define DUAL_FUNC_0 LT(1, KC_K)
#define DUAL_FUNC_1 LT(3, KC_4)
#define DUAL_FUNC_2 LT(1, KC_N)
#define DUAL_FUNC_3 LT(13, KC_7)
#define DUAL_FUNC_4 LT(5, KC_5)
#define DUAL_FUNC_5 LT(14, KC_F1)
#define DUAL_FUNC_6 LT(2, KC_Y)
#define DUAL_FUNC_7 LT(7, KC_6)
#define DUAL_FUNC_8 LT(4, KC_J)
#define DUAL_FUNC_9 LT(15, KC_8)
#define DUAL_FUNC_10 LT(15, KC_F21)
#define DUAL_FUNC_11 LT(9, KC_F16)
#define DUAL_FUNC_12 LT(10, KC_F22)
#define DUAL_FUNC_13 LT(12, KC_F13)
#define DUAL_FUNC_14 LT(9, KC_T)
#define DUAL_FUNC_15 LT(2, KC_F15)
#define DUAL_FUNC_16 LT(8, KC_F23)
#define DUAL_FUNC_17 LT(6, KC_F19)
#define DUAL_FUNC_18 LT(13, KC_F5)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_DELETE,      KC_Q,           KC_W,           KC_F,           KC_P,           KC_B,                                           KC_J,           KC_L,           KC_U,           KC_Y,           KC_SCLN,        DUAL_FUNC_1,    
    MT(MOD_LCTL, KC_ESCAPE),KC_A,           KC_R,           KC_S,           KC_T,           KC_G,                                           KC_M,           KC_N,           KC_E,           KC_I,           ALL_T(KC_O),    KC_QUOTE,       
    DUAL_FUNC_0,    KC_Z,           KC_X,           KC_C,           KC_D,           KC_V,                                           KC_K,           KC_H,           KC_COMMA,       KC_DOT,         KC_SLASH,       MT(MOD_LGUI, KC_EQUAL),
    KC_LEFT_CTRL,   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT_ALT,    KC_LEFT_GUI,                                    DUAL_FUNC_2,    KC_MEH,         LCTL(KC_SCLN),  KC_TRANSPARENT, LALT(LSFT(KC_TAB)),LALT(KC_LEFT_GUI),
                                                    LT(3, KC_SPACE),LT(5, KC_TAB),                                  MT(MOD_LSFT, KC_ENTER),LT(2, KC_BSPC)
  ),
  [1] = LAYOUT_voyager(
    KC_DELETE,      KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_MINUS,       
    KC_ESCAPE,      KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_BSLS,        
    KC_LEFT_SHIFT,  KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_QUOTE,       
    KC_LEFT_CTRL,   KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           ALL_T(KC_6),    MEH_T(KC_7),    MT(MOD_LGUI, KC_8),MT(MOD_LALT, KC_9),MT(MOD_LCTL, KC_0),KC_EQUAL,       
                                                    LT(3, KC_SPACE),MEH_T(KC_TAB),                                  MT(MOD_LSFT, KC_ENTER),LT(2, KC_BSPC)
  ),
  [2] = LAYOUT_voyager(
    LGUI(LSFT(KC_4)),KC_TRANSPARENT, KC_MS_WH_DOWN,  KC_MS_UP,       KC_MS_WH_UP,    DUAL_FUNC_3,                                    KC_PAGE_UP,     LALT(LGUI(KC_LEFT)),LALT(LGUI(KC_RIGHT)),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, LGUI(KC_LEFT),  KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    LGUI(LSFT(KC_2)),                                KC_PGDN,        KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       LGUI(KC_RIGHT), 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_WH_RIGHT, KC_TRANSPARENT, KC_MS_WH_LEFT,  DUAL_FUNC_4,                                    KC_AUDIO_VOL_UP,DUAL_FUNC_5,    DUAL_FUNC_6,    DUAL_FUNC_7,    DUAL_FUNC_8,    KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,KC_TRANSPARENT,                                 KC_AUDIO_VOL_DOWN,KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TG(6),          
                                                    KC_MS_BTN1,     KC_MS_BTN2,                                     KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, DUAL_FUNC_9,    KC_AT,          KC_AMPR,        KC_PERC,        KC_LPRN,                                        KC_RPRN,        KC_COMMA,       KC_CIRC,        KC_DLR,         KC_SCLN,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_EXLM,        KC_HASH,        KC_ASTR,        KC_COLN,        KC_LCBR,                                        KC_RCBR,        KC_EQUAL,       KC_PLUS,        KC_KP_MINUS,    KC_UNDS,        KC_DQUO,        
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_PIPE,        KC_LBRC,                                        KC_RBRC,        KC_TRANSPARENT, KC_LABK,        KC_RABK,        KC_QUES,        KC_SLASH,       
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_SPACE,       LT(4, KC_BSPC)
  ),
  [4] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,                                          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         
    KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_F12,         
    ST_MACRO_0,     ST_MACRO_1,     ST_MACRO_2,     ST_MACRO_3,     ST_MACRO_4,     ST_MACRO_5,                                     ST_MACRO_9,     ST_MACRO_10,    ST_MACRO_11,    ST_MACRO_12,    ST_MACRO_13,    ST_MACRO_14,    
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_6,     ST_MACRO_7,     ST_MACRO_8,                                     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_voyager(
    KC_TRANSPARENT, DUAL_FUNC_10,   DUAL_FUNC_11,   DUAL_FUNC_12,   DUAL_FUNC_13,   KC_TRANSPARENT,                                 KC_TRANSPARENT, LALT(LGUI(KC_LEFT)),LALT(LGUI(KC_RIGHT)),KC_TRANSPARENT, LALT(LCTL(LSFT(KC_M))),KC_TRANSPARENT, 
    ST_MACRO_15,    DUAL_FUNC_14,   DUAL_FUNC_15,   DUAL_FUNC_16,   DUAL_FUNC_17,   DUAL_FUNC_18,                                   LALT(LGUI(LCTL(LSFT(US_PLUS)))),LALT(LGUI(LCTL(LSFT(KC_LEFT)))),LALT(LGUI(LCTL(LSFT(KC_DOWN)))),LALT(LGUI(LCTL(LSFT(KC_UP)))),LALT(LGUI(LCTL(LSFT(KC_RIGHT)))),ST_MACRO_21,    
    KC_TRANSPARENT, ST_MACRO_16,    ST_MACRO_17,    ST_MACRO_18,    ST_MACRO_19,    KC_TRANSPARENT,                                 LALT(LGUI(LCTL(LSFT(KC_MINUS)))),LALT(LCTL(LSFT(KC_LEFT))),LALT(LCTL(LSFT(KC_DOWN))),LALT(LCTL(LSFT(KC_UP))),LALT(LCTL(LSFT(KC_RIGHT))),KC_TRANSPARENT, 
    ST_MACRO_20,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LALT(LCTL(LSFT(KC_COMMA))),LALT(LCTL(LSFT(KC_SLASH))),KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_DYNAMIC_TAPPING_TERM_PRINT,                                AS_RPT,         KC_TRANSPARENT, AS_TOGG,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_DYNAMIC_TAPPING_TERM_UP,                                AS_UP,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_DYNAMIC_TAPPING_TERM_DOWN,                                AS_DOWN,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    HSV_245_247_250,HSV_188_255_255,HSV_118_235_221,HSV_94_255_255, HSV_94_228_255, TOGGLE_LAYER_COLOR,                                KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
};


const uint16_t PROGMEM combo0[] = { KC_W, KC_F, KC_P, COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_Y, KC_U, KC_L, COMBO_END};
const uint16_t PROGMEM combo2[] = { KC_W, KC_E, KC_R, COMBO_END};
const uint16_t PROGMEM combo3[] = { KC_U, KC_I, KC_O, COMBO_END};
const uint16_t PROGMEM combo4[] = { LT(3, KC_SPACE), LT(5, KC_TAB), COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, LALT(LGUI(LSFT(KC_SPACE)))),
    COMBO(combo1, TO(1)),
    COMBO(combo2, LALT(LGUI(LSFT(KC_SPACE)))),
    COMBO(combo3, TO(0)),
    COMBO(combo4, TT(4)),
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_DELETE:
            return g_tapping_term + 25;
        case MT(MOD_LCTL, KC_ESCAPE):
            return g_tapping_term + 20;
        case KC_Z:
            return g_tapping_term + 50;
        case ALL_T(KC_O):
            return g_tapping_term + 50;
        case MT(MOD_LSFT, KC_ENTER):
            return g_tapping_term + 10;
        case KC_W:
            return g_tapping_term + 50;
        case KC_E:
            return g_tapping_term + 50;
        case KC_R:
            return g_tapping_term + 50;
        case KC_S:
            return g_tapping_term + 50;
        case KC_D:
            return g_tapping_term + 50;
        case KC_F:
            return g_tapping_term + 45;
        case KC_LEFT_CTRL:
            return g_tapping_term + 25;
        case KC_U:
            return g_tapping_term + 50;
        case KC_I:
            return g_tapping_term + 50;
        case KC_O:
            return g_tapping_term + 50;
        case KC_J:
            return g_tapping_term + 50;
        case KC_K:
            return g_tapping_term + 50;
        case KC_L:
            return g_tapping_term -30;
        case KC_DOT:
            return g_tapping_term + 50;
        case KC_EQUAL:
            return g_tapping_term + 35;
        case DUAL_FUNC_5:
            return g_tapping_term + 50;
        case DUAL_FUNC_6:
            return g_tapping_term + 50;
        case DUAL_FUNC_7:
            return g_tapping_term + 50;
        case DUAL_FUNC_8:
            return g_tapping_term + 50;
        case DUAL_FUNC_10:
            return g_tapping_term + 50;
        case DUAL_FUNC_11:
            return g_tapping_term + 50;
        case DUAL_FUNC_12:
            return g_tapping_term + 50;
        case DUAL_FUNC_13:
            return g_tapping_term + 50;
        case DUAL_FUNC_14:
            return g_tapping_term + 50;
        case DUAL_FUNC_15:
            return g_tapping_term + 50;
        case DUAL_FUNC_16:
            return g_tapping_term + 50;
        case DUAL_FUNC_17:
            return g_tapping_term + 50;
        case DUAL_FUNC_18:
            return g_tapping_term + 50;
        default:
            return g_tapping_term;
    }
}


extern rgb_config_t rgb_matrix_config;

RGB hsv_to_rgb_with_value(HSV hsv) {
  RGB rgb = hsv_to_rgb( hsv );
  float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
  return (RGB){ f * rgb.r, f * rgb.g, f * rgb.b };
}

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {253,255,198}, {253,255,198}, {253,255,198}, {253,255,198}, {253,255,198}, {253,255,198}, {253,255,198}, {253,255,198}, {253,255,198}, {253,255,198}, {253,255,198}, {253,255,198}, {253,255,198}, {253,255,198}, {253,255,198}, {253,255,198}, {253,255,198}, {253,255,198}, {253,255,198}, {253,255,198}, {253,255,198}, {253,255,198}, {253,255,198}, {253,255,198}, {253,255,198}, {253,255,198}, {253,255,198}, {253,255,198}, {253,255,198}, {253,255,198}, {253,255,198}, {253,255,198}, {253,255,198}, {253,255,198}, {253,255,198}, {253,255,198}, {253,255,198}, {253,255,198}, {253,255,198}, {253,255,198}, {253,255,198}, {253,255,198}, {253,255,198}, {253,255,198}, {253,255,198}, {253,255,198}, {253,255,198}, {253,255,198}, {253,255,198}, {253,255,198}, {253,255,198}, {253,255,198} },

    [1] = { {0,194,255}, {94,255,255}, {0,194,255}, {0,194,255}, {0,194,255}, {94,255,255}, {50,255,255}, {94,255,255}, {0,194,255}, {0,194,255}, {0,194,255}, {94,255,255}, {0,194,255}, {94,255,255}, {94,255,255}, {94,255,255}, {94,255,255}, {94,255,255}, {143,255,255}, {94,255,255}, {94,255,255}, {94,255,255}, {94,255,255}, {94,255,255}, {113,255,255}, {0,194,255}, {94,255,255}, {0,194,255}, {0,194,255}, {0,194,255}, {94,255,255}, {178,112,255}, {94,255,255}, {0,194,255}, {0,194,255}, {0,194,255}, {178,112,255}, {178,112,255}, {94,255,255}, {94,255,255}, {178,112,255}, {178,112,255}, {178,112,255}, {94,255,255}, {217,204,255}, {217,204,255}, {54,203,255}, {54,203,255}, {54,203,255}, {178,112,255}, {131,255,255}, {0,194,255} },

    [2] = { {169,255,255}, {0,0,0}, {0,194,255}, {178,112,255}, {0,194,255}, {45,203,255}, {0,0,0}, {32,225,246}, {178,112,255}, {178,112,255}, {178,112,255}, {45,203,255}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0}, {0,255,255}, {45,203,255}, {0,0,0}, {0,0,0}, {188,123,246}, {197,226,245}, {188,123,246}, {0,0,0}, {0,194,255}, {0,194,255}, {169,217,255}, {28,170,255}, {28,170,255}, {0,0,0}, {0,0,0}, {0,0,0}, {169,217,255}, {178,112,255}, {178,112,255}, {178,112,255}, {178,112,255}, {32,225,246}, {139,227,239}, {94,228,255}, {94,228,255}, {94,228,255}, {94,228,255}, {0,0,0}, {46,225,246}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0}, {0,0,0} },

    [3] = { {0,0,0}, {27,226,245}, {49,226,245}, {197,226,245}, {179,232,227}, {46,225,246}, {0,0,0}, {38,226,245}, {139,232,228}, {139,232,228}, {71,226,245}, {46,225,246}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {46,225,246}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {46,225,246}, {148,232,227}, {236,226,245}, {236,226,245}, {148,232,227}, {0,0,0}, {46,225,246}, {71,226,245}, {71,226,245}, {71,226,245}, {0,0,0}, {197,226,245}, {46,225,246}, {0,0,0}, {0,226,245}, {0,226,245}, {197,226,245}, {49,226,245}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {139,248,239} },

    [4] = { {130,226,245}, {236,226,245}, {236,226,245}, {236,226,245}, {236,226,245}, {236,226,245}, {130,226,245}, {0,226,245}, {0,226,245}, {0,226,245}, {0,226,245}, {0,226,245}, {204,226,245}, {46,225,246}, {46,225,246}, {46,225,246}, {46,225,246}, {37,226,245}, {130,226,245}, {130,226,245}, {130,226,245}, {89,226,245}, {89,226,245}, {37,226,245}, {130,226,245}, {130,226,245}, {236,226,245}, {236,226,245}, {236,226,245}, {236,226,245}, {236,226,245}, {236,226,245}, {0,226,245}, {0,226,245}, {0,226,245}, {0,226,245}, {0,226,245}, {236,226,245}, {204,226,245}, {46,225,246}, {46,225,246}, {46,225,246}, {46,225,246}, {204,226,245}, {130,226,245}, {130,226,245}, {130,226,245}, {130,226,245}, {130,226,245}, {130,226,245}, {130,226,245}, {130,226,245} },

    [5] = { {188,255,255}, {253,255,198}, {253,255,198}, {253,255,198}, {253,255,198}, {188,255,255}, {188,255,255}, {253,255,198}, {253,255,198}, {253,255,198}, {253,255,198}, {253,255,198}, {188,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {17,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {253,255,198}, {253,255,198}, {188,255,255}, {188,255,255}, {188,255,255}, {20,234,222}, {94,228,255}, {94,228,255}, {94,228,255}, {94,228,255}, {188,255,255}, {45,234,222}, {118,235,221}, {118,235,221}, {118,235,221}, {118,235,221}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {126,255,255}, {126,255,255}, {188,255,255}, {188,255,255}, {188,255,255} },

    [6] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {232,161,255}, {208,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {39,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {119,255,255}, {245,247,250}, {188,255,255}, {118,235,221}, {94,255,255}, {94,228,255}, {0,255,255}, {0,0,0}, {0,0,0}, {232,161,255}, {0,0,0}, {211,197,253}, {0,0,0}, {0,0,0}, {0,0,0}, {39,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {119,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

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
        RGB rgb = hsv_to_rgb_with_value(hsv);
        rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (!keyboard_config.disable_layer_led) { 
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
      case 6:
        set_layer_color(6);
        break;
     default:
        if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
          rgb_matrix_set_color_all(0, 0, 0);
        }
    }
  } else {
    if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
      rgb_matrix_set_color_all(0, 0, 0);
    }
  }

  return true;
}





bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case QK_MODS ... QK_MODS_MAX: 
    // Mouse keys with modifiers work inconsistently across operating systems, this makes sure that modifiers are always
    // applied to the mouse key that was pressed.
    if (IS_MOUSE_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode))) {
    if (record->event.pressed) {
        add_mods(QK_MODS_GET_MODS(keycode));
        send_keyboard_report();
        wait_ms(2);
        register_code(QK_MODS_GET_BASIC_KEYCODE(keycode));
        return false;
      } else {
        wait_ms(2);
        del_mods(QK_MODS_GET_MODS(keycode));
      }
    }
    break;
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_Q))SS_DELAY(100)  SS_LSFT(SS_TAP(X_9)));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_Q))SS_DELAY(100)  SS_LCTL(SS_TAP(X_LEFT)));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_Q))SS_DELAY(100)  SS_LCTL(SS_TAP(X_DOWN)));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_Q))SS_DELAY(100)  SS_LCTL(SS_TAP(X_UP)));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_Q))SS_DELAY(100)  SS_LCTL(SS_TAP(X_RIGHT)));
    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_Q))SS_DELAY(100)  SS_LSFT(SS_TAP(X_5)));
    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_Q))SS_DELAY(100)  SS_LSFT(SS_TAP(X_LBRC)));
    }
    break;
    case ST_MACRO_7:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_Q))SS_DELAY(100)  SS_LSFT(SS_TAP(X_RBRC)));
    }
    break;
    case ST_MACRO_8:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_Q))SS_DELAY(100)  SS_LSFT(SS_TAP(X_QUOTE)));
    }
    break;
    case ST_MACRO_9:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_Q))SS_DELAY(100)  SS_TAP(X_Z));
    }
    break;
    case ST_MACRO_10:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_Q))SS_DELAY(100)  SS_TAP(X_LEFT));
    }
    break;
    case ST_MACRO_11:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_Q))SS_DELAY(100)  SS_TAP(X_DOWN));
    }
    break;
    case ST_MACRO_12:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_Q))SS_DELAY(100)  SS_TAP(X_UP));
    }
    break;
    case ST_MACRO_13:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_Q))SS_DELAY(100)  SS_TAP(X_RIGHT));
    }
    break;
    case ST_MACRO_14:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_Q))SS_DELAY(100)  SS_LSFT(SS_TAP(X_0)));
    }
    break;
    case ST_MACRO_15:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_Q))SS_DELAY(1)  SS_LSFT(SS_TAP(X_9)));
    }
    break;
    case ST_MACRO_16:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_LCTL(SS_LGUI(SS_LSFT(SS_TAP(X_BSLS)))))SS_DELAY(100)  SS_LALT(SS_LCTL(SS_LSFT(SS_TAP(X_N)))));
    }
    break;
    case ST_MACRO_17:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_LCTL(SS_LGUI(SS_LSFT(SS_TAP(X_BSLS)))))SS_DELAY(100)  SS_LALT(SS_LCTL(SS_LSFT(SS_TAP(X_E)))));
    }
    break;
    case ST_MACRO_18:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_LCTL(SS_LGUI(SS_LSFT(SS_TAP(X_BSLS)))))SS_DELAY(100)  SS_LALT(SS_LCTL(SS_LSFT(SS_TAP(X_I)))));
    }
    break;
    case ST_MACRO_19:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_LCTL(SS_LGUI(SS_LSFT(SS_TAP(X_BSLS)))))SS_DELAY(100)  SS_LALT(SS_LCTL(SS_LSFT(SS_TAP(X_O)))));
    }
    break;
    case ST_MACRO_20:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_LCTL(SS_LGUI(SS_LSFT(SS_TAP(X_SCLN)))))SS_DELAY(100)  SS_TAP(X_ESCAPE));
    }
    break;
    case ST_MACRO_21:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_Q))SS_DELAY(1)  SS_LSFT(SS_TAP(X_0)));
    }
    break;

    case DUAL_FUNC_0:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(KC_TAB));
        } else {
          unregister_code16(LALT(KC_TAB));
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_SHIFT);
        } else {
          unregister_code16(KC_LEFT_SHIFT);
        }  
      }  
      return false;
    case DUAL_FUNC_1:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_BSLS);
        } else {
          unregister_code16(KC_BSLS);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_PIPE);
        } else {
          unregister_code16(KC_PIPE);
        }  
      }  
      return false;
    case DUAL_FUNC_2:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LCTL(KC_Q));
        } else {
          unregister_code16(LCTL(KC_Q));
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_ALT);
        } else {
          unregister_code16(KC_LEFT_ALT);
        }  
      }  
      return false;
    case DUAL_FUNC_3:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LGUI(LSFT(KC_0)));
        } else {
          unregister_code16(LGUI(LSFT(KC_0)));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LGUI(LSFT(KC_9)));
        } else {
          unregister_code16(LGUI(LSFT(KC_9)));
        }  
      }  
      return false;
    case DUAL_FUNC_4:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LGUI(LSFT(KC_1)));
        } else {
          unregister_code16(LGUI(LSFT(KC_1)));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LGUI(LSFT(KC_3)));
        } else {
          unregister_code16(LGUI(LSFT(KC_3)));
        }  
      }  
      return false;
    case DUAL_FUNC_5:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(LGUI(LCTL(LSFT(KC_LEFT)))));
        } else {
          unregister_code16(LALT(LGUI(LCTL(LSFT(KC_LEFT)))));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(LGUI(LCTL(LSFT(KC_Q)))));
        } else {
          unregister_code16(LALT(LGUI(LCTL(LSFT(KC_Q)))));
        }  
      }  
      return false;
    case DUAL_FUNC_6:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(LGUI(LCTL(LSFT(KC_DOWN)))));
        } else {
          unregister_code16(LALT(LGUI(LCTL(LSFT(KC_DOWN)))));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(LGUI(LCTL(LSFT(KC_W)))));
        } else {
          unregister_code16(LALT(LGUI(LCTL(LSFT(KC_W)))));
        }  
      }  
      return false;
    case DUAL_FUNC_7:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(LGUI(LCTL(LSFT(KC_UP)))));
        } else {
          unregister_code16(LALT(LGUI(LCTL(LSFT(KC_UP)))));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(LGUI(LCTL(LSFT(KC_F)))));
        } else {
          unregister_code16(LALT(LGUI(LCTL(LSFT(KC_F)))));
        }  
      }  
      return false;
    case DUAL_FUNC_8:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(LGUI(LCTL(LSFT(KC_RIGHT)))));
        } else {
          unregister_code16(LALT(LGUI(LCTL(LSFT(KC_RIGHT)))));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(LGUI(LCTL(LSFT(KC_P)))));
        } else {
          unregister_code16(LALT(LGUI(LCTL(LSFT(KC_P)))));
        }  
      }  
      return false;
    case DUAL_FUNC_9:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_TILD);
        } else {
          unregister_code16(KC_TILD);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_GRAVE);
        } else {
          unregister_code16(KC_GRAVE);
        }  
      }  
      return false;
    case DUAL_FUNC_10:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(LGUI(LCTL(LSFT(KC_J)))));
        } else {
          unregister_code16(LALT(LGUI(LCTL(LSFT(KC_J)))));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(LGUI(KC_J)));
        } else {
          unregister_code16(LALT(LGUI(KC_J)));
        }  
      }  
      return false;
    case DUAL_FUNC_11:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(LGUI(LCTL(LSFT(KC_L)))));
        } else {
          unregister_code16(LALT(LGUI(LCTL(LSFT(KC_L)))));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(LGUI(KC_L)));
        } else {
          unregister_code16(LALT(LGUI(KC_L)));
        }  
      }  
      return false;
    case DUAL_FUNC_12:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(LGUI(LCTL(LSFT(KC_U)))));
        } else {
          unregister_code16(LALT(LGUI(LCTL(LSFT(KC_U)))));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(LGUI(KC_U)));
        } else {
          unregister_code16(LALT(LGUI(KC_U)));
        }  
      }  
      return false;
    case DUAL_FUNC_13:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(LGUI(LCTL(LSFT(KC_Y)))));
        } else {
          unregister_code16(LALT(LGUI(LCTL(LSFT(KC_Y)))));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(LGUI(KC_Y)));
        } else {
          unregister_code16(LALT(LGUI(KC_Y)));
        }  
      }  
      return false;
    case DUAL_FUNC_14:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(LGUI(LCTL(LSFT(KC_Q)))));
        } else {
          unregister_code16(LALT(LGUI(LCTL(LSFT(KC_Q)))));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(LGUI(KC_Q)));
        } else {
          unregister_code16(LALT(LGUI(KC_Q)));
        }  
      }  
      return false;
    case DUAL_FUNC_15:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(LGUI(LCTL(LSFT(KC_W)))));
        } else {
          unregister_code16(LALT(LGUI(LCTL(LSFT(KC_W)))));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(LGUI(KC_W)));
        } else {
          unregister_code16(LALT(LGUI(KC_W)));
        }  
      }  
      return false;
    case DUAL_FUNC_16:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(LGUI(LCTL(LSFT(KC_F)))));
        } else {
          unregister_code16(LALT(LGUI(LCTL(LSFT(KC_F)))));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(LGUI(KC_F)));
        } else {
          unregister_code16(LALT(LGUI(KC_F)));
        }  
      }  
      return false;
    case DUAL_FUNC_17:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(LGUI(LCTL(LSFT(KC_P)))));
        } else {
          unregister_code16(LALT(LGUI(LCTL(LSFT(KC_P)))));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(LGUI(KC_P)));
        } else {
          unregister_code16(LALT(LGUI(KC_P)));
        }  
      }  
      return false;
    case DUAL_FUNC_18:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(LGUI(LCTL(LSFT(KC_B)))));
        } else {
          unregister_code16(LALT(LGUI(LCTL(LSFT(KC_B)))));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(LGUI(KC_B)));
        } else {
          unregister_code16(LALT(LGUI(KC_B)));
        }  
      }  
      return false;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
    case HSV_245_247_250:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(245,247,250);
      }
      return false;
    case HSV_188_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(188,255,255);
      }
      return false;
    case HSV_118_235_221:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(118,235,221);
      }
      return false;
    case HSV_94_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(94,255,255);
      }
      return false;
    case HSV_94_228_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(94,228,255);
      }
      return false;
  }
  return true;
}
