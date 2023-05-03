#include "libm.h"

double complex conjl(double complex z)
{
	return CMPLXL(creall(z), -cimagl(z));
}
