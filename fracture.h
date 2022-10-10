#pragma once

#include "quantum.h"

/* This a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */

#define LAYOUT( \
	k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0A, k0B, k0C,      k0E,  	\
	k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1A, k1B, k1C, k1D, k1E, k1F, \
	k20, k21, k22, k23, k24, k25,      k27, k28, k29, k2A, k2B, k2C, k2D, k2E, k2F, \
	k30, k31, k32, k33, k34, k35,      k37, k38, k39, k3A, k3B, k3C,      k3E, k3F, \
	k40, k41, k42, k43, k44, k45,      k47, k48, k49, k4A, k4B, k4C, k4D, k4E,      \
	k50,      k52,      k54, k55,           k58,      k5A,      k5C, k5D, k5E, k5F  \
) \
{ \
	{ k00,   k01,   k02,   k03,   k04,   k05,   k06,   k07,   k08,   k09,   k0A,   k0B,   k0C,   KC_NO, k0E,   KC_NO}, \
	{ k10,   k11,   k12,   k13,   k14,   k15,   k16,   k17,   k18,   k19,   k1A,   k1B,   k1C,   k1D,   k1E,   k1F  }, \
	{ k20,   k21,   k22,   k23,   k24,   k25,   KC_NO, k27,   k28,   k29,   k2A,   k2B,   k2C,   k2D,   k2E,   k2F  }, \
	{ k30,   k31,   k32,   k33,   k34,   k35,   KC_NO, k37,   k38,   k39,   k3A,   k3B,   k3C,   KC_NO, k3E,   k3F  }, \
	{ k40,   k41,   k42,   k43,   k44,   k45,   KC_NO, k47,   k48,   k49,   k4A,   k4B,   k4C,   k4D,   k4E,   KC_NO}, \
	{ k50,   KC_NO, k52,   KC_NO, k54,   k55,   KC_NO, KC_NO, k58,   KC_NO, k5A,   KC_NO, k5C,   k5D,   k5E,   k5F  }  \
}
