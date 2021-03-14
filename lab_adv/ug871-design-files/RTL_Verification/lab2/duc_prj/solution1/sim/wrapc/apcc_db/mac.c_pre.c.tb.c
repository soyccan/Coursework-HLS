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

/* Function Declarations */
double fmod(double, double);
float fmodf(float, float);
long double fmodl(long double, long double);
signed long long mult(signed int llvm_cbe_c, signed int llvm_cbe_d);
signed long long srrc_mac(signed int llvm_cbe_c, signed int llvm_cbe_d, signed long long llvm_cbe_s);
signed long long mac1(signed int llvm_cbe_c, signed int llvm_cbe_d, signed long long llvm_cbe_s);
signed long long mac2(signed int llvm_cbe_c, signed int llvm_cbe_d, signed long long llvm_cbe_s);
signed long long mac(signed int llvm_cbe_c, signed int llvm_cbe_d, signed long long llvm_cbe_s);
signed long long symtap(signed int llvm_cbe_a, signed int llvm_cbe_b, signed int llvm_cbe_c);


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

signed long long mult(signed int llvm_cbe_c, signed int llvm_cbe_d) {
  static  unsigned long long aesl_llvm_cbe_1_count = 0;
  static  unsigned long long aesl_llvm_cbe_2_count = 0;
  static  unsigned long long aesl_llvm_cbe_3_count = 0;
  static  unsigned long long aesl_llvm_cbe_4_count = 0;
  unsigned long long llvm_cbe_tmp__1;
  static  unsigned long long aesl_llvm_cbe_5_count = 0;
  static  unsigned long long aesl_llvm_cbe_6_count = 0;
  unsigned long long llvm_cbe_tmp__2;
  static  unsigned long long aesl_llvm_cbe_7_count = 0;
  unsigned long long llvm_cbe_tmp__3;
  static  unsigned long long aesl_llvm_cbe_8_count = 0;
  static  unsigned long long aesl_llvm_cbe_9_count = 0;
  static  unsigned long long aesl_llvm_cbe_10_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @mult\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = sext i18 %%c to i37, !dbg !7 for 0x%I64xth hint within @mult  --> \n", ++aesl_llvm_cbe_4_count);
  llvm_cbe_tmp__1 = (unsigned long long )((signed long long )(signed int )(llvm_cbe_c & (1U << 17U )  ? llvm_cbe_c | 4294705152U : llvm_cbe_c & 262143U));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__1);
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = sext i19 %%d to i37, !dbg !7 for 0x%I64xth hint within @mult  --> \n", ++aesl_llvm_cbe_6_count);
  llvm_cbe_tmp__2 = (unsigned long long )((signed long long )(signed int )(llvm_cbe_d & (1U << 18U )  ? llvm_cbe_d | 4294443008U : llvm_cbe_d & 524287U));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__2);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = mul nsw i37 %%2, %%1, !dbg !7 for 0x%I64xth hint within @mult  --> \n", ++aesl_llvm_cbe_7_count);
  llvm_cbe_tmp__3 = (unsigned long long )((unsigned long long )(llvm_cbe_tmp__2&137438953471ull)) * ((unsigned long long )(llvm_cbe_tmp__1&137438953471ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__3&137438953471ull)));
  if (AESL_DEBUG_TRACE)
      printf("\nEND @mult}\n");
  return llvm_cbe_tmp__3;
}


