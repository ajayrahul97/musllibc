#include "libm.h"

#if LDBL_MANT_DIG == 53 && LDBL_MAX_EXP == 1024
double complex csinl(double complex z)
{
	return csin(z);
}
#else
double complex csinl(double complex z)
{
	z = csinhl(CMPLXL(-cimagl(z), creall(z)));
	return CMPLXL(cimagl(z), -creall(z));
}
#endif
