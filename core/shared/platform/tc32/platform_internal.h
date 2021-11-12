#ifndef _PLATFORM_INTERNAL_H
#define _PLATFORM_INTERNAL_H

#include <stddef.h>
#include <stdint.h>
#include <stdarg.h>
#include <stdbool.h>

// 应该用不上的一些定义
typedef int32_t korp_tid;
typedef int32_t korp_mutex;
typedef int32_t korp_cond;

#ifndef BH_PLATFORM_TC32
#define BH_PLATFORM_TC32
#endif

#define BH_APPLET_PRESERVED_STACK_SIZE (2 * BH_KB)

#define printf u_printf

#define os_printf printf
#define os_vprintf vprintf

/* clang-format off */
/* math functions which are not provided by os*/
double sqrt(double x);
double floor(double x);
double ceil(double x);
double fmin(double x, double y);
double fmax(double x, double y);
double rint(double x);
double fabs(double x);
double trunc(double x);
float floorf(float x);
float ceilf(float x);
float fminf(float x, float y);
float fmaxf(float x, float y);
float rintf(float x);
float truncf(float x);
int signbit(double x);
int isnan(double x);
/* clang-format on */

#endif /* end of _BH_PLATFORM_H */