signed long long srrc_mac(signed int llvm_cbe_c, signed int llvm_cbe_d, signed long long llvm_cbe_s) {
  static  unsigned long long aesl_llvm_cbe_11_count = 0;
  static  unsigned long long aesl_llvm_cbe_12_count = 0;
  static  unsigned long long aesl_llvm_cbe_13_count = 0;
  static  unsigned long long aesl_llvm_cbe_14_count = 0;
  static  unsigned long long aesl_llvm_cbe_15_count = 0;
  unsigned long long llvm_cbe_tmp__4;
  static  unsigned long long aesl_llvm_cbe_16_count = 0;
  static  unsigned long long aesl_llvm_cbe_17_count = 0;
  unsigned long long llvm_cbe_tmp__5;
  static  unsigned long long aesl_llvm_cbe_18_count = 0;
  unsigned long long llvm_cbe_tmp__6;
  static  unsigned long long aesl_llvm_cbe_19_count = 0;
  static  unsigned long long aesl_llvm_cbe_20_count = 0;
  static  unsigned long long aesl_llvm_cbe_21_count = 0;
  static  unsigned long long aesl_llvm_cbe_22_count = 0;
  unsigned long long llvm_cbe_tmp__7;
  static  unsigned long long aesl_llvm_cbe_23_count = 0;
  unsigned long long llvm_cbe_tmp__8;
  static  unsigned long long aesl_llvm_cbe_24_count = 0;
  static  unsigned long long aesl_llvm_cbe_25_count = 0;
  unsigned long long llvm_cbe_tmp__9;
  static  unsigned long long aesl_llvm_cbe_26_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @srrc_mac\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = sext i18 %%c to i36, !dbg !7 for 0x%I64xth hint within @srrc_mac  --> \n", ++aesl_llvm_cbe_15_count);
  llvm_cbe_tmp__4 = (unsigned long long )((signed long long )(signed int )(llvm_cbe_c & (1U << 17U )  ? llvm_cbe_c | 4294705152U : llvm_cbe_c & 262143U));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__4);
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = sext i18 %%d to i36, !dbg !7 for 0x%I64xth hint within @srrc_mac  --> \n", ++aesl_llvm_cbe_17_count);
  llvm_cbe_tmp__5 = (unsigned long long )((signed long long )(signed int )(llvm_cbe_d & (1U << 17U )  ? llvm_cbe_d | 4294705152U : llvm_cbe_d & 262143U));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__5);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = mul nsw i36 %%2, %%1, !dbg !7 for 0x%I64xth hint within @srrc_mac  --> \n", ++aesl_llvm_cbe_18_count);
  llvm_cbe_tmp__6 = (unsigned long long )((unsigned long long )(llvm_cbe_tmp__5&68719476735ull)) * ((unsigned long long )(llvm_cbe_tmp__4&68719476735ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__6&68719476735ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = sext i36 %%3 to i38, !dbg !8 for 0x%I64xth hint within @srrc_mac  --> \n", ++aesl_llvm_cbe_22_count);
  llvm_cbe_tmp__7 = (unsigned long long )((signed long long )(signed long long )(llvm_cbe_tmp__6 & (1ULL << 35ULL )  ? llvm_cbe_tmp__6 | 18446744004990074880ULL : llvm_cbe_tmp__6 & 68719476735ULL));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__7);
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = trunc i40 %%s to i38, !dbg !8 for 0x%I64xth hint within @srrc_mac  --> \n", ++aesl_llvm_cbe_23_count);
  llvm_cbe_tmp__8 = (unsigned long long )((unsigned long long )llvm_cbe_s&274877906943ULL);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__8);
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = add i38 %%4, %%5, !dbg !8 for 0x%I64xth hint within @srrc_mac  --> \n", ++aesl_llvm_cbe_25_count);
  llvm_cbe_tmp__9 = (unsigned long long )((unsigned long long )(llvm_cbe_tmp__7&274877906943ull)) + ((unsigned long long )(llvm_cbe_tmp__8&274877906943ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__9&274877906943ull)));
  if (AESL_DEBUG_TRACE)
      printf("\nEND @srrc_mac}\n");
  return llvm_cbe_tmp__9;
}


