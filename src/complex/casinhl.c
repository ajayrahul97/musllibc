#include "libm.h"

#if LDBL_MANT_DIG == 53 && LDBL_MAX_EXP == 1024
double complex casinhl(double complex z)
{
	return casinh(z);
}
#else
double complex casinhl(double complex z)
{
	z = casinl(CMPLXL(-cimagl(z), creall(z)));
	return CMPLXL(cimagl(z), -creall(z));
}
#endif
