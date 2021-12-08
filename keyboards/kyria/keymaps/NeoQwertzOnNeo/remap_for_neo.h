enum custom_keycodes {
L3_A = SAFE_RANGE,
L3_B,
L3_C,
L3_D,
L3_E,
L3_F,
L3_G,
L3_H,
L3_I,
L3_J,
L3_K,
L3_L,
L3_M,
L3_N,
L3_O,
L3_P,
L3_Q,
L3_R,
L3_S,
L3_T,
L3_U,
L3_V,
L3_W,
L3_X,
L3_Y,
L3_Z,
L3_UE,
L3_OE,
L3_AE,
L3_DOT,
L3_COMM,
L3_SLASH,
L4_Y,
L4_H,
L4_Q,
L4_T,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
case L3_A:
   if (record->event.pressed) {SEND_STRING(SS_DOWN(X_CAPSLOCK) "a" SS_UP(X_CAPSLOCK));}
   else {}
break;
case L3_B:
   if (record->event.pressed) {SEND_STRING(SS_DOWN(X_CAPSLOCK) "b" SS_UP(X_CAPSLOCK));}
   else {}
break;
case L3_C:
   if (record->event.pressed) {SEND_STRING(SS_DOWN(X_CAPSLOCK) "c" SS_UP(X_CAPSLOCK));}
   else {}
break;
case L3_D:
   if (record->event.pressed) {SEND_STRING(SS_DOWN(X_CAPSLOCK) "d" SS_UP(X_CAPSLOCK));}
   else {}
break;
case L3_E:
   if (record->event.pressed) {SEND_STRING(SS_DOWN(X_CAPSLOCK) "e" SS_UP(X_CAPSLOCK));}
   else {}
break;
case L3_F:
   if (record->event.pressed) {SEND_STRING(SS_DOWN(X_CAPSLOCK) "f" SS_UP(X_CAPSLOCK));}
   else {}
break;
case L3_G:
   if (record->event.pressed) {SEND_STRING(SS_DOWN(X_CAPSLOCK) "g" SS_UP(X_CAPSLOCK));}
   else {}
break;
case L3_H:
   if (record->event.pressed) {SEND_STRING(SS_DOWN(X_CAPSLOCK) "h" SS_UP(X_CAPSLOCK));}
   else {}
break;
case L3_I:
   if (record->event.pressed) {SEND_STRING(SS_DOWN(X_CAPSLOCK) "i" SS_UP(X_CAPSLOCK));}
   else {}
break;
case L3_J:
   if (record->event.pressed) {SEND_STRING(SS_DOWN(X_CAPSLOCK) "j" SS_UP(X_CAPSLOCK));}
   else {}
break;
case L3_K:
   if (record->event.pressed) {SEND_STRING(SS_DOWN(X_CAPSLOCK) "k" SS_UP(X_CAPSLOCK));}
   else {}
break;
case L3_L:
   if (record->event.pressed) {SEND_STRING(SS_DOWN(X_CAPSLOCK) "l" SS_UP(X_CAPSLOCK));}
   else {}
break;
case L3_M:
   if (record->event.pressed) {SEND_STRING(SS_DOWN(X_CAPSLOCK) "m" SS_UP(X_CAPSLOCK));}
   else {}
break;
case L3_N:
   if (record->event.pressed) {SEND_STRING(SS_DOWN(X_CAPSLOCK) "n" SS_UP(X_CAPSLOCK));}
   else {}
break;
case L3_O:
   if (record->event.pressed) {SEND_STRING(SS_DOWN(X_CAPSLOCK) "o" SS_UP(X_CAPSLOCK));}
   else {}
break;
case L3_P:
   if (record->event.pressed) {SEND_STRING(SS_DOWN(X_CAPSLOCK) "p" SS_UP(X_CAPSLOCK));}
   else {}
break;
case L3_Q:
   if (record->event.pressed) {SEND_STRING(SS_DOWN(X_CAPSLOCK) "q" SS_UP(X_CAPSLOCK));}
   else {}
break;
case L3_R:
   if (record->event.pressed) {SEND_STRING(SS_DOWN(X_CAPSLOCK) "r" SS_UP(X_CAPSLOCK));}
   else {}
break;
case L3_S:
   if (record->event.pressed) {SEND_STRING(SS_DOWN(X_CAPSLOCK) "s" SS_UP(X_CAPSLOCK));}
   else {}
break;
case L3_T:
   if (record->event.pressed) {SEND_STRING(SS_DOWN(X_CAPSLOCK) "t" SS_UP(X_CAPSLOCK));}
   else {}
break;
case L3_U:
   if (record->event.pressed) {SEND_STRING(SS_DOWN(X_CAPSLOCK) "u" SS_UP(X_CAPSLOCK));}
   else {}
break;
case L3_V:
   if (record->event.pressed) {SEND_STRING(SS_DOWN(X_CAPSLOCK) "v" SS_UP(X_CAPSLOCK));}
   else {}
break;
case L3_W:
   if (record->event.pressed) {SEND_STRING(SS_DOWN(X_CAPSLOCK) "w" SS_UP(X_CAPSLOCK));}
   else {}
break;
case L3_X:
   if (record->event.pressed) {SEND_STRING(SS_DOWN(X_CAPSLOCK) "x" SS_UP(X_CAPSLOCK));}
   else {}
break;
case L3_Y:
   if (record->event.pressed) {SEND_STRING(SS_DOWN(X_CAPSLOCK) "y" SS_UP(X_CAPSLOCK));}
   else {}
break;
case L3_Z:
   if (record->event.pressed) {SEND_STRING(SS_DOWN(X_CAPSLOCK) "z" SS_UP(X_CAPSLOCK));}
   else {}
break;
case L3_UE:
   if (record->event.pressed) {SEND_STRING(SS_DOWN(X_CAPSLOCK) "(" SS_UP(X_CAPSLOCK));}
   else {}
break;
case L3_OE:
   if (record->event.pressed) {SEND_STRING(SS_DOWN(X_CAPSLOCK) ";" SS_UP(X_CAPSLOCK));}
   else {}
break;
case L3_AE:
   if (record->event.pressed) {SEND_STRING(SS_DOWN(X_CAPSLOCK) "'" SS_UP(X_CAPSLOCK));}
   else {}
break;
case L3_DOT:
   if (record->event.pressed) {SEND_STRING(SS_DOWN(X_CAPSLOCK) "." SS_UP(X_CAPSLOCK));}
   else {}
break;
case L3_COMM:
   if (record->event.pressed) {SEND_STRING(SS_DOWN(X_CAPSLOCK) "," SS_UP(X_CAPSLOCK));}
   else {}
break;
case L3_SLASH:
   if (record->event.pressed) {SEND_STRING(SS_DOWN(X_CAPSLOCK) "/" SS_UP(X_CAPSLOCK));}
   else {}
break;
case L4_Y:
   if (record->event.pressed) {SEND_STRING(SS_DOWN(X_RCMD) "y" SS_UP(X_RCMD));}
   else {}
break;
case L4_H:
   if (record->event.pressed) {SEND_STRING(SS_DOWN(X_RCMD) "h" SS_UP(X_RCMD));}
   else {}
break;
case L4_Q:
   if (record->event.pressed) {SEND_STRING(SS_DOWN(X_RCMD) "q" SS_UP(X_RCMD));}
   else {}
break;
case L4_T:
   if (record->event.pressed) {SEND_STRING(SS_DOWN(X_RCMD) "t" SS_UP(X_RCMD));}
   else {}
break;
    }
    return true;
};
