#include "libm.h"

#if LDBL_MANT_DIG == 53 && LDBL_MAX_EXP == 1024
double complex ctanl(double complex z)
{
	return ctan(z);
}
#else
double complex ctanl(double complex z)
{
	z = ctanhl(CMPLXL(-cimagl(z), creall(z)));
	return CMPLXL(cimagl(z), -creall(z));
}
#endif
