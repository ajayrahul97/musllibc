#include "libm.h"

#if LDBL_MANT_DIG == 53 && LDBL_MAX_EXP == 1024
double complex clogl(double complex z)
{
	return clog(z);
}
#else
// FIXME
double complex clogl(double complex z)
{
	double r, phi;

	r = cabsl(z);
	phi = cargl(z);
	return CMPLXL(logl(r), phi);
}
#endif
