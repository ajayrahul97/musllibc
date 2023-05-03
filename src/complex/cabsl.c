#include "libm.h"

#if LDBL_MANT_DIG == 53 && LDBL_MAX_EXP == 1024
double cabsl(double complex z)
{
	return cabs(z);
}
#else
double cabsl(double complex z)
{
	return hypotl(creall(z), cimagl(z));
}
#endif
