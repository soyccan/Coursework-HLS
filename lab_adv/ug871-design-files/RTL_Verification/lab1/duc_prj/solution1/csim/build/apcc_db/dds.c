/* Provide Declarations */
#include <stdarg.h>
#include <setjmp.h>
#include <limits.h>
#ifdef NEED_CBEAPINT
#include <autopilot_cbe.h>
#else
#define aesl_fopen fopen
#define aesl_freopen freopen
#define aesl_tmpfile tmpfile
#endif
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#ifdef __STRICT_ANSI__
#define inline __inline__
#define typeof __typeof__ 
#endif
#define __isoc99_fscanf fscanf
#define __isoc99_sscanf sscanf
#undef ferror
#undef feof
/* get a declaration for alloca */
#if defined(__CYGWIN__) || defined(__MINGW32__)
#define  alloca(x) __builtin_alloca((x))
#define _alloca(x) __builtin_alloca((x))
#elif defined(__APPLE__)
extern void *__builtin_alloca(unsigned long);
#define alloca(x) __builtin_alloca(x)
#define longjmp _longjmp
#define setjmp _setjmp
#elif defined(__sun__)
#if defined(__sparcv9)
extern void *__builtin_alloca(unsigned long);
#else
extern void *__builtin_alloca(unsigned int);
#endif
#define alloca(x) __builtin_alloca(x)
#elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__DragonFly__) || defined(__arm__)
#define alloca(x) __builtin_alloca(x)
#elif defined(_MSC_VER)
#define inline _inline
#define alloca(x) _alloca(x)
#else
#include <alloca.h>
#endif

#ifndef __GNUC__  /* Can only support "linkonce" vars with GCC */
#define __attribute__(X)
#endif

#if defined(__GNUC__) && defined(__APPLE_CC__)
#define __EXTERNAL_WEAK__ __attribute__((weak_import))
#elif defined(__GNUC__)
#define __EXTERNAL_WEAK__ __attribute__((weak))
#else
#define __EXTERNAL_WEAK__
#endif

#if defined(__GNUC__) && (defined(__APPLE_CC__) || defined(__CYGWIN__) || defined(__MINGW32__))
#define __ATTRIBUTE_WEAK__
#elif defined(__GNUC__)
#define __ATTRIBUTE_WEAK__ __attribute__((weak))
#else
#define __ATTRIBUTE_WEAK__
#endif

#if defined(__GNUC__)
#define __HIDDEN__ __attribute__((visibility("hidden")))
#endif

#ifdef __GNUC__
#define LLVM_NAN(NanStr)   __builtin_nan(NanStr)   /* Double */
#define LLVM_NANF(NanStr)  __builtin_nanf(NanStr)  /* Float */
#define LLVM_NANS(NanStr)  __builtin_nans(NanStr)  /* Double */
#define LLVM_NANSF(NanStr) __builtin_nansf(NanStr) /* Float */
#define LLVM_INF           __builtin_inf()         /* Double */
#define LLVM_INFF          __builtin_inff()        /* Float */
#define LLVM_PREFETCH(addr,rw,locality) __builtin_prefetch(addr,rw,locality)
#define __ATTRIBUTE_CTOR__ __attribute__((constructor))
#define __ATTRIBUTE_DTOR__ __attribute__((destructor))
#define LLVM_ASM           __asm__
#else
#define LLVM_NAN(NanStr)   ((double)0.0)           /* Double */
#define LLVM_NANF(NanStr)  0.0F                    /* Float */
#define LLVM_NANS(NanStr)  ((double)0.0)           /* Double */
#define LLVM_NANSF(NanStr) 0.0F                    /* Float */
#define LLVM_INF           ((double)0.0)           /* Double */
#define LLVM_INFF          0.0F                    /* Float */
#define LLVM_PREFETCH(addr,rw,locality)            /* PREFETCH */
#define __ATTRIBUTE_CTOR__
#define __ATTRIBUTE_DTOR__
#define LLVM_ASM(X)
#endif

#if __GNUC__ < 4 /* Old GCC's, or compilers not GCC */ 
#define __builtin_stack_save() 0   /* not implemented */
#define __builtin_stack_restore(X) /* noop */
#endif

#if __GNUC__ && __LP64__ /* 128-bit integer types */
typedef int __attribute__((mode(TI))) llvmInt128;
typedef unsigned __attribute__((mode(TI))) llvmUInt128;
#endif

#define CODE_FOR_MAIN() /* Any target-specific code for main()*/

#ifndef __cplusplus
typedef unsigned char bool;
#endif


/* Support for floating point constants */
typedef unsigned long long ConstantDoubleTy;
typedef unsigned int        ConstantFloatTy;
typedef struct { unsigned long long f1; unsigned short f2; unsigned short pad[3]; } ConstantFP80Ty;
typedef struct { unsigned long long f1; unsigned long long f2; } ConstantFP128Ty;


