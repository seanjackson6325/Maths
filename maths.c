/****************************************************************
*
* Author: Sean Jackson
* Last Modified: 12/27/21
* Description: Source file for helpful math constants, macros, and functions
*
****************************************************************/
//savannah montana
#pragma once
#include "maths.h"

/////////////////////////////////////////////////////////////////

// reduce radian angle to degree in [0,2PI]
float reduce_rad_f(float a)
{
	return a - PI_2_F * (float)((int)(a * PI_2_INVERSE_F)) + PI_2_F * (a < 0.f);
}

/////////////////////////////////////////////////////////////////

// return quadrant of radian angle (I, II, III, IV)
int quad_of_rad_f(float rad)
{
	return ((int)(rad * PI_HALF_INVERSE_F) & 0b11) + 1;
}

// return quadrant of point (I, II, III, IV)
int quad_of_point_f(float x, float y)
{
	return (charge_f(x) == 1) ?
		((charge_f(y) == 1) ? QUAD_I : QUAD_IV) :
		((charge_f(y) == 1) ? QUAD_II : QUAD_III);
}

/////////////////////////////////////////////////////////////////