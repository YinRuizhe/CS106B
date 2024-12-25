


#ifndef _gmath_h
#define _gmath_h

/*
* File: gmath.h
* -------------------
* This file exports the constant PI along with a few degree-based trigonometric functions, which are typically easier to use.
*/

extern const double PI; /* The mathematical constant pi*/

/*
* Function:sinDegrees
* Usage: double sine=sinDegrees(angle);
* ----------------------------------------
* Returns the trigonometric sine of angle expressed in degrees.
*/

double sinDegrees(double angle);


double cosDegrees(double angle);

double toDegrees(double radians);


double toRadians(double degrees);


#endif
