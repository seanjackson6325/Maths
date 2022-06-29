/****************************************************************
*
* Author: Sean Jackson
* Last Modified: 12/27/21
* Description: Header file for helpful math constants, macros, and functions
*
****************************************************************/

#pragma once
#include "math.h"

/////////////////////////////////////////////////////////////////

#define QUAD_I 1
#define QUAD_II 2
#define QUAD_III 3
#define QUAD_IV 4

// return quadrant of radian angle (I, II, III, IV)
int quad_of_rad_f(float rad);
// return quadrant of point (I, II, III, IV)
int quad_of_point_f(float x, float y);

/////////////////////////////////////////////////////////////////

// get charge of signed integer (+1/-1)
#define charge_i(x) (x >= 0) ? 1 : -1
// get charge of float (+1.f/-1.f)
#define charge_f(x) (x >= 0.f) ? 1.f : -1.f
// get charge of double (+1.0/-1.0)
#define charge_d(x) (x >= 0.0) ? 1.0 : -1.0

/////////////////////////////////////////////////////////////////

// get absolute value of signed integer
#define abs_i(i) (i < 0) ? -i : i
// get absolute value of float
#define abs_f(f) (f < 0.f) ? -f : f
// get absolute value of double
#define abs_d(d) (d < 0.0) ? -d : d

/////////////////////////////////////////////////////////////////

#define PI_2_F 6.283185f
// PI value (float):
#define PI_F 3.141593f
// PI/2 value (float)
#define PI_HALF_F 1.570796f
// PI/3 value (float)
#define PI_THIRD_F 1.047198f
// PI/4 value (float)
#define PI_QAURT_F 0.785398f
// PI/6 value (float)
#define PI_SIXTH_F 0.523599f
// PI/12 value (float)
#define PI_TWELFTH_F 0.261799f

// 1/PI value (float)
#define PI_INVERSE_F 0.318310f
// 1/2PI value (float)
#define PI_2_INVERSE_F 0.159155f
// 1/2PI value (float)
#define PI_2_INVERSE_F 0.159155f
// 2/PI (1/(1/2PI)) value (float)
#define PI_HALF_INVERSE_F 0.636620f

/////////////////////////////////////////////////////////////////

// degrees / radian (float)
#define DEG_PER_RAD_F 57.295780f
// radians / degree (float)
#define RAD_PER_DEG_F 0.017453f

// convert radian angle to degrees (float)
#define RAD_TO_DEG_F(a) a * DEG_PER_RAD_F;
// convert degree angle to radians (float)
#define DEG_TO_RAD_F(a) a * RAD_PER_DEG_F;

// reduce radian angle to fit in [0,2PI]
float reduce_rad_f(float a);

/////////////////////////////////////////////////////////////////