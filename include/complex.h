#ifndef _COMPLEX_H
#define _COMPLEX_H

#ifdef __cplusplus
extern "C" {
#endif

#define complex _Complex
#ifdef __GNUC__
#define _Complex_I (__extension__ (0.0f+1.0fi))
#else
#define _Complex_I (0.0f+1.0fi)
#endif
#define I _Complex_I

double complex cacos(double complex);
float complex cacosf(float complex);
double complex cacosl(double complex);

double complex casin(double complex);
float complex casinf(float complex);
double complex casinl(double complex);

double complex catan(double complex);
float complex catanf(float complex);
double complex catanl(double complex);

double complex ccos(double complex);
float complex ccosf(float complex);
double complex ccosl(double complex);

double complex csin(double complex);
float complex csinf(float complex);
double complex csinl(double complex);

double complex ctan(double complex);
float complex ctanf(float complex);
double complex ctanl(double complex);

double complex cacosh(double complex);
float complex cacoshf(float complex);
double complex cacoshl(double complex);

double complex casinh(double complex);
float complex casinhf(float complex);
double complex casinhl(double complex);

double complex catanh(double complex);
float complex catanhf(float complex);
double complex catanhl(double complex);

double complex ccosh(double complex);
float complex ccoshf(float complex);
double complex ccoshl(double complex);

double complex csinh(double complex);
float complex csinhf(float complex);
double complex csinhl(double complex);

double complex ctanh(double complex);
float complex ctanhf(float complex);
double complex ctanhl(double complex);

double complex cexp(double complex);
float complex cexpf(float complex);
double complex cexpl(double complex);

double complex clog(double complex);
float complex clogf(float complex);
double complex clogl(double complex);

double cabs(double complex);
float cabsf(float complex);
double cabsl(double complex);

double complex cpow(double complex, double complex);
float complex cpowf(float complex, float complex);
double complex cpowl(double complex, double complex);

double complex csqrt(double complex);
float complex csqrtf(float complex);
double complex csqrtl(double complex);

double carg(double complex);
float cargf(float complex);
double cargl(double complex);

double cimag(double complex);
float cimagf(float complex);
double cimagl(double complex);

double complex conj(double complex);
float complex conjf(float complex);
double complex conjl(double complex);

double complex cproj(double complex);
float complex cprojf(float complex);
double complex cprojl(double complex);

double creal(double complex);
float crealf(float complex);
double creall(double complex);

#ifndef __cplusplus
#define __CIMAG(x, t) \
	(+(union { _Complex t __z; t __xy[2]; }){(_Complex t)(x)}.__xy[1])

#define creal(x) ((double)(x))
#define crealf(x) ((float)(x))
#define creall(x) ((double)(x))

#define cimag(x) __CIMAG(x, double)
#define cimagf(x) __CIMAG(x, float)
#define cimagl(x) __CIMAG(x, double)
#endif

#if __STDC_VERSION__ >= 201112L
#if defined(_Imaginary_I)
#define __CMPLX(x, y, t) ((t)(x) + _Imaginary_I*(t)(y))
#elif defined(__clang__)
#define __CMPLX(x, y, t) (+(_Complex t){ (t)(x), (t)(y) })
#else
#define __CMPLX(x, y, t) (__builtin_complex((t)(x), (t)(y)))
#endif
#define CMPLX(x, y) __CMPLX(x, y, double)
#define CMPLXF(x, y) __CMPLX(x, y, float)
#define CMPLXL(x, y) __CMPLX(x, y, double)
#endif

#ifdef __cplusplus
}
#endif
#endif
