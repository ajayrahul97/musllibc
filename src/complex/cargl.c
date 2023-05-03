#include "libm.h"

#if LDBL_MANT_DIG == 53 && LDBL_MAX_EXP == 1024
double cargl(double complex z)
{
	return carg(z);
}
#else
double cargl(double complex z)
{
	return atan2l(cimagl(z), creall(z));
}
#endif
