/*
  Please refer to: https://gcc.gnu.org/onlinedocs/gccint/Soft-float-library-routines.html
 */
typedef int word_type;

typedef long long INT64;
typedef unsigned long long UINT64;
typedef int INT32;
typedef unsigned int UINT32;

/*
SI is "single integer" -- 32 bits
DI is "double integer" -- 64 bits
u is unsigned
l is logical -- unsigned
a is arithmetic -- signed
*/

 INT64 __ashldi3 ( INT64 x, word_type c) { return x << c; }
 INT64 __ashrdi3 ( INT64 x, word_type c) { return x >> c; }
UINT64 __lshrdi3 (UINT64 x, word_type c) { return x >> c; }

 INT64  __divdi3 ( INT64 x,  INT64 y) { return x / y; }
UINT64 __udivdi3 (UINT64 x, UINT64 y) { return x / y; }

 INT64  __moddi3 ( INT64 x,  INT64 y) { return x % y; }
UINT64 __umoddi3 (UINT64 x, UINT64 y) { return x % y; }

/* signed and unsigned multiplication and negation are the same */
INT64 __muldi3 (INT64 x, INT64 y) { return x * y; }
INT64 __negdi2 (INT64 x) { return -x; }

UINT64 __udivmoddi4 (UINT64 x, UINT64 y, UINT64 *r) { *r = x % y; return x / y; }

word_type  __cmpdi2 ( INT64 x , INT64 y) { return x < y ? 0 : x == y ? 1 : 2; }
word_type __ucmpdi2 (UINT64 x, UINT64 y) { return x < y ? 0 : x == y ? 1 : 2; }

// TODO: we need to fix this!!!

/* These functions return the sum of a and b. */
       float __addsf3 (float a, float b) { return a + b; }
     double __adddf3 (double a, double b) { return a + b; }
long double __addtf3 (long double a, long double b) { return a + b; }
long double __addxf3 (long double a, long double b) { return a + b; }

/* These functions return the difference between b and a; that is, a - b. */
       float __subsf3 (float a, float b) { return a - b; }
     double __subdf3 (double a, double b) { return a - b; }
long double __subtf3 (long double a, long double b) { return a - b; }
long double __subxf3 (long double a, long double b) { return a - b; }

/* These functions return the product of a and b. */
       float __mulsf3 (float a, float b) { return a * b; }
     double __muldf3 (double a, double b) { return a * b; }
long double __multf3 (long double a, long double b) { return a * b; }
long double __mulxf3 (long double a, long double b) { return a * b; }

/* These functions return the quotient of a and b; that is, a / b. */
       float __divsf3 (float a, float b) { return a / b; }
     double __divdf3 (double a, double b) { return a / b; }
long double __divtf3 (long double a, long double b) { return a / b; }
long double __divxf3 (long double a, long double b) { return a / b; }

     double __extendsfdf2 (float a) { return a; }
long double __extendsftf2 (float a) { return a; }
long double __extendsfxf2 (float a) { return a; }
long double __extenddftf2 (double a) { return a; }
long double __extenddfxf2 (double a) { return a; }

int __unordsf2 (float a, float b) { return 0; }
int __unorddf2 (double a, double b) { return 0; }
int __unordtf2 (long double a, long double b) { return 0; }

/* These functions truncate a to the narrower mode of their return type, rounding toward zero. */
int __fixsfsi (float a) { return 0; }
int __fixdfsi (double a) { return 0; }
int __fixtfsi (long double a) { return 0; }
int __fixxfsi (long double a) { return 0; }

/* These functions convert a to a signed integer, rounding toward zero. */
long __fixsfdi (float a) { return 0; }
long __fixdfdi (double a) { return 0; }
long __fixtfdi (long double a) { return 0; }
long __fixxfdi (long double a) { return 0; }

/* These functions convert a to a signed long long, rounding toward zero. */
unsigned int __fixunssfsi (float a) { return 0; }
unsigned int __fixunsdfsi (double a) { return 0; }
unsigned int __fixunstfsi (long double a) { return 0; }
unsigned int __fixunsxfsi (long double a) { return 0; }

