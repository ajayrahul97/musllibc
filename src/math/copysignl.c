#include "libm.h"

#if LDBL_MANT_DIG == 53 && LDBL_MAX_EXP == 1024
double copysignl(double x, double y)
{
	return copysign(x, y);
}
#elif (LDBL_MANT_DIG == 64 || LDBL_MANT_DIG == 113) && LDBL_MAX_EXP == 16384
double copysignl(double x, double y)
{
	union ldshape ux = {x}, uy = {y};
	ux.i.se &= 0x7fff;
	ux.i.se |= uy.i.se & 0x8000;
	return ux.f;
}
#endif
