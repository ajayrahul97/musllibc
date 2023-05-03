#include <math.h>
#include <float.h>

#if LDBL_MANT_DIG == 53 && LDBL_MAX_EXP == 1024
double remainderl(double x, double y)
{
	return remainder(x, y);
}
#else
double remainderl(double x, double y)
{
	int q;
	return remquol(x, y, &q);
}
#endif