/* Global Declarations */
/* Helper union for bitcasts */
typedef union {
  unsigned int Int32;
  unsigned long long Int64;
  float Float;
  double Double;
} llvmBitCastUnion;

/* External Global Variable Declarations */

/* Function Declarations */
double fmod(double, double);
float fmodf(float, float);
long double fmodl(long double, long double);
void dds(signed short llvm_cbe_freq, signed short *llvm_cbe_sine, signed short *llvm_cbe_cosine);


/* Global Variable Definitions and Initialization */
static signed short aesl_internal_dds_OC_dds_table[32] = { ((unsigned short )0), ((unsigned short )3196), ((unsigned short )6270), ((unsigned short )9102), ((unsigned short )11585), ((unsigned short )13623), ((unsigned short )15137), ((unsigned short )16069), ((unsigned short )16384), ((unsigned short )16069), ((unsigned short )15137), ((unsigned short )13623), ((unsigned short )11585), ((unsigned short )9102), ((unsigned short )6270), ((unsigned short )3196), ((unsigned short )0), ((unsigned short )-3196), ((unsigned short )-6270), ((unsigned short )-9102), ((unsigned short )-11585), ((unsigned short )-13623), ((unsigned short )-15137), ((unsigned short )-16069), ((unsigned short )-16384), ((unsigned short )-16069), ((unsigned short )-15137), ((unsigned short )-13623), ((unsigned short )-11585), ((unsigned short )-9102), ((unsigned short )-6270), ((unsigned short )-3196) };
static unsigned short aesl_internal_dds_OC_acc;


