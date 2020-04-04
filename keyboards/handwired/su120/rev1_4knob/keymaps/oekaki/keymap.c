/* Copyright 2019 e3w2q
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

enum encoder_number {
    _1ST_ENC = 0,
    _2ND_ENC,
    _3RD_ENC,
    _4TH_ENC,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* Default Layer
   *  Master Side (USB Cable Connected Side)
   *  ,-------------------------------
   *  | NmLk  KP/  KP*  Tab MO(1)XXXX 
   *  |  KP7  KP8  KP9  KP- Home XXXX 
   *  |  KP4  KP5  KP6  KP+  End XXXX 
   *  |  KP1  KP2  KP3 Entr PgUp XXXX 
   *  |  KP0   00    .   Up PgDn XXXX 
   *  |   BS  Del Left Down Rght XXXX 
   *  `-------------------------------
   *  Slave Side (USB Cable Not Connected Side)
   *  ,-------------------------------
   *  | XXXX XXXX XXXX XXXX XXXX XXXX 
   *  | XXXX XXXX XXXX XXXX XXXX XXXX 
   *  | XXXX XXXX XXXX XXXX XXXX XXXX 
   *  | XXXX XXXX XXXX XXXX XXXX XXXX 
   *  | XXXX XXXX XXXX XXXX XXXX XXXX 
   *  | XXXX XXXX XXXX XXXX XXXX XXXX 
   *  `-------------------------------
   */

  [0] = LAYOUT( /* Base */ 
    KC_Q,    KC_W,    KC_E,    KC_R,  XXXXXXX,  XXXXXXX,  
    KC_A,    KC_S,    KC_D,    KC_F,  XXXXXXX,   XXXXXXX,  
    CTL_T(KC_Z),    KC_X,    SFT_T(KC_C),    KC_V,   XXXXXXX,  XXXXXXX,  
    KC_P0,    XXXXXXX,  KC_PDOT,  KC_UP,    KC_PGDN,  XXXXXXX,  
    KC_1,     KC_2,     KC_3,      KC_4,   XXXXXXX,   XXXXXXX,
    KC_BSPC,  KC_DEL,   KC_LEFT,  KC_1,     KC_4,     XXXXXXX,  

    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX   
  )
};

void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

void led_set_user(uint8_t usb_led) {

}

void encoder_update_user(uint8_t index, bool clockwise) {
    switch (index) {
      case _1ST_ENC:
        if (clockwise) {
          SEND_STRING("2");
        } else {
          SEND_STRING("3");
        }
        break;
      case _2ND_ENC:
        if (clockwise) {
          SEND_STRING("5");
        } else {
          SEND_STRING("6");
        }
        break;
      case _3RD_ENC:
        if (clockwise) {
          SEND_STRING("3RD_ENC_R");
        } else {
          SEND_STRING("3RD_ENC_L");
        }
        break;
      case _4TH_ENC:
        if (clockwise) {
          SEND_STRING("4TH_ENC_R");
        } else {
          SEND_STRING("4TH_ENC_L");
        }
        break;
    }
}

