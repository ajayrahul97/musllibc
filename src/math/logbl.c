#include <math.h>
#if LDBL_MANT_DIG == 53 && LDBL_MAX_EXP == 1024
double logbl(double x)
{
	return logb(x);
}
#else
double logbl(double x)
{
	if (!isfinite(x))
		return x * x;
	if (x == 0)
		return -1/(x*x);
	return ilogbl(x);
}
#endif
