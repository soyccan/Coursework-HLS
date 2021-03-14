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
void imf1(signed int *llvm_cbe_y, signed int llvm_cbe_x);
signed long long mac1(signed int , signed int , signed long long );


/* Global Variable Definitions and Initialization */
static bool aesl_internal_imf1_OC_cnt;
static signed int aesl_internal_imf1_OC_c[24] = { ((unsigned int )-224), ((unsigned int )1139), ((unsigned int )-3642), ((unsigned int )9343), ((unsigned int )-22689), ((unsigned int )81597), ((unsigned int )81597), ((unsigned int )-22689), ((unsigned int )9343), ((unsigned int )-3642), ((unsigned int )1139), ((unsigned int )-224), ((unsigned int )0), ((unsigned int )0), ((unsigned int )0), ((unsigned int )0), ((unsigned int )0), ((unsigned int )131071), ((unsigned int )0), ((unsigned int )0), ((unsigned int )0), ((unsigned int )0), ((unsigned int )0), ((unsigned int )0) };
static unsigned int aesl_internal_imf1_OC_in;
static bool aesl_internal_imf1_OC_init = 1;
static signed long long aesl_internal_imf1_OC_shift_reg_p[25][2];
static bool aesl_internal_imf1_OC_ch;
static unsigned char aesl_internal_imf1_OC_i;


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

void imf1(signed int *llvm_cbe_y, signed int llvm_cbe_x) {
  static  unsigned long long aesl_llvm_cbe_1_count = 0;
  static  unsigned long long aesl_llvm_cbe_2_count = 0;
  static  unsigned long long aesl_llvm_cbe_3_count = 0;
  static  unsigned long long aesl_llvm_cbe_4_count = 0;
  static  unsigned long long aesl_llvm_cbe_5_count = 0;
  unsigned char llvm_cbe_tmp__1;
  static  unsigned long long aesl_llvm_cbe_6_count = 0;
  static  unsigned long long aesl_llvm_cbe_7_count = 0;
  static  unsigned long long aesl_llvm_cbe_8_count = 0;
  static  unsigned long long aesl_llvm_cbe_9_count = 0;
  static  unsigned long long aesl_llvm_cbe_10_count = 0;
  unsigned char llvm_cbe_tmp__2;
  static  unsigned long long aesl_llvm_cbe_11_count = 0;
  static  unsigned long long aesl_llvm_cbe_12_count = 0;
  static  unsigned long long aesl_llvm_cbe_13_count = 0;
  static  unsigned long long aesl_llvm_cbe_14_count = 0;
  unsigned long long llvm_cbe_tmp__3;
  static  unsigned long long aesl_llvm_cbe_15_count = 0;
  signed int *llvm_cbe_tmp__4;
  static  unsigned long long aesl_llvm_cbe_16_count = 0;
  unsigned int llvm_cbe_tmp__5;
  static  unsigned long long aesl_llvm_cbe_17_count = 0;
  unsigned int llvm_cbe_tmp__6;
  static  unsigned long long aesl_llvm_cbe_18_count = 0;
  bool llvm_cbe_tmp__7;
  static  unsigned long long aesl_llvm_cbe_19_count = 0;
  static  unsigned long long aesl_llvm_cbe_20_count = 0;
  static  unsigned long long aesl_llvm_cbe_21_count = 0;
  bool llvm_cbe_tmp__8;
  static  unsigned long long aesl_llvm_cbe_22_count = 0;
  unsigned long long llvm_cbe_tmp__9;
  static  unsigned long long aesl_llvm_cbe_23_count = 0;
  unsigned long long llvm_cbe_tmp__10;
  static  unsigned long long aesl_llvm_cbe_24_count = 0;
  signed long long *llvm_cbe_tmp__11;
  static  unsigned long long aesl_llvm_cbe_25_count = 0;
  unsigned long long llvm_cbe_tmp__12;
  static  unsigned long long aesl_llvm_cbe_26_count = 0;
  static  unsigned long long aesl_llvm_cbe_27_count = 0;
  unsigned long long llvm_cbe_tmp__13;
  unsigned long long llvm_cbe_tmp__13__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_28_count = 0;
  unsigned long long llvm_cbe_tmp__14;
  static  unsigned long long aesl_llvm_cbe_29_count = 0;
  static  unsigned long long aesl_llvm_cbe_30_count = 0;
  static  unsigned long long aesl_llvm_cbe_31_count = 0;
  static  unsigned long long aesl_llvm_cbe_32_count = 0;
  bool llvm_cbe_tmp__15;
  static  unsigned long long aesl_llvm_cbe_33_count = 0;
  unsigned long long llvm_cbe_tmp__16;
  static  unsigned long long aesl_llvm_cbe_34_count = 0;
  unsigned char llvm_cbe_tmp__17;
  static  unsigned long long aesl_llvm_cbe_35_count = 0;
  unsigned long long llvm_cbe_tmp__18;
  static  unsigned long long aesl_llvm_cbe_36_count = 0;
  signed long long *llvm_cbe_tmp__19;
  static  unsigned long long aesl_llvm_cbe_37_count = 0;
  static  unsigned long long aesl_llvm_cbe_38_count = 0;
  static  unsigned long long aesl_llvm_cbe_39_count = 0;
  static  unsigned long long aesl_llvm_cbe_40_count = 0;
  static  unsigned long long aesl_llvm_cbe_41_count = 0;
  static  unsigned long long aesl_llvm_cbe_42_count = 0;
  static  unsigned long long aesl_llvm_cbe_43_count = 0;
  bool llvm_cbe_tmp__20;
  static  unsigned long long aesl_llvm_cbe_44_count = 0;
  bool llvm_cbe_tmp__21;
  static  unsigned long long aesl_llvm_cbe_45_count = 0;
  static  unsigned long long aesl_llvm_cbe_46_count = 0;
  bool llvm_cbe_tmp__22;
  static  unsigned long long aesl_llvm_cbe_47_count = 0;
  static  unsigned long long aesl_llvm_cbe_48_count = 0;
  static  unsigned long long aesl_llvm_cbe_49_count = 0;
  static  unsigned long long aesl_llvm_cbe_50_count = 0;
  unsigned long long llvm_cbe_tmp__23;
  static  unsigned long long aesl_llvm_cbe_51_count = 0;
  unsigned int llvm_cbe_tmp__24;
  static  unsigned long long aesl_llvm_cbe_52_count = 0;
  static  unsigned long long aesl_llvm_cbe_53_count = 0;
  static  unsigned long long aesl_llvm_cbe_54_count = 0;
  unsigned char llvm_cbe_tmp__25;
  static  unsigned long long aesl_llvm_cbe_55_count = 0;
  static  unsigned long long aesl_llvm_cbe_56_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @imf1\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = load i5* @aesl_internal_imf1.i, align 1, !dbg !5 for 0x%I64xth hint within @imf1  --> \n", ++aesl_llvm_cbe_5_count);
  llvm_cbe_tmp__1 = (unsigned char )*(&aesl_internal_imf1_OC_i);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__1);
  if (((llvm_cbe_tmp__1&31U) == (((unsigned char )0)&31U))) {
    goto llvm_cbe_tmp__26;
  } else {
    goto llvm_cbe_tmp__27;
  }

