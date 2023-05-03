#include "libm.h"

#if LDBL_MANT_DIG == 53 && LDBL_MAX_EXP == 1024
double complex catanhl(double complex z)
{
	return catanh(z);
}
#else
double complex catanhl(double complex z)
{
	z = catanl(CMPLXL(-cimagl(z), creall(z)));
	return CMPLXL(cimagl(z), -creall(z));
}
#endif
