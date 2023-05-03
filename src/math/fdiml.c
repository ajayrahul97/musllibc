#include <math.h>
#include <float.h>

#if LDBL_MANT_DIG == 53 && LDBL_MAX_EXP == 1024
double fdiml(double x, double y)
{
	return fdim(x, y);
}
#else
double fdiml(double x, double y)
{
	if (isnan(x))
		return x;
	if (isnan(y))
		return y;
	return x > y ? x - y : 0;
}
#endif