llvm_cbe_tmp__26:
if (AESL_DEBUG_TRACE)
printf("\n  store i18 %%x, i18* @aesl_internal_imf1.in, align 4, !dbg !5 for 0x%I64xth hint within @imf1  --> \n", ++aesl_llvm_cbe_8_count);
  *(&aesl_internal_imf1_OC_in) = ((llvm_cbe_x) & 262143ull);
if (AESL_DEBUG_TRACE)
printf("\nx = 0x%X\n", llvm_cbe_x);
  goto llvm_cbe_tmp__27;

llvm_cbe_tmp__27:
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = add i5 %%1, 1, !dbg !6 for 0x%I64xth hint within @imf1  --> \n", ++aesl_llvm_cbe_10_count);
  llvm_cbe_tmp__2 = (unsigned char )((unsigned char )(llvm_cbe_tmp__1&31ull)) + ((unsigned char )(((unsigned char )1)&31ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned char )(llvm_cbe_tmp__2&31ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = zext i5 %%1 to i64, !dbg !6 for 0x%I64xth hint within @imf1  --> \n", ++aesl_llvm_cbe_14_count);
  llvm_cbe_tmp__3 = (unsigned long long )((unsigned long long )(unsigned char )llvm_cbe_tmp__1&31U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__3);
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = getelementptr inbounds [24 x i18]* @aesl_internal_imf1.c, i64 0, i64 %%6, !dbg !6 for 0x%I64xth hint within @imf1  --> \n", ++aesl_llvm_cbe_15_count);
  llvm_cbe_tmp__4 = (signed int *)(&aesl_internal_imf1_OC_c[(((signed long long )llvm_cbe_tmp__3))
#ifdef AESL_BC_SIM
 % 24
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__3));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__3) < 24)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_imf1.c' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = load i18* %%7, align 4, !dbg !6 for 0x%I64xth hint within @imf1  --> \n", ++aesl_llvm_cbe_16_count);
  llvm_cbe_tmp__5 = (unsigned int )*llvm_cbe_tmp__4;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__5);
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = load i18* @aesl_internal_imf1.in, align 4, !dbg !6 for 0x%I64xth hint within @imf1  --> \n", ++aesl_llvm_cbe_17_count);
  llvm_cbe_tmp__6 = (unsigned int )*(&aesl_internal_imf1_OC_in);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__6);
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = load i1* @aesl_internal_imf1.init, align 1, !dbg !6 for 0x%I64xth hint within @imf1  --> \n", ++aesl_llvm_cbe_18_count);
  llvm_cbe_tmp__7 = (bool )((*(&aesl_internal_imf1_OC_init))&1);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__7);
  if (llvm_cbe_tmp__7) {
    llvm_cbe_tmp__13__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
    goto llvm_cbe_tmp__28;
  } else {
    goto llvm_cbe_switch_2e_early_2e_test;
  }

