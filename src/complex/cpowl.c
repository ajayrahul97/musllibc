#include "libm.h"

#if LDBL_MANT_DIG == 53 && LDBL_MAX_EXP == 1024
double complex cpowl(double complex z, double complex c)
{
	return cpow(z, c);
}
#else
double complex cpowl(double complex z, double complex c)
{
	return cexpl(c * clogl(z));
}
#endif