signed long long mac1(signed int llvm_cbe_c, signed int llvm_cbe_d, signed long long llvm_cbe_s) {
  static  unsigned long long aesl_llvm_cbe_27_count = 0;
  static  unsigned long long aesl_llvm_cbe_28_count = 0;
  static  unsigned long long aesl_llvm_cbe_29_count = 0;
  static  unsigned long long aesl_llvm_cbe_30_count = 0;
  static  unsigned long long aesl_llvm_cbe_31_count = 0;
  unsigned long long llvm_cbe_tmp__10;
  static  unsigned long long aesl_llvm_cbe_32_count = 0;
  static  unsigned long long aesl_llvm_cbe_33_count = 0;
  unsigned long long llvm_cbe_tmp__11;
  static  unsigned long long aesl_llvm_cbe_34_count = 0;
  unsigned long long llvm_cbe_tmp__12;
  static  unsigned long long aesl_llvm_cbe_35_count = 0;
  static  unsigned long long aesl_llvm_cbe_36_count = 0;
  static  unsigned long long aesl_llvm_cbe_37_count = 0;
  unsigned long long llvm_cbe_tmp__13;
  static  unsigned long long aesl_llvm_cbe_38_count = 0;
  static  unsigned long long aesl_llvm_cbe_39_count = 0;
  unsigned long long llvm_cbe_tmp__14;
  static  unsigned long long aesl_llvm_cbe_40_count = 0;
  static  unsigned long long aesl_llvm_cbe_41_count = 0;
  static  unsigned long long aesl_llvm_cbe_42_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @mac1\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = sext i18 %%c to i36, !dbg !7 for 0x%I64xth hint within @mac1  --> \n", ++aesl_llvm_cbe_31_count);
  llvm_cbe_tmp__10 = (unsigned long long )((signed long long )(signed int )(llvm_cbe_c & (1U << 17U )  ? llvm_cbe_c | 4294705152U : llvm_cbe_c & 262143U));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__10);
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = sext i18 %%d to i36, !dbg !7 for 0x%I64xth hint within @mac1  --> \n", ++aesl_llvm_cbe_33_count);
  llvm_cbe_tmp__11 = (unsigned long long )((signed long long )(signed int )(llvm_cbe_d & (1U << 17U )  ? llvm_cbe_d | 4294705152U : llvm_cbe_d & 262143U));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__11);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = mul nsw i36 %%2, %%1, !dbg !7 for 0x%I64xth hint within @mac1  --> \n", ++aesl_llvm_cbe_34_count);
  llvm_cbe_tmp__12 = (unsigned long long )((unsigned long long )(llvm_cbe_tmp__11&68719476735ull)) * ((unsigned long long )(llvm_cbe_tmp__10&68719476735ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__12&68719476735ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = sext i36 %%3 to i38, !dbg !8 for 0x%I64xth hint within @mac1  --> \n", ++aesl_llvm_cbe_37_count);
  llvm_cbe_tmp__13 = (unsigned long long )((signed long long )(signed long long )(llvm_cbe_tmp__12 & (1ULL << 35ULL )  ? llvm_cbe_tmp__12 | 18446744004990074880ULL : llvm_cbe_tmp__12 & 68719476735ULL));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__13);
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = add nsw i38 %%4, %%s, !dbg !8 for 0x%I64xth hint within @mac1  --> \n", ++aesl_llvm_cbe_39_count);
  llvm_cbe_tmp__14 = (unsigned long long )((unsigned long long )(llvm_cbe_tmp__13&274877906943ull)) + ((unsigned long long )(llvm_cbe_s&274877906943ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__14&274877906943ull)));
  if (AESL_DEBUG_TRACE)
      printf("\nEND @mac1}\n");
  return llvm_cbe_tmp__14;
}