/* These functions convert a to an unsigned integer, rounding toward zero. Negative values all become zero. */
unsigned long __fixunssfdi (float a) { return 0; }
unsigned long __fixunsdfdi (double a) { return 0; }
unsigned long __fixunstfdi (long double a) { return 0; }
unsigned long __fixunsxfdi (long double a) { return 0; }

/* These functions return a nonzero value if either argument is NaN, otherwise 0.

There is also a complete group of higher level functions which correspond directly to comparison operators. They implement the ISO C semantics for floating-point comparisons, taking NaN into account. Pay careful attention to the return values defined for each set. Under the hood, all of these routines are implemented as

  if (__unordXf2 (a, b))
    return E;
  return __cmpXf2 (a, b);
where E is a constant chosen to give the proper behavior for NaN. Thus, the meaning of the return value is different for each set. Do not rely on this implementation; only the semantics documented below are guaranteed. */
int __eqsf2 (float a, float b) { return 0; }
int __eqdf2 (double a, double b) { return 0; }
int __eqtf2 (long double a, long double b) { return 0; }

/* These functions return zero if neither argument is NaN, and a and b are equal. */
int __nesf2 (float a, float b) { return 0; }
int __nedf2 (double a, double b) { return 0; }
int __netf2 (long double a, long double b) { return 0; }

/* These functions return a nonzero value if either argument is NaN, or if a and b are unequal. */
int __gesf2 (float a, float b) { return 0; }
int __gedf2 (double a, double b) { return 0; }
int __getf2 (long double a, long double b) { return 0; }

/* These functions return a value greater than or equal to zero if neither argument is NaN, and a is greater than or equal to b. */
int __ltsf2 (float a, float b) { return 0; }
int __ltdf2 (double a, double b) { return 0; }
int __lttf2 (long double a, long double b) { return 0; }

/* These functions return a value less than zero if neither argument is NaN, and a is strictly less than b. */
int __lesf2 (float a, float b) { return 0; }
int __ledf2 (double a, double b) { return 0; }
int __letf2 (long double a, long double b) { return 0; }

/* These functions return a value less than or equal to zero if neither argument is NaN, and a is less than or equal to b. */
int __gtsf2 (float a, float b) { return 0; }
int __gtdf2 (double a, double b) { return 0; }
int __gttf2 (long double a, long double b) { return 0; }

/* These functions extend a to the wider mode of their return type. */
double __truncxfdf2 (long double a) { return (double)a; }
double __trunctfdf2 (long double a) { return (double)a; }
float __truncxfsf2 (long double a) { return (float)a; }
float __trunctfsf2 (long double a) { return (float)a; }
float __truncdfsf2 (double a) { return (float)a; }

/* These functions convert i, a signed integer, to floating point. */
float __floatsisf (int i) { return (float)i; }
double __floatsidf (int i) { return (double)i; }
long double __floatsitf (int i) { return (long double)i; }
long double __floatsixf (int i) { return (long double)i; }

/* These functions convert i, a signed long, to floating point. */
float __floatdisf (long i) { return (float)i; }
double __floatdidf (long i) { return (double)i; }
long double __floatditf (long i) { return (long double)i; }
long double __floatdixf (long i) { return (long double)i; }

/* These functions convert i, a signed long long, to floating point. */
float __floattisf (long long i) { return (float)i; }
double __floattidf (long long i) { return (double)i; }
long double __floattitf (long long i) { return (long double)i; }
long double __floattixf (long long i) { return (long double)i; }

/* These functions convert i, an unsigned integer, to floating point. */
float __floatunsisf (unsigned int i) { return i; }
double __floatunsidf (unsigned int i) { return (double)i; }
long double __floatunsitf (unsigned int i) { return (long double)i; }
long double __floatunsixf (unsigned int i) { return (long double)i; }

/* These functions convert i, an unsigned long, to floating point. */
float __floatundisf (unsigned long i) { return (float)i; }
double __floatundidf (unsigned long i) { return (double)i; }
long double __floatunditf (unsigned long i) { return (long double)i; }
long double __floatundixf (unsigned long i) { return (long double)i; }

/* These functions convert i, an unsigned long long, to floating point. */
float __floatuntisf (unsigned long long i) { return (float)i; }
double __floatuntidf (unsigned long long i) { return (double)i; }
long double __floatuntitf (unsigned long long i) { return (long double)i; }
long double __floatuntixf (unsigned long long i) { return (long double)i; }