llvm_cbe_switch_2e_early_2e_test:
  switch (((unsigned char )(llvm_cbe_tmp__1&31ull))) {
  default:
    goto llvm_cbe_tmp__29;
;
  case ((unsigned char )(((unsigned char )-9)&31ull)):
    llvm_cbe_tmp__13__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
    goto llvm_cbe_tmp__28;
  case ((unsigned char )(((unsigned char )11)&31ull)):
    llvm_cbe_tmp__13__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
    goto llvm_cbe_tmp__28;
  }
llvm_cbe_tmp__29:
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = load i1* @aesl_internal_imf1.ch, align 1, !dbg !6 for 0x%I64xth hint within @imf1  --> \n", ++aesl_llvm_cbe_21_count);
  llvm_cbe_tmp__8 = (bool )((*(&aesl_internal_imf1_OC_ch))&1);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__8);
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = zext i1 %%12 to i64, !dbg !6 for 0x%I64xth hint within @imf1  --> \n", ++aesl_llvm_cbe_22_count);
  llvm_cbe_tmp__9 = (unsigned long long )((unsigned long long )(bool )llvm_cbe_tmp__8&1U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__9);
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = zext i5 %%5 to i64, !dbg !6 for 0x%I64xth hint within @imf1  --> \n", ++aesl_llvm_cbe_23_count);
  llvm_cbe_tmp__10 = (unsigned long long )((unsigned long long )(unsigned char )llvm_cbe_tmp__2&31U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__10);
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = getelementptr inbounds [25 x [2 x i38]]* @aesl_internal_imf1.shift_reg_p, i64 0, i64 %%14, i64 %%13, !dbg !6 for 0x%I64xth hint within @imf1  --> \n", ++aesl_llvm_cbe_24_count);
  llvm_cbe_tmp__11 = (signed long long *)(&aesl_internal_imf1_OC_shift_reg_p[(((signed long long )llvm_cbe_tmp__10))
#ifdef AESL_BC_SIM
 % 25
#endif
][(((signed long long )llvm_cbe_tmp__9))
#ifdef AESL_BC_SIM
 % 2
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__10));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__9));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__10) < 25)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_imf1.shift_reg_p' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__9) < 2)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_imf1.shift_reg_p' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = load i38* %%15, align 8, !dbg !6 for 0x%I64xth hint within @imf1  --> \n", ++aesl_llvm_cbe_25_count);
  llvm_cbe_tmp__12 = (unsigned long long )*llvm_cbe_tmp__11;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__12);
  llvm_cbe_tmp__13__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__12;   /* for PHI node */
  goto llvm_cbe_tmp__28;

