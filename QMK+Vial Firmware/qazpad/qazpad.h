#ifndef QAZPAD_H
#define QAZPAD_H

#include "quantum.h"

#define LAYOUT( \
      k40, k41, k42, k43, k44, k45, k06, k05, k04, k03, k02, k01, k00, \
      k50, k51, k52, k53, k54, k55, k16, k15, k14, k13, k12, k11, k10, \
      k60, k61, k62, k63, k64, k65, k26, k25, k24, k23, k22, k21, k20, \
      k70, k71, k72, k73, k74, k75,      k35, k34, k33, k32, k31, k30  \
) \
{ \
    { k00, k01, k02, k03, k04, k05, k06 }, \
    { k10, k11, k12, k13, k14, k15, k16 }, \
    { k20, k21, k22, k23, k24, k25, k26 }, \
    { k30, k31, k32, k33, k34, k35, KC_NO }, \
    { k40, k41, k42, k43, k44, k45, KC_NO }, \
    { k50, k51, k52, k53, k54, k55, KC_NO }, \
    { k60, k61, k62, k63, k64, k65, KC_NO }, \
    { k70, k71, k72, k73, k74, k75, KC_NO }, \
} 

#endif
