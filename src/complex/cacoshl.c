#include "libm.h"

#if LDBL_MANT_DIG == 53 && LDBL_MAX_EXP == 1024
double complex cacoshl(double complex z)
{
	return cacosh(z);
}
#else
double complex cacoshl(double complex z)
{
	z = cacosl(z);
	return CMPLXL(-cimagl(z), creall(z));
}
#endif