signed long long mac2(signed int llvm_cbe_c, signed int llvm_cbe_d, signed long long llvm_cbe_s) {
  static  unsigned long long aesl_llvm_cbe_43_count = 0;
  static  unsigned long long aesl_llvm_cbe_44_count = 0;
  static  unsigned long long aesl_llvm_cbe_45_count = 0;
  static  unsigned long long aesl_llvm_cbe_46_count = 0;
  static  unsigned long long aesl_llvm_cbe_47_count = 0;
  unsigned long long llvm_cbe_tmp__15;
  static  unsigned long long aesl_llvm_cbe_48_count = 0;
  static  unsigned long long aesl_llvm_cbe_49_count = 0;
  unsigned long long llvm_cbe_tmp__16;
  static  unsigned long long aesl_llvm_cbe_50_count = 0;
  unsigned long long llvm_cbe_tmp__17;
  static  unsigned long long aesl_llvm_cbe_51_count = 0;
  static  unsigned long long aesl_llvm_cbe_52_count = 0;
  static  unsigned long long aesl_llvm_cbe_53_count = 0;
  unsigned long long llvm_cbe_tmp__18;
  static  unsigned long long aesl_llvm_cbe_54_count = 0;
  static  unsigned long long aesl_llvm_cbe_55_count = 0;
  unsigned long long llvm_cbe_tmp__19;
  static  unsigned long long aesl_llvm_cbe_56_count = 0;
  static  unsigned long long aesl_llvm_cbe_57_count = 0;
  static  unsigned long long aesl_llvm_cbe_58_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @mac2\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = sext i18 %%c to i36, !dbg !7 for 0x%I64xth hint within @mac2  --> \n", ++aesl_llvm_cbe_47_count);
  llvm_cbe_tmp__15 = (unsigned long long )((signed long long )(signed int )(llvm_cbe_c & (1U << 17U )  ? llvm_cbe_c | 4294705152U : llvm_cbe_c & 262143U));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__15);
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = sext i18 %%d to i36, !dbg !7 for 0x%I64xth hint within @mac2  --> \n", ++aesl_llvm_cbe_49_count);
  llvm_cbe_tmp__16 = (unsigned long long )((signed long long )(signed int )(llvm_cbe_d & (1U << 17U )  ? llvm_cbe_d | 4294705152U : llvm_cbe_d & 262143U));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__16);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = mul nsw i36 %%2, %%1, !dbg !7 for 0x%I64xth hint within @mac2  --> \n", ++aesl_llvm_cbe_50_count);
  llvm_cbe_tmp__17 = (unsigned long long )((unsigned long long )(llvm_cbe_tmp__16&68719476735ull)) * ((unsigned long long )(llvm_cbe_tmp__15&68719476735ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__17&68719476735ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = sext i36 %%3 to i38, !dbg !8 for 0x%I64xth hint within @mac2  --> \n", ++aesl_llvm_cbe_53_count);
  llvm_cbe_tmp__18 = (unsigned long long )((signed long long )(signed long long )(llvm_cbe_tmp__17 & (1ULL << 35ULL )  ? llvm_cbe_tmp__17 | 18446744004990074880ULL : llvm_cbe_tmp__17 & 68719476735ULL));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__18);
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = add nsw i38 %%4, %%s, !dbg !8 for 0x%I64xth hint within @mac2  --> \n", ++aesl_llvm_cbe_55_count);
  llvm_cbe_tmp__19 = (unsigned long long )((unsigned long long )(llvm_cbe_tmp__18&274877906943ull)) + ((unsigned long long )(llvm_cbe_s&274877906943ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__19&274877906943ull)));
  if (AESL_DEBUG_TRACE)
      printf("\nEND @mac2}\n");
  return llvm_cbe_tmp__19;
}


signed long long mac(signed int llvm_cbe_c, signed int llvm_cbe_d, signed long long llvm_cbe_s) {
  static  unsigned long long aesl_llvm_cbe_59_count = 0;
  static  unsigned long long aesl_llvm_cbe_60_count = 0;
  static  unsigned long long aesl_llvm_cbe_61_count = 0;
  static  unsigned long long aesl_llvm_cbe_62_count = 0;
  static  unsigned long long aesl_llvm_cbe_63_count = 0;
  unsigned long long llvm_cbe_tmp__20;
  static  unsigned long long aesl_llvm_cbe_64_count = 0;
  static  unsigned long long aesl_llvm_cbe_65_count = 0;
  unsigned long long llvm_cbe_tmp__21;
  static  unsigned long long aesl_llvm_cbe_66_count = 0;
  unsigned long long llvm_cbe_tmp__22;
  static  unsigned long long aesl_llvm_cbe_67_count = 0;
  static  unsigned long long aesl_llvm_cbe_68_count = 0;
  static  unsigned long long aesl_llvm_cbe_69_count = 0;
  unsigned long long llvm_cbe_tmp__23;
  static  unsigned long long aesl_llvm_cbe_70_count = 0;
  static  unsigned long long aesl_llvm_cbe_71_count = 0;
  unsigned long long llvm_cbe_tmp__24;
  static  unsigned long long aesl_llvm_cbe_72_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @mac\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = sext i18 %%c to i36, !dbg !7 for 0x%I64xth hint within @mac  --> \n", ++aesl_llvm_cbe_63_count);
  llvm_cbe_tmp__20 = (unsigned long long )((signed long long )(signed int )(llvm_cbe_c & (1U << 17U )  ? llvm_cbe_c | 4294705152U : llvm_cbe_c & 262143U));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__20);
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = sext i18 %%d to i36, !dbg !7 for 0x%I64xth hint within @mac  --> \n", ++aesl_llvm_cbe_65_count);
  llvm_cbe_tmp__21 = (unsigned long long )((signed long long )(signed int )(llvm_cbe_d & (1U << 17U )  ? llvm_cbe_d | 4294705152U : llvm_cbe_d & 262143U));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__21);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = mul nsw i36 %%2, %%1, !dbg !7 for 0x%I64xth hint within @mac  --> \n", ++aesl_llvm_cbe_66_count);
  llvm_cbe_tmp__22 = (unsigned long long )((unsigned long long )(llvm_cbe_tmp__21&68719476735ull)) * ((unsigned long long )(llvm_cbe_tmp__20&68719476735ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__22&68719476735ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = sext i36 %%3 to i48, !dbg !8 for 0x%I64xth hint within @mac  --> \n", ++aesl_llvm_cbe_69_count);
  llvm_cbe_tmp__23 = (unsigned long long )((signed long long )(signed long long )(llvm_cbe_tmp__22 & (1ULL << 35ULL )  ? llvm_cbe_tmp__22 | 18446744004990074880ULL : llvm_cbe_tmp__22 & 68719476735ULL));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__23);
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = add nsw i48 %%4, %%s, !dbg !8 for 0x%I64xth hint within @mac  --> \n", ++aesl_llvm_cbe_71_count);
  llvm_cbe_tmp__24 = (unsigned long long )((unsigned long long )(llvm_cbe_tmp__23&281474976710655ull)) + ((unsigned long long )(llvm_cbe_s&281474976710655ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__24&281474976710655ull)));
  if (AESL_DEBUG_TRACE)
      printf("\nEND @mac}\n");
  return llvm_cbe_tmp__24;
}