llvm_cbe_tmp__28:
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = phi i38 [ %%16, %%11 ], [ 0, %%switch.early.test ], [ 0, %%4 ], [ 0, %%switch.early.test ], !dbg !6 for 0x%I64xth hint within @imf1  --> \n", ++aesl_llvm_cbe_27_count);
  llvm_cbe_tmp__13 = (unsigned long long )llvm_cbe_tmp__13__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",llvm_cbe_tmp__13);
printf("\n = 0x%I64X",llvm_cbe_tmp__12);
printf("\n = 0x%I64X",0ull);
printf("\n = 0x%I64X",0ull);
printf("\n = 0x%I64X",0ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = tail call i38 @mac1(i18 signext %%8, i18 signext %%9, i38 %%18) nounwind, !dbg !6 for 0x%I64xth hint within @imf1  --> \n", ++aesl_llvm_cbe_28_count);
  llvm_cbe_tmp__14 = (unsigned long long ) /*tail*/ mac1(llvm_cbe_tmp__5, llvm_cbe_tmp__6, llvm_cbe_tmp__13);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__5);
printf("\nArgument  = 0x%X",llvm_cbe_tmp__6);
printf("\nArgument  = 0x%I64X",llvm_cbe_tmp__13);
printf("\nReturn  = 0x%I64X",llvm_cbe_tmp__14);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = load i1* @aesl_internal_imf1.ch, align 1, !dbg !6 for 0x%I64xth hint within @imf1  --> \n", ++aesl_llvm_cbe_32_count);
  llvm_cbe_tmp__15 = (bool )((*(&aesl_internal_imf1_OC_ch))&1);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__15);
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = zext i1 %%20 to i64, !dbg !6 for 0x%I64xth hint within @imf1  --> \n", ++aesl_llvm_cbe_33_count);
  llvm_cbe_tmp__16 = (unsigned long long )((unsigned long long )(bool )llvm_cbe_tmp__15&1U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__16);
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = load i5* @aesl_internal_imf1.i, align 1, !dbg !6 for 0x%I64xth hint within @imf1  --> \n", ++aesl_llvm_cbe_34_count);
  llvm_cbe_tmp__17 = (unsigned char )*(&aesl_internal_imf1_OC_i);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__17);
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = zext i5 %%22 to i64, !dbg !6 for 0x%I64xth hint within @imf1  --> \n", ++aesl_llvm_cbe_35_count);
  llvm_cbe_tmp__18 = (unsigned long long )((unsigned long long )(unsigned char )llvm_cbe_tmp__17&31U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__18);
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = getelementptr inbounds [25 x [2 x i38]]* @aesl_internal_imf1.shift_reg_p, i64 0, i64 %%23, i64 %%21, !dbg !6 for 0x%I64xth hint within @imf1  --> \n", ++aesl_llvm_cbe_36_count);
  llvm_cbe_tmp__19 = (signed long long *)(&aesl_internal_imf1_OC_shift_reg_p[(((signed long long )llvm_cbe_tmp__18))
#ifdef AESL_BC_SIM
 % 25
#endif
][(((signed long long )llvm_cbe_tmp__16))
#ifdef AESL_BC_SIM
 % 2
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__18));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__16));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__18) < 25 && "Write access out of array 'aesl_internal_imf1.shift_reg_p' bound?");
  assert(((signed long long )llvm_cbe_tmp__16) < 2 && "Write access out of array 'aesl_internal_imf1.shift_reg_p' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i38 %%19, i38* %%24, align 8, !dbg !6 for 0x%I64xth hint within @imf1  --> \n", ++aesl_llvm_cbe_37_count);
  *llvm_cbe_tmp__19 = ((llvm_cbe_tmp__14) & 274877906943ull);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__14);
  if (((llvm_cbe_tmp__17&31U) == (((unsigned char )-9)&31U))) {
    goto llvm_cbe_tmp__30;
  } else {
    goto llvm_cbe_tmp__31;
  }

llvm_cbe_tmp__30:
  if (llvm_cbe_tmp__15) {
    goto llvm_cbe_tmp__32;
  } else {
    goto llvm_cbe_tmp__33;
  }

llvm_cbe_tmp__32:
if (AESL_DEBUG_TRACE)
printf("\n  store i1 false, i1* @aesl_internal_imf1.init, align 1, !dbg !7 for 0x%I64xth hint within @imf1  --> \n", ++aesl_llvm_cbe_41_count);
  *(&aesl_internal_imf1_OC_init) = ((0) & 1ull);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 0);
  goto llvm_cbe_tmp__33;

