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

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
  SEND_00 = SAFE_RANGE,
  SEND_000
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* Layer 0 (Default Tenkey)
   *  Master Side (USB Cable Connected Side)
   *  ,---------------------------------------------------
   *  | XXXX XXXX XXXX NmLk   BS XXXX XXXX XXXX XXXX XXXX 
   *  | TO(1) KP7  KP8  KP9  KP- XXXX XXXX XXXX XXXX XXXX 
   *  |    .  KP4  KP5  KP6  KP+ XXXX XXXX XXXX XXXX XXXX 
   *  |  KP0  KP1  KP2  KP3 Entr XXXX XXXX XXXX XXXX XXXX 
   *  | XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX 
   *  | XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX 
   *  `---------------------------------------------------
   *  Slave Side (USB Cable Not Connected Side)
   *  ,---------------------------------------------------
   *  | XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX 
   *  | XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX 
   *  | XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX 
   *  | XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX 
   *  | XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX 
   *  | XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX 
   *  `---------------------------------------------------
   */

  [0] = LAYOUT( /* Base */ 
    XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_NLCK,  KC_BSPC,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  
    TO(1),    KC_P7,    KC_P8,    KC_P9,    KC_T,     XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  
    KC_PDOT,  KC_P4,    KC_P5,    KC_P6,    KC_G,     XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  
    KC_P0,    KC_P1,    KC_P2,    KC_P3,    KC_B,     XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  

    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX   
  ),

  /* Layer 1 (NumPad)
   *  Master Side (USB Cable Connected Side)
   *  ,---------------------------------------------------
   *  | XXXX XXXX XXXX  Del   BS XXXX XXXX XXXX XXXX XXXX 
   *  | TO(2)   7    8    9    - XXXX XXXX XXXX XXXX XXXX 
   *  |    .    4    5    6    + XXXX XXXX XXXX XXXX XXXX 
   *  |    0    1    2    3 Entr XXXX XXXX XXXX XXXX XXXX 
   *  | XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX 
   *  | XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX 
   *  `---------------------------------------------------
   *  Slave Side (USB Cable Not Connected Side)
   *  ,---------------------------------------------------
   *  | XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX 
   *  | XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX 
   *  | XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX 
   *  | XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX 
   *  | XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX 
   *  | XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX 
   *  `---------------------------------------------------
   */
  [1] = LAYOUT(
    XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_DEL,   KC_BSPC,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  
    TO(2),    KC_7,     KC_8,     KC_9,     KC_MINS   XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  
    KC_DOT,   KC_4,     KC_5,     KC_6,     KC_PLUS,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  
    KC_0,     KC_1,     KC_2,     KC_3,     KC_ENT,   XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  

    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX   
  ),

  /* Layer 2 (Media Control)
   *  Master Side (USB Cable Connected Side)
   *  ,---------------------------------------------------
   *  | XXXX         XXXX           XXXX BrightnessDown   BrightnessUp XXXX XXXX XXXX XXXX XXXX XXXX 
   *  | TO(3)        XXXX           Mute     VolumeDown       VolumeUp XXXX XXXX XXXX XXXX XXXX XXXX 
   *  | XXXX LaunchPlayer     Play/Pause      PrevTrack      NextTrack XXXX XXXX XXXX XXXX XXXX XXXX 
   *  | XXXX BrowserSerch BrowserRefresh    BrowserBack BrowserForward XXXX XXXX XXXX XXXX XXXX XXXX 
   *  | XXXX         XXXX           XXXX           XXXX           XXXX XXXX XXXX XXXX XXXX XXXX XXXX 
   *  | XXXX         XXXX           XXXX           XXXX           XXXX XXXX XXXX XXXX XXXX XXXX XXXX 
   *  `---------------------------------------------------
   *  Slave Side (USB Cable Not Connected Side)
   *  ,---------------------------------------------------
   *  | XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX 
   *  | XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX 
   *  | XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX 
   *  | XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX 
   *  | XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX 
   *  | XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX 
   *  `---------------------------------------------------
   */
  [2] = LAYOUT(
    XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_BRID,  KC_BRIU,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  
    TO(3),    XXXXXXX,  KC_MUTE,  KC_VOLD,  KC_VOLU,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  
    XXXXXXX,  KC_MSEL,  KC_MPLY,  KC_MPRV,  KC_MNXT,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  
    XXXXXXX,  KC_WSCH,  KC_WREF,  KC_WBAK,  KC_WFWD,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  

    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX   
  ),

  /* Layer 3 (LED Control)
   *  Master Side (USB Cable Connected Side)
   *  ,---------------------------------------------------
   *  | XXXX XXXX XXXX EEPR ResetXXXX XXXX XXXX XXXX XXXX 
   *  | TO(0)XXXX XXXX LTOG LMOD XXXX XXXX XXXX XXXX XXXX 
   *  | XXXX XXXX LHUI LSAI LVAI XXXX XXXX XXXX XXXX XXXX 
   *  | XXXX XXXX LHUD LSAD LVAD XXXX XXXX XXXX XXXX XXXX 
   *  | XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX 
   *  | XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX 
   *  `---------------------------------------------------
   *  Slave Side (USB Cable Not Connected Side)
   *  ,---------------------------------------------------
   *  | XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX 
   *  | XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX 
   *  | XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX 
   *  | XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX 
   *  | XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX 
   *  | XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX 
   *  `---------------------------------------------------
   */
  [3] = LAYOUT(
    XXXXXXX,  XXXXXXX,  XXXXXXX,  EEP_RST,  RESET,    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  
    TO(0),    XXXXXXX,  XXXXXXX,  RGB_TOG,  RGB_MOD,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  
    XXXXXXX,  XXXXXXX,  RGB_HUI,  RGB_SAI,  RGB_VAI,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  
    XXXXXXX,  XXXXXXX,  RGB_HUD,  RGB_SAD,  RGB_VAD,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  

    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX   
  ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case SEND_00:
      if (record->event.pressed) {
        // when keycode SEND_00 is pressed
        SEND_STRING("00");
      } else {
        // when keycode SEND_00 is released
      }
      break;
    case SEND_000:
      if (record->event.pressed) {
        // when keycode SEND_000 is pressed
        //SEND_STRING("000" SS_TAP(X_ENTER));
        SEND_STRING("000");
      } else {
        // when keycode SEND_000 is released
      }
      break;
  }
  return true;
}

void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

void led_set_user(uint8_t usb_led) {

}