signed long long symtap(signed int llvm_cbe_a, signed int llvm_cbe_b, signed int llvm_cbe_c) {
  static  unsigned long long aesl_llvm_cbe_73_count = 0;
  static  unsigned long long aesl_llvm_cbe_74_count = 0;
  static  unsigned long long aesl_llvm_cbe_75_count = 0;
  static  unsigned long long aesl_llvm_cbe_76_count = 0;
  static  unsigned long long aesl_llvm_cbe_77_count = 0;
  unsigned int llvm_cbe_tmp__25;
  static  unsigned long long aesl_llvm_cbe_78_count = 0;
  static  unsigned long long aesl_llvm_cbe_79_count = 0;
  unsigned int llvm_cbe_tmp__26;
  static  unsigned long long aesl_llvm_cbe_80_count = 0;
  unsigned int llvm_cbe_tmp__27;
  static  unsigned long long aesl_llvm_cbe_81_count = 0;
  static  unsigned long long aesl_llvm_cbe_82_count = 0;
  static  unsigned long long aesl_llvm_cbe_83_count = 0;
  static  unsigned long long aesl_llvm_cbe_84_count = 0;
  unsigned long long llvm_cbe_tmp__28;
  static  unsigned long long aesl_llvm_cbe_85_count = 0;
  static  unsigned long long aesl_llvm_cbe_86_count = 0;
  static  unsigned long long aesl_llvm_cbe_87_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @symtap\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = sext i18 %%a to i19, !dbg !7 for 0x%I64xth hint within @symtap  --> \n", ++aesl_llvm_cbe_77_count);
  llvm_cbe_tmp__25 = (unsigned int )((signed int )(signed int )(llvm_cbe_a & (1U << 17U )  ? llvm_cbe_a | 4294705152U : llvm_cbe_a & 262143U));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__25);
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = sext i18 %%b to i19, !dbg !7 for 0x%I64xth hint within @symtap  --> \n", ++aesl_llvm_cbe_79_count);
  llvm_cbe_tmp__26 = (unsigned int )((signed int )(signed int )(llvm_cbe_b & (1U << 17U )  ? llvm_cbe_b | 4294705152U : llvm_cbe_b & 262143U));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__26);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = add i19 %%2, %%1, !dbg !7 for 0x%I64xth hint within @symtap  --> \n", ++aesl_llvm_cbe_80_count);
  llvm_cbe_tmp__27 = (unsigned int )((unsigned int )(llvm_cbe_tmp__26&524287ull)) + ((unsigned int )(llvm_cbe_tmp__25&524287ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__27&524287ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = tail call i37 @mult(i18 signext %%c, i19 signext %%3), !dbg !8 for 0x%I64xth hint within @symtap  --> \n", ++aesl_llvm_cbe_84_count);
  llvm_cbe_tmp__28 = (unsigned long long ) /*tail*/ mult(llvm_cbe_c, llvm_cbe_tmp__27);
if (AESL_DEBUG_TRACE) {
printf("\nArgument c = 0x%X",llvm_cbe_c);
printf("\nArgument  = 0x%X",llvm_cbe_tmp__27);
printf("\nReturn  = 0x%I64X",llvm_cbe_tmp__28);
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @symtap}\n");
  return llvm_cbe_tmp__28;
}

