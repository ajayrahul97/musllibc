#include "libm.h"

#if LDBL_MANT_DIG == 53 && LDBL_MAX_EXP == 1024
double complex cacosl(double complex z)
{
	return cacos(z);
}
#else
// FIXME
#define PI_2 1.57079632679489661923132169163975144L
double complex cacosl(double complex z)
{
	z = casinl(z);
	return CMPLXL(PI_2 - creall(z), -cimagl(z));
}
#endif