llvm_cbe_tmp__33:
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = load i1* @aesl_internal_imf1.cnt, align 1, !dbg !7 for 0x%I64xth hint within @imf1  --> \n", ++aesl_llvm_cbe_43_count);
  llvm_cbe_tmp__20 = (bool )((*(&aesl_internal_imf1_OC_cnt))&1);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__20);
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = xor i1 %%20, %%29, !dbg !7 for 0x%I64xth hint within @imf1  --> \n", ++aesl_llvm_cbe_44_count);
  llvm_cbe_tmp__21 = (bool )((llvm_cbe_tmp__15 ^ llvm_cbe_tmp__20)&1);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__21);
if (AESL_DEBUG_TRACE)
printf("\n  store i1 %%30, i1* @aesl_internal_imf1.ch, align 1, !dbg !7 for 0x%I64xth hint within @imf1  --> \n", ++aesl_llvm_cbe_45_count);
  *(&aesl_internal_imf1_OC_ch) = ((llvm_cbe_tmp__21) & 1ull);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__21);
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = xor i1 %%29, true, !dbg !7 for 0x%I64xth hint within @imf1  --> \n", ++aesl_llvm_cbe_46_count);
  llvm_cbe_tmp__22 = (bool )((llvm_cbe_tmp__20 ^ 1)&1);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__22);
if (AESL_DEBUG_TRACE)
printf("\n  store i1 %%31, i1* @aesl_internal_imf1.cnt, align 1, !dbg !7 for 0x%I64xth hint within @imf1  --> \n", ++aesl_llvm_cbe_47_count);
  *(&aesl_internal_imf1_OC_cnt) = ((llvm_cbe_tmp__22) & 1ull);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__22);
  goto llvm_cbe_tmp__31;

llvm_cbe_tmp__31:
  switch (((unsigned char )(llvm_cbe_tmp__17&31ull))) {
  default:
    goto llvm_cbe_tmp__34;
;
  case ((unsigned char )(((unsigned char )12)&31ull)):
    goto llvm_cbe_tmp__35;
    break;
  case ((unsigned char )(((unsigned char )0)&31ull)):
    goto llvm_cbe_tmp__35;
    break;
  }
llvm_cbe_tmp__35:
if (AESL_DEBUG_TRACE)
printf("\n  %%34 = lshr i38 %%19, 17, !dbg !5 for 0x%I64xth hint within @imf1  --> \n", ++aesl_llvm_cbe_50_count);
  llvm_cbe_tmp__23 = (unsigned long long )((unsigned long long )(((unsigned long long )(llvm_cbe_tmp__14&274877906943ull)) >> ((unsigned long long )(17ull&274877906943ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__23&274877906943ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = trunc i38 %%34 to i18, !dbg !5 for 0x%I64xth hint within @imf1  --> \n", ++aesl_llvm_cbe_51_count);
  llvm_cbe_tmp__24 = (unsigned int )((unsigned int )llvm_cbe_tmp__23&262143U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__24);
if (AESL_DEBUG_TRACE)
printf("\n  store i18 %%35, i18* %%y, align 4, !dbg !5 for 0x%I64xth hint within @imf1  --> \n", ++aesl_llvm_cbe_52_count);
  *llvm_cbe_y = ((llvm_cbe_tmp__24) & 262143ull);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__24);
  goto llvm_cbe_tmp__34;

llvm_cbe_tmp__34:
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = select i1 %%25, i5 0, i5 %%5, !dbg !6 for 0x%I64xth hint within @imf1  --> \n", ++aesl_llvm_cbe_54_count);
  llvm_cbe_tmp__25 = (unsigned char )((((llvm_cbe_tmp__17&31U) == (((unsigned char )-9)&31U))) ? ((unsigned char )((unsigned char )0)) : ((unsigned char )llvm_cbe_tmp__2));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__25);
if (AESL_DEBUG_TRACE)
printf("\n  store i5 %%37, i5* @aesl_internal_imf1.i, align 1, !dbg !6 for 0x%I64xth hint within @imf1  --> \n", ++aesl_llvm_cbe_55_count);
  *(&aesl_internal_imf1_OC_i) = ((llvm_cbe_tmp__25) & 31ull);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__25);
  if (AESL_DEBUG_TRACE)
      printf("\nEND @imf1}\n");
  return;
}

