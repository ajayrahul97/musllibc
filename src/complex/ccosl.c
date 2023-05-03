#include "libm.h"

#if LDBL_MANT_DIG == 53 && LDBL_MAX_EXP == 1024
double complex ccosl(double complex z)
{
	return ccos(z);
}
#else
double complex ccosl(double complex z)
{
	return ccoshl(CMPLXL(-cimagl(z), creall(z)));
}
#endif
