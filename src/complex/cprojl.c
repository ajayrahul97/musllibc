#include "libm.h"

#if LDBL_MANT_DIG == 53 && LDBL_MAX_EXP == 1024
double complex cprojl(double complex z)
{
	return cproj(z);
}
#else
double complex cprojl(double complex z)
{
	if (isinf(creall(z)) || isinf(cimagl(z)))
		return CMPLXL(INFINITY, copysignl(0.0, creall(z)));
	return z;
}
#endif