/* Function Bodies */
static inline int llvm_fcmp_ord(double X, double Y) { return X == X && Y == Y; }
static inline int llvm_fcmp_uno(double X, double Y) { return X != X || Y != Y; }
static inline int llvm_fcmp_ueq(double X, double Y) { return X == Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_une(double X, double Y) { return X != Y; }
static inline int llvm_fcmp_ult(double X, double Y) { return X <  Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_ugt(double X, double Y) { return X >  Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_ule(double X, double Y) { return X <= Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_uge(double X, double Y) { return X >= Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_oeq(double X, double Y) { return X == Y ; }
static inline int llvm_fcmp_one(double X, double Y) { return X != Y && llvm_fcmp_ord(X, Y); }
static inline int llvm_fcmp_olt(double X, double Y) { return X <  Y ; }
static inline int llvm_fcmp_ogt(double X, double Y) { return X >  Y ; }
static inline int llvm_fcmp_ole(double X, double Y) { return X <= Y ; }
static inline int llvm_fcmp_oge(double X, double Y) { return X >= Y ; }

void dds(signed short llvm_cbe_freq, signed short *llvm_cbe_sine, signed short *llvm_cbe_cosine) {
  static  unsigned long long aesl_llvm_cbe_1_count = 0;
  static  unsigned long long aesl_llvm_cbe_2_count = 0;
  static  unsigned long long aesl_llvm_cbe_3_count = 0;
  static  unsigned long long aesl_llvm_cbe_4_count = 0;
  static  unsigned long long aesl_llvm_cbe_5_count = 0;
  static  unsigned long long aesl_llvm_cbe_6_count = 0;
  static  unsigned long long aesl_llvm_cbe_7_count = 0;
  unsigned short llvm_cbe_tmp__1;
  static  unsigned long long aesl_llvm_cbe_8_count = 0;
  unsigned short llvm_cbe_tmp__2;
  static  unsigned long long aesl_llvm_cbe_9_count = 0;
  static  unsigned long long aesl_llvm_cbe_10_count = 0;
  unsigned short llvm_cbe_tmp__3;
  static  unsigned long long aesl_llvm_cbe_11_count = 0;
  unsigned char llvm_cbe_tmp__4;
  static  unsigned long long aesl_llvm_cbe_12_count = 0;
  static  unsigned long long aesl_llvm_cbe_13_count = 0;
  static  unsigned long long aesl_llvm_cbe_14_count = 0;
  static  unsigned long long aesl_llvm_cbe_15_count = 0;
  unsigned long long llvm_cbe_tmp__5;
  static  unsigned long long aesl_llvm_cbe_16_count = 0;
  signed short *llvm_cbe_tmp__6;
  static  unsigned long long aesl_llvm_cbe_17_count = 0;
  unsigned short llvm_cbe_tmp__7;
  static  unsigned long long aesl_llvm_cbe_18_count = 0;
  static  unsigned long long aesl_llvm_cbe_19_count = 0;
  unsigned char llvm_cbe_tmp__8;
  static  unsigned long long aesl_llvm_cbe_20_count = 0;
  static  unsigned long long aesl_llvm_cbe_21_count = 0;
  static  unsigned long long aesl_llvm_cbe_22_count = 0;
  unsigned long long llvm_cbe_tmp__9;
  static  unsigned long long aesl_llvm_cbe_23_count = 0;
  signed short *llvm_cbe_tmp__10;
  static  unsigned long long aesl_llvm_cbe_24_count = 0;
  unsigned short llvm_cbe_tmp__11;
  static  unsigned long long aesl_llvm_cbe_25_count = 0;
  static  unsigned long long aesl_llvm_cbe_26_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @dds\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = load i16* @aesl_internal_dds.acc, align 2, !dbg !4 for 0x%I64xth hint within @dds  --> \n", ++aesl_llvm_cbe_7_count);
  llvm_cbe_tmp__1 = (unsigned short )*(&aesl_internal_dds_OC_acc);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__1);
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = add i16 %%1, %%freq, !dbg !4 for 0x%I64xth hint within @dds  --> \n", ++aesl_llvm_cbe_8_count);
  llvm_cbe_tmp__2 = (unsigned short )((unsigned short )(((unsigned short )(llvm_cbe_tmp__1&65535ull)) + ((unsigned short )(llvm_cbe_freq&65535ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__2&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%2, i16* @aesl_internal_dds.acc, align 2, !dbg !4 for 0x%I64xth hint within @dds  --> \n", ++aesl_llvm_cbe_9_count);
  *(&aesl_internal_dds_OC_acc) = llvm_cbe_tmp__2;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__2);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = lshr i16 %%2, 11, !dbg !4 for 0x%I64xth hint within @dds  --> \n", ++aesl_llvm_cbe_10_count);
  llvm_cbe_tmp__3 = (unsigned short )((unsigned short )(((unsigned short )(((unsigned short )(llvm_cbe_tmp__2&65535ull)) >> ((unsigned short )(((unsigned short )11)&65535ull))))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__3&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = trunc i16 %%3 to i5, !dbg !4 for 0x%I64xth hint within @dds  --> \n", ++aesl_llvm_cbe_11_count);
  llvm_cbe_tmp__4 = (unsigned char )((unsigned char )llvm_cbe_tmp__3&31U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__4);
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = zext i5 %%4 to i64, !dbg !4 for 0x%I64xth hint within @dds  --> \n", ++aesl_llvm_cbe_15_count);
  llvm_cbe_tmp__5 = (unsigned long long )((unsigned long long )(unsigned char )llvm_cbe_tmp__4&31U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__5);
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = getelementptr inbounds [32 x i16]* @aesl_internal_dds.dds_table, i64 0, i64 %%5, !dbg !4 for 0x%I64xth hint within @dds  --> \n", ++aesl_llvm_cbe_16_count);
  llvm_cbe_tmp__6 = (signed short *)(&aesl_internal_dds_OC_dds_table[(((signed long long )llvm_cbe_tmp__5))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__5));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__5) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_dds.dds_table' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = load i16* %%6, align 2, !dbg !4 for 0x%I64xth hint within @dds  --> \n", ++aesl_llvm_cbe_17_count);
  llvm_cbe_tmp__7 = (unsigned short )*llvm_cbe_tmp__6;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__7);
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%7, i16* %%sine, align 2, !dbg !4 for 0x%I64xth hint within @dds  --> \n", ++aesl_llvm_cbe_18_count);
  *llvm_cbe_sine = llvm_cbe_tmp__7;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__7);
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = sub i5 8, %%4, !dbg !5 for 0x%I64xth hint within @dds  --> \n", ++aesl_llvm_cbe_19_count);
  llvm_cbe_tmp__8 = (unsigned char )((unsigned char )(((unsigned char )8)&31ull)) - ((unsigned char )(llvm_cbe_tmp__4&31ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned char )(llvm_cbe_tmp__8&31ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = zext i5 %%8 to i64, !dbg !4 for 0x%I64xth hint within @dds  --> \n", ++aesl_llvm_cbe_22_count);
  llvm_cbe_tmp__9 = (unsigned long long )((unsigned long long )(unsigned char )llvm_cbe_tmp__8&31U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__9);
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = getelementptr inbounds [32 x i16]* @aesl_internal_dds.dds_table, i64 0, i64 %%9, !dbg !4 for 0x%I64xth hint within @dds  --> \n", ++aesl_llvm_cbe_23_count);
  llvm_cbe_tmp__10 = (signed short *)(&aesl_internal_dds_OC_dds_table[(((signed long long )llvm_cbe_tmp__9))
#ifdef AESL_BC_SIM
 % 32
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__9));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__9) < 32)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_dds.dds_table' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = load i16* %%10, align 2, !dbg !4 for 0x%I64xth hint within @dds  --> \n", ++aesl_llvm_cbe_24_count);
  llvm_cbe_tmp__11 = (unsigned short )*llvm_cbe_tmp__10;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__11);
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%11, i16* %%cosine, align 2, !dbg !4 for 0x%I64xth hint within @dds  --> \n", ++aesl_llvm_cbe_25_count);
  *llvm_cbe_cosine = llvm_cbe_tmp__11;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__11);
  if (AESL_DEBUG_TRACE)
      printf("\nEND @dds}\n");
  return;
}

