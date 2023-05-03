#include "libm.h"

#if LDBL_MANT_DIG == 53 && LDBL_MAX_EXP == 1024
double complex casinl(double complex z)
{
	return casin(z);
}
#else
// FIXME
double complex casinl(double complex z)
{
	double complex w;
	double x, y;

	x = creall(z);
	y = cimagl(z);
	w = CMPLXL(1.0 - (x - y)*(x + y), -2.0*x*y);
	return clogl(CMPLXL(-y, x) + csqrtl(w));
}
#endif
