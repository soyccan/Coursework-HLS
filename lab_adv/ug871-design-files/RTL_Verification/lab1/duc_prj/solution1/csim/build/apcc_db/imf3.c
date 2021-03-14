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
void imf3(signed int *llvm_cbe_y, signed int llvm_cbe_x);
signed long long mac(signed int , signed int , signed long long );


/* Global Variable Definitions and Initialization */
static signed long long aesl_internal_imf3_OC_shift_reg_p1[6][2];
static signed int aesl_internal_imf3_OC_c[6][2] = { { ((unsigned int )1651), ((unsigned int )0) }, { ((unsigned int )-13134), ((unsigned int )0) }, { ((unsigned int )77019), ((unsigned int )0) }, { ((unsigned int )77019), ((unsigned int )131071) }, { ((unsigned int )-13134), ((unsigned int )0) }, { ((unsigned int )1651), ((unsigned int )0) } };
static signed long long aesl_internal_imf3_OC_shift_reg_p0[6][2];
static unsigned int aesl_internal_imf3_OC_in;
static bool aesl_internal_imf3_OC_init = 1;
static unsigned char aesl_internal_imf3_OC_i;
static unsigned char aesl_internal_imf3_OC_j;


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

static  char llvm_part_select_i6( char llvm_cbe_Val, signed int llvm_cbe_Lo, signed int llvm_cbe_High) __ATTRIBUTE_WEAK__;

void imf3(signed int *llvm_cbe_y, signed int llvm_cbe_x) {
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
  static  unsigned long long aesl_llvm_cbe_15_count = 0;
  static  unsigned long long aesl_llvm_cbe_16_count = 0;
  unsigned char llvm_cbe_tmp__3;
  static  unsigned long long aesl_llvm_cbe_17_count = 0;
  static  unsigned long long aesl_llvm_cbe_18_count = 0;
  static  unsigned long long aesl_llvm_cbe_19_count = 0;
  static  unsigned long long aesl_llvm_cbe_20_count = 0;
  static  unsigned long long aesl_llvm_cbe_21_count = 0;
  unsigned char llvm_cbe_tmp__4;
  static  unsigned long long aesl_llvm_cbe_22_count = 0;
  static  unsigned long long aesl_llvm_cbe_23_count = 0;
  static  unsigned long long aesl_llvm_cbe_24_count = 0;
  static  unsigned long long aesl_llvm_cbe_25_count = 0;
  static  unsigned long long aesl_llvm_cbe_26_count = 0;
  static  unsigned long long aesl_llvm_cbe_27_count = 0;
  static  unsigned long long aesl_llvm_cbe_28_count = 0;
  static  unsigned long long aesl_llvm_cbe_29_count = 0;
  static  unsigned long long aesl_llvm_cbe_30_count = 0;
  unsigned long long llvm_cbe_tmp__5;
  static  unsigned long long aesl_llvm_cbe_31_count = 0;
  signed int *llvm_cbe_tmp__6;
  static  unsigned long long aesl_llvm_cbe_32_count = 0;
  unsigned int llvm_cbe_tmp__7;
  static  unsigned long long aesl_llvm_cbe_33_count = 0;
  unsigned int llvm_cbe_tmp__8;
  static  unsigned long long aesl_llvm_cbe_34_count = 0;
  bool llvm_cbe_tmp__9;
  static  unsigned long long aesl_llvm_cbe_35_count = 0;
  static  unsigned long long aesl_llvm_cbe_or_2e_cond_count = 0;
  bool llvm_cbe_or_2e_cond;
  static  unsigned long long aesl_llvm_cbe_36_count = 0;
  static  unsigned long long aesl_llvm_cbe_37_count = 0;
  unsigned long long llvm_cbe_tmp__10;
  static  unsigned long long aesl_llvm_cbe_38_count = 0;
  unsigned long long llvm_cbe_tmp__11;
  static  unsigned long long aesl_llvm_cbe_39_count = 0;
  signed long long *llvm_cbe_tmp__12;
  static  unsigned long long aesl_llvm_cbe_40_count = 0;
  unsigned long long llvm_cbe_tmp__13;
  static  unsigned long long aesl_llvm_cbe_41_count = 0;
  static  unsigned long long aesl_llvm_cbe_42_count = 0;
  unsigned long long llvm_cbe_tmp__14;
  unsigned long long llvm_cbe_tmp__14__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_43_count = 0;
  unsigned long long llvm_cbe_tmp__15;
  static  unsigned long long aesl_llvm_cbe_44_count = 0;
  unsigned long long llvm_cbe_tmp__16;
  static  unsigned long long aesl_llvm_cbe_45_count = 0;
  unsigned long long llvm_cbe_tmp__17;
  static  unsigned long long aesl_llvm_cbe_46_count = 0;
  static  unsigned long long aesl_llvm_cbe_47_count = 0;
  static  unsigned long long aesl_llvm_cbe_48_count = 0;
  static  unsigned long long aesl_llvm_cbe_49_count = 0;
  unsigned char llvm_cbe_tmp__18;
  static  unsigned long long aesl_llvm_cbe_50_count = 0;
  unsigned long long llvm_cbe_tmp__19;
  static  unsigned long long aesl_llvm_cbe_51_count = 0;
  signed int *llvm_cbe_tmp__20;
  static  unsigned long long aesl_llvm_cbe_52_count = 0;
  unsigned int llvm_cbe_tmp__21;
  static  unsigned long long aesl_llvm_cbe_53_count = 0;
  unsigned int llvm_cbe_tmp__22;
  static  unsigned long long aesl_llvm_cbe_54_count = 0;
  bool llvm_cbe_tmp__23;
  static  unsigned long long aesl_llvm_cbe_55_count = 0;
  static  unsigned long long aesl_llvm_cbe_or_2e_cond3_count = 0;
  bool llvm_cbe_or_2e_cond3;
  static  unsigned long long aesl_llvm_cbe_56_count = 0;
  static  unsigned long long aesl_llvm_cbe_57_count = 0;
  unsigned long long llvm_cbe_tmp__24;
  static  unsigned long long aesl_llvm_cbe_58_count = 0;
  unsigned long long llvm_cbe_tmp__25;
  static  unsigned long long aesl_llvm_cbe_59_count = 0;
  signed long long *llvm_cbe_tmp__26;
  static  unsigned long long aesl_llvm_cbe_60_count = 0;
  unsigned long long llvm_cbe_tmp__27;
  static  unsigned long long aesl_llvm_cbe_61_count = 0;
  static  unsigned long long aesl_llvm_cbe_62_count = 0;
  unsigned long long llvm_cbe_tmp__28;
  unsigned long long llvm_cbe_tmp__28__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_63_count = 0;
  unsigned long long llvm_cbe_tmp__29;
  static  unsigned long long aesl_llvm_cbe_64_count = 0;
  unsigned long long llvm_cbe_tmp__30;
  static  unsigned long long aesl_llvm_cbe_65_count = 0;
  unsigned long long llvm_cbe_tmp__31;
  static  unsigned long long aesl_llvm_cbe_66_count = 0;
  static  unsigned long long aesl_llvm_cbe_67_count = 0;
  static  unsigned long long aesl_llvm_cbe_68_count = 0;
  static  unsigned long long aesl_llvm_cbe_69_count = 0;
  unsigned long long llvm_cbe_tmp__32;
  static  unsigned long long aesl_llvm_cbe_70_count = 0;
  unsigned char llvm_cbe_tmp__33;
  static  unsigned long long aesl_llvm_cbe_71_count = 0;
  unsigned long long llvm_cbe_tmp__34;
  static  unsigned long long aesl_llvm_cbe_72_count = 0;
  signed long long *llvm_cbe_tmp__35;
  static  unsigned long long aesl_llvm_cbe_73_count = 0;
  static  unsigned long long aesl_llvm_cbe_74_count = 0;
  signed long long *llvm_cbe_tmp__36;
  static  unsigned long long aesl_llvm_cbe_75_count = 0;
  static  unsigned long long aesl_llvm_cbe_76_count = 0;
  static  unsigned long long aesl_llvm_cbe__2e_in_count = 0;
  unsigned long long llvm_cbe__2e_in;
  static  unsigned long long aesl_llvm_cbe_77_count = 0;
  unsigned long long llvm_cbe_tmp__37;
  static  unsigned long long aesl_llvm_cbe_78_count = 0;
  unsigned int llvm_cbe_tmp__38;
  static  unsigned long long aesl_llvm_cbe_79_count = 0;
  static  unsigned long long aesl_llvm_cbe_80_count = 0;
  static  unsigned long long aesl_llvm_cbe_81_count = 0;
  unsigned char llvm_cbe_tmp__39;
  static  unsigned long long aesl_llvm_cbe_82_count = 0;
  static  unsigned long long aesl_llvm_cbe_or_2e_cond5_count = 0;
  bool llvm_cbe_or_2e_cond5;
  static  unsigned long long aesl_llvm_cbe_83_count = 0;
  static  unsigned long long aesl_llvm_cbe_84_count = 0;
  static  unsigned long long aesl_llvm_cbe_85_count = 0;
  static  unsigned long long aesl_llvm_cbe_86_count = 0;
  static  unsigned long long aesl_llvm_cbe_87_count = 0;
  unsigned char llvm_cbe_tmp__40;
  static  unsigned long long aesl_llvm_cbe__2e__count = 0;
  unsigned char llvm_cbe__2e_;
  static  unsigned long long aesl_llvm_cbe_88_count = 0;
  static  unsigned long long aesl_llvm_cbe_89_count = 0;
  static  unsigned long long aesl_llvm_cbe_90_count = 0;
  unsigned char llvm_cbe_tmp__41;
  static  unsigned long long aesl_llvm_cbe_91_count = 0;
  static  unsigned long long aesl_llvm_cbe_92_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @imf3\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = load i6* @aesl_internal_imf3.i, align 1, !dbg !5 for 0x%I64xth hint within @imf3  --> \n", ++aesl_llvm_cbe_5_count);
  llvm_cbe_tmp__1 = (unsigned char )*(&aesl_internal_imf3_OC_i);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__1);
  if (((llvm_cbe_tmp__1&63U) == (((unsigned char )0)&63U))) {
    goto llvm_cbe_tmp__42;
  } else {
    goto llvm_cbe_tmp__43;
  }

llvm_cbe_tmp__42:
if (AESL_DEBUG_TRACE)
printf("\n  store i18 %%x, i18* @aesl_internal_imf3.in, align 4, !dbg !5 for 0x%I64xth hint within @imf3  --> \n", ++aesl_llvm_cbe_8_count);
  *(&aesl_internal_imf3_OC_in) = ((llvm_cbe_x) & 262143ull);
if (AESL_DEBUG_TRACE)
printf("\nx = 0x%X\n", llvm_cbe_x);
  goto llvm_cbe_tmp__43;

llvm_cbe_tmp__43:
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = add i6 %%1, 1, !dbg !5 for 0x%I64xth hint within @imf3  --> \n", ++aesl_llvm_cbe_10_count);
  llvm_cbe_tmp__2 = (unsigned char )((unsigned char )(llvm_cbe_tmp__1&63ull)) + ((unsigned char )(((unsigned char )1)&63ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned char )(llvm_cbe_tmp__2&63ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = load i6* @aesl_internal_imf3.j, align 1, !dbg !6 for 0x%I64xth hint within @imf3  --> \n", ++aesl_llvm_cbe_16_count);
  llvm_cbe_tmp__3 = (unsigned char )*(&aesl_internal_imf3_OC_j);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__3);
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = call i6 @llvm_part_select_i6(i6 %%6, i32 3, i32 3 for 0x%I64xth hint within @imf3  --> \n", ++aesl_llvm_cbe_21_count);
  llvm_cbe_tmp__4 = (unsigned char )llvm_part_select_i6(llvm_cbe_tmp__3, 3u, 3u);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__3);
printf("\nArgument  = 0x%X",3u);
printf("\nArgument  = 0x%X",3u);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__4);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = zext i6 %%1 to i64, !dbg !6 for 0x%I64xth hint within @imf3  --> \n", ++aesl_llvm_cbe_30_count);
  llvm_cbe_tmp__5 = (unsigned long long )((unsigned long long )(unsigned char )llvm_cbe_tmp__1&63U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__5);
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = getelementptr inbounds [6 x [2 x i18]]* @aesl_internal_imf3.c, i64 0, i64 %%9, i64 0, !dbg !6 for 0x%I64xth hint within @imf3  --> \n", ++aesl_llvm_cbe_31_count);
  llvm_cbe_tmp__6 = (signed int *)(&aesl_internal_imf3_OC_c[(((signed long long )llvm_cbe_tmp__5))
#ifdef AESL_BC_SIM
 % 6
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 2
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__5));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__5) < 6)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_imf3.c' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 2)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_imf3.c' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = load i18* %%10, align 8, !dbg !6 for 0x%I64xth hint within @imf3  --> \n", ++aesl_llvm_cbe_32_count);
  llvm_cbe_tmp__7 = (unsigned int )*llvm_cbe_tmp__6;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__7);
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = load i18* @aesl_internal_imf3.in, align 4, !dbg !6 for 0x%I64xth hint within @imf3  --> \n", ++aesl_llvm_cbe_33_count);
  llvm_cbe_tmp__8 = (unsigned int )*(&aesl_internal_imf3_OC_in);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__8);
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = load i1* @aesl_internal_imf3.init, align 1, !dbg !6 for 0x%I64xth hint within @imf3  --> \n", ++aesl_llvm_cbe_34_count);
  llvm_cbe_tmp__9 = (bool )((*(&aesl_internal_imf3_OC_init))&1);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__9);
if (AESL_DEBUG_TRACE)
printf("\n  %%or.cond = or i1 %%13, %%14, !dbg !6 for 0x%I64xth hint within @imf3  --> \n", ++aesl_llvm_cbe_or_2e_cond_count);
  llvm_cbe_or_2e_cond = (bool )((llvm_cbe_tmp__9 | ((llvm_cbe_tmp__1&63U) == (((unsigned char )5)&63U)))&1);
if (AESL_DEBUG_TRACE)
printf("\nor.cond = 0x%X\n", llvm_cbe_or_2e_cond);
  if (llvm_cbe_or_2e_cond) {
    llvm_cbe_tmp__14__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
    goto llvm_cbe_tmp__44;
  } else {
    goto llvm_cbe_tmp__45;
  }

llvm_cbe_tmp__45:
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = zext i1 %%8 to i64, !dbg !6 for 0x%I64xth hint within @imf3  --> \n", ++aesl_llvm_cbe_37_count);
  llvm_cbe_tmp__10 = (unsigned long long )((unsigned long long )(bool )((llvm_cbe_tmp__4&63U) != (((unsigned char )0)&63U))&1U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__10);
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = zext i6 %%5 to i64, !dbg !6 for 0x%I64xth hint within @imf3  --> \n", ++aesl_llvm_cbe_38_count);
  llvm_cbe_tmp__11 = (unsigned long long )((unsigned long long )(unsigned char )llvm_cbe_tmp__2&63U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__11);
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = getelementptr inbounds [6 x [2 x i38]]* @aesl_internal_imf3.shift_reg_p0, i64 0, i64 %%17, i64 %%16, !dbg !6 for 0x%I64xth hint within @imf3  --> \n", ++aesl_llvm_cbe_39_count);
  llvm_cbe_tmp__12 = (signed long long *)(&aesl_internal_imf3_OC_shift_reg_p0[(((signed long long )llvm_cbe_tmp__11))
#ifdef AESL_BC_SIM
 % 6
#endif
][(((signed long long )llvm_cbe_tmp__10))
#ifdef AESL_BC_SIM
 % 2
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__11));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__10));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__11) < 6)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_imf3.shift_reg_p0' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__10) < 2)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_imf3.shift_reg_p0' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = load i38* %%18, align 8, !dbg !6 for 0x%I64xth hint within @imf3  --> \n", ++aesl_llvm_cbe_40_count);
  llvm_cbe_tmp__13 = (unsigned long long )*llvm_cbe_tmp__12;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__13);
  llvm_cbe_tmp__14__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__13;   /* for PHI node */
  goto llvm_cbe_tmp__44;

llvm_cbe_tmp__44:
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = phi i38 [ %%19, %%15 ], [ 0, %%4 ], !dbg !6 for 0x%I64xth hint within @imf3  --> \n", ++aesl_llvm_cbe_42_count);
  llvm_cbe_tmp__14 = (unsigned long long )llvm_cbe_tmp__14__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",llvm_cbe_tmp__14);
printf("\n = 0x%I64X",llvm_cbe_tmp__13);
printf("\n = 0x%I64X",0ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = sext i38 %%21 to i48, !dbg !6 for 0x%I64xth hint within @imf3  --> \n", ++aesl_llvm_cbe_43_count);
  llvm_cbe_tmp__15 = (unsigned long long )((signed long long )(signed long long )(llvm_cbe_tmp__14 & (1ULL << 37ULL )  ? llvm_cbe_tmp__14 | 18446743798831644672ULL : llvm_cbe_tmp__14 & 274877906943ULL));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__15);
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = tail call i48 @mac(i18 signext %%11, i18 signext %%12, i48 %%22) nounwind, !dbg !6 for 0x%I64xth hint within @imf3  --> \n", ++aesl_llvm_cbe_44_count);
  llvm_cbe_tmp__16 = (unsigned long long ) /*tail*/ mac(llvm_cbe_tmp__7, llvm_cbe_tmp__8, llvm_cbe_tmp__15);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__7);
printf("\nArgument  = 0x%X",llvm_cbe_tmp__8);
printf("\nArgument  = 0x%I64X",llvm_cbe_tmp__15);
printf("\nReturn  = 0x%I64X",llvm_cbe_tmp__16);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = trunc i48 %%23 to i38, !dbg !6 for 0x%I64xth hint within @imf3  --> \n", ++aesl_llvm_cbe_45_count);
  llvm_cbe_tmp__17 = (unsigned long long )((unsigned long long )llvm_cbe_tmp__16&274877906943ULL);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__17);
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = load i6* @aesl_internal_imf3.i, align 1, !dbg !6 for 0x%I64xth hint within @imf3  --> \n", ++aesl_llvm_cbe_49_count);
  llvm_cbe_tmp__18 = (unsigned char )*(&aesl_internal_imf3_OC_i);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__18);
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = zext i6 %%25 to i64, !dbg !6 for 0x%I64xth hint within @imf3  --> \n", ++aesl_llvm_cbe_50_count);
  llvm_cbe_tmp__19 = (unsigned long long )((unsigned long long )(unsigned char )llvm_cbe_tmp__18&63U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__19);
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = getelementptr inbounds [6 x [2 x i18]]* @aesl_internal_imf3.c, i64 0, i64 %%26, i64 1, !dbg !6 for 0x%I64xth hint within @imf3  --> \n", ++aesl_llvm_cbe_51_count);
  llvm_cbe_tmp__20 = (signed int *)(&aesl_internal_imf3_OC_c[(((signed long long )llvm_cbe_tmp__19))
#ifdef AESL_BC_SIM
 % 6
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 2
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__19));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__19) < 6)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_imf3.c' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 2)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_imf3.c' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = load i18* %%27, align 4, !dbg !6 for 0x%I64xth hint within @imf3  --> \n", ++aesl_llvm_cbe_52_count);
  llvm_cbe_tmp__21 = (unsigned int )*llvm_cbe_tmp__20;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__21);
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = load i18* @aesl_internal_imf3.in, align 4, !dbg !6 for 0x%I64xth hint within @imf3  --> \n", ++aesl_llvm_cbe_53_count);
  llvm_cbe_tmp__22 = (unsigned int )*(&aesl_internal_imf3_OC_in);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__22);
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = load i1* @aesl_internal_imf3.init, align 1, !dbg !6 for 0x%I64xth hint within @imf3  --> \n", ++aesl_llvm_cbe_54_count);
  llvm_cbe_tmp__23 = (bool )((*(&aesl_internal_imf3_OC_init))&1);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__23);
if (AESL_DEBUG_TRACE)
printf("\n  %%or.cond3 = or i1 %%30, %%31, !dbg !6 for 0x%I64xth hint within @imf3  --> \n", ++aesl_llvm_cbe_or_2e_cond3_count);
  llvm_cbe_or_2e_cond3 = (bool )((llvm_cbe_tmp__23 | ((llvm_cbe_tmp__18&63U) == (((unsigned char )5)&63U)))&1);
if (AESL_DEBUG_TRACE)
printf("\nor.cond3 = 0x%X\n", llvm_cbe_or_2e_cond3);
  if (llvm_cbe_or_2e_cond3) {
    llvm_cbe_tmp__28__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
    goto llvm_cbe_tmp__46;
  } else {
    goto llvm_cbe_tmp__47;
  }

llvm_cbe_tmp__47:
if (AESL_DEBUG_TRACE)
printf("\n  %%33 = zext i1 %%8 to i64, !dbg !6 for 0x%I64xth hint within @imf3  --> \n", ++aesl_llvm_cbe_57_count);
  llvm_cbe_tmp__24 = (unsigned long long )((unsigned long long )(bool )((llvm_cbe_tmp__4&63U) != (((unsigned char )0)&63U))&1U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__24);
if (AESL_DEBUG_TRACE)
printf("\n  %%34 = zext i6 %%5 to i64, !dbg !6 for 0x%I64xth hint within @imf3  --> \n", ++aesl_llvm_cbe_58_count);
  llvm_cbe_tmp__25 = (unsigned long long )((unsigned long long )(unsigned char )llvm_cbe_tmp__2&63U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__25);
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = getelementptr inbounds [6 x [2 x i38]]* @aesl_internal_imf3.shift_reg_p1, i64 0, i64 %%34, i64 %%33, !dbg !6 for 0x%I64xth hint within @imf3  --> \n", ++aesl_llvm_cbe_59_count);
  llvm_cbe_tmp__26 = (signed long long *)(&aesl_internal_imf3_OC_shift_reg_p1[(((signed long long )llvm_cbe_tmp__25))
#ifdef AESL_BC_SIM
 % 6
#endif
][(((signed long long )llvm_cbe_tmp__24))
#ifdef AESL_BC_SIM
 % 2
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__25));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__24));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__25) < 6)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_imf3.shift_reg_p1' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__24) < 2)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_imf3.shift_reg_p1' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = load i38* %%35, align 8, !dbg !6 for 0x%I64xth hint within @imf3  --> \n", ++aesl_llvm_cbe_60_count);
  llvm_cbe_tmp__27 = (unsigned long long )*llvm_cbe_tmp__26;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__27);
  llvm_cbe_tmp__28__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__27;   /* for PHI node */
  goto llvm_cbe_tmp__46;

llvm_cbe_tmp__46:
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = phi i38 [ %%36, %%32 ], [ 0, %%20 ], !dbg !6 for 0x%I64xth hint within @imf3  --> \n", ++aesl_llvm_cbe_62_count);
  llvm_cbe_tmp__28 = (unsigned long long )llvm_cbe_tmp__28__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",llvm_cbe_tmp__28);
printf("\n = 0x%I64X",llvm_cbe_tmp__27);
printf("\n = 0x%I64X",0ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%39 = sext i38 %%38 to i48, !dbg !6 for 0x%I64xth hint within @imf3  --> \n", ++aesl_llvm_cbe_63_count);
  llvm_cbe_tmp__29 = (unsigned long long )((signed long long )(signed long long )(llvm_cbe_tmp__28 & (1ULL << 37ULL )  ? llvm_cbe_tmp__28 | 18446743798831644672ULL : llvm_cbe_tmp__28 & 274877906943ULL));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__29);
if (AESL_DEBUG_TRACE)
printf("\n  %%40 = tail call i48 @mac(i18 signext %%28, i18 signext %%29, i48 %%39) nounwind, !dbg !6 for 0x%I64xth hint within @imf3  --> \n", ++aesl_llvm_cbe_64_count);
  llvm_cbe_tmp__30 = (unsigned long long ) /*tail*/ mac(llvm_cbe_tmp__21, llvm_cbe_tmp__22, llvm_cbe_tmp__29);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__21);
printf("\nArgument  = 0x%X",llvm_cbe_tmp__22);
printf("\nArgument  = 0x%I64X",llvm_cbe_tmp__29);
printf("\nReturn  = 0x%I64X",llvm_cbe_tmp__30);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%41 = trunc i48 %%40 to i38, !dbg !6 for 0x%I64xth hint within @imf3  --> \n", ++aesl_llvm_cbe_65_count);
  llvm_cbe_tmp__31 = (unsigned long long )((unsigned long long )llvm_cbe_tmp__30&274877906943ULL);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__31);
if (AESL_DEBUG_TRACE)
printf("\n  %%42 = zext i1 %%8 to i64, !dbg !7 for 0x%I64xth hint within @imf3  --> \n", ++aesl_llvm_cbe_69_count);
  llvm_cbe_tmp__32 = (unsigned long long )((unsigned long long )(bool )((llvm_cbe_tmp__4&63U) != (((unsigned char )0)&63U))&1U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__32);
if (AESL_DEBUG_TRACE)
printf("\n  %%43 = load i6* @aesl_internal_imf3.i, align 1, !dbg !7 for 0x%I64xth hint within @imf3  --> \n", ++aesl_llvm_cbe_70_count);
  llvm_cbe_tmp__33 = (unsigned char )*(&aesl_internal_imf3_OC_i);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__33);
if (AESL_DEBUG_TRACE)
printf("\n  %%44 = zext i6 %%43 to i64, !dbg !7 for 0x%I64xth hint within @imf3  --> \n", ++aesl_llvm_cbe_71_count);
  llvm_cbe_tmp__34 = (unsigned long long )((unsigned long long )(unsigned char )llvm_cbe_tmp__33&63U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__34);
if (AESL_DEBUG_TRACE)
printf("\n  %%45 = getelementptr inbounds [6 x [2 x i38]]* @aesl_internal_imf3.shift_reg_p0, i64 0, i64 %%44, i64 %%42, !dbg !7 for 0x%I64xth hint within @imf3  --> \n", ++aesl_llvm_cbe_72_count);
  llvm_cbe_tmp__35 = (signed long long *)(&aesl_internal_imf3_OC_shift_reg_p0[(((signed long long )llvm_cbe_tmp__34))
#ifdef AESL_BC_SIM
 % 6
#endif
][(((signed long long )llvm_cbe_tmp__32))
#ifdef AESL_BC_SIM
 % 2
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__34));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__32));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__34) < 6 && "Write access out of array 'aesl_internal_imf3.shift_reg_p0' bound?");
  assert(((signed long long )llvm_cbe_tmp__32) < 2 && "Write access out of array 'aesl_internal_imf3.shift_reg_p0' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i38 %%24, i38* %%45, align 8, !dbg !7 for 0x%I64xth hint within @imf3  --> \n", ++aesl_llvm_cbe_73_count);
  *llvm_cbe_tmp__35 = ((llvm_cbe_tmp__17) & 274877906943ull);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__17);
if (AESL_DEBUG_TRACE)
printf("\n  %%46 = getelementptr inbounds [6 x [2 x i38]]* @aesl_internal_imf3.shift_reg_p1, i64 0, i64 %%44, i64 %%42, !dbg !7 for 0x%I64xth hint within @imf3  --> \n", ++aesl_llvm_cbe_74_count);
  llvm_cbe_tmp__36 = (signed long long *)(&aesl_internal_imf3_OC_shift_reg_p1[(((signed long long )llvm_cbe_tmp__34))
#ifdef AESL_BC_SIM
 % 6
#endif
][(((signed long long )llvm_cbe_tmp__32))
#ifdef AESL_BC_SIM
 % 2
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__34));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__32));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__34) < 6 && "Write access out of array 'aesl_internal_imf3.shift_reg_p1' bound?");
  assert(((signed long long )llvm_cbe_tmp__32) < 2 && "Write access out of array 'aesl_internal_imf3.shift_reg_p1' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i38 %%41, i38* %%46, align 8, !dbg !7 for 0x%I64xth hint within @imf3  --> \n", ++aesl_llvm_cbe_75_count);
  *llvm_cbe_tmp__36 = ((llvm_cbe_tmp__31) & 274877906943ull);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__31);
if (AESL_DEBUG_TRACE)
printf("\n  %%.in = select i1 %%47, i38 %%24, i38 %%41, !dbg !5 for 0x%I64xth hint within @imf3  --> \n", ++aesl_llvm_cbe__2e_in_count);
  llvm_cbe__2e_in = (unsigned long long )((((llvm_cbe_tmp__33&63U) == (((unsigned char )0)&63U))) ? ((unsigned long long )llvm_cbe_tmp__17) : ((unsigned long long )llvm_cbe_tmp__31));
if (AESL_DEBUG_TRACE)
printf("\n.in = 0x%I64X\n", llvm_cbe__2e_in);
if (AESL_DEBUG_TRACE)
printf("\n  %%48 = lshr i38 %%.in, 17, !dbg !5 for 0x%I64xth hint within @imf3  --> \n", ++aesl_llvm_cbe_77_count);
  llvm_cbe_tmp__37 = (unsigned long long )((unsigned long long )(((unsigned long long )(llvm_cbe__2e_in&274877906943ull)) >> ((unsigned long long )(17ull&274877906943ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__37&274877906943ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%49 = trunc i38 %%48 to i18, !dbg !5 for 0x%I64xth hint within @imf3  --> \n", ++aesl_llvm_cbe_78_count);
  llvm_cbe_tmp__38 = (unsigned int )((unsigned int )llvm_cbe_tmp__37&262143U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__38);
if (AESL_DEBUG_TRACE)
printf("\n  store i18 %%49, i18* %%y, align 4, !dbg !5 for 0x%I64xth hint within @imf3  --> \n", ++aesl_llvm_cbe_79_count);
  *llvm_cbe_y = ((llvm_cbe_tmp__38) & 262143ull);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__38);
if (AESL_DEBUG_TRACE)
printf("\n  %%51 = load i6* @aesl_internal_imf3.j, align 1, !dbg !7 for 0x%I64xth hint within @imf3  --> \n", ++aesl_llvm_cbe_81_count);
  llvm_cbe_tmp__39 = (unsigned char )*(&aesl_internal_imf3_OC_j);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__39);
if (AESL_DEBUG_TRACE)
printf("\n  %%or.cond5 = and i1 %%50, %%52, !dbg !7 for 0x%I64xth hint within @imf3  --> \n", ++aesl_llvm_cbe_or_2e_cond5_count);
  llvm_cbe_or_2e_cond5 = (bool )((((llvm_cbe_tmp__33&63U) == (((unsigned char )5)&63U)) & ((llvm_cbe_tmp__39&63U) == (((unsigned char )15)&63U)))&1);
if (AESL_DEBUG_TRACE)
printf("\nor.cond5 = 0x%X\n", llvm_cbe_or_2e_cond5);
  if (llvm_cbe_or_2e_cond5) {
    goto llvm_cbe_tmp__48;
  } else {
    goto llvm_cbe_tmp__49;
  }

llvm_cbe_tmp__48:
if (AESL_DEBUG_TRACE)
printf("\n  store i1 false, i1* @aesl_internal_imf3.init, align 1, !dbg !7 for 0x%I64xth hint within @imf3  --> \n", ++aesl_llvm_cbe_84_count);
  *(&aesl_internal_imf3_OC_init) = ((0) & 1ull);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 0);
  goto llvm_cbe_tmp__49;

llvm_cbe_tmp__49:
  if (((llvm_cbe_tmp__33&63U) == (((unsigned char )5)&63U))) {
    goto llvm_cbe_tmp__50;
  } else {
    goto llvm_cbe_tmp__51;
  }

llvm_cbe_tmp__50:
if (AESL_DEBUG_TRACE)
printf("\n  %%56 = add i6 %%51, 1, !dbg !7 for 0x%I64xth hint within @imf3  --> \n", ++aesl_llvm_cbe_87_count);
  llvm_cbe_tmp__40 = (unsigned char )((unsigned char )(llvm_cbe_tmp__39&63ull)) + ((unsigned char )(((unsigned char )1)&63ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned char )(llvm_cbe_tmp__40&63ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%. = select i1 %%52, i6 0, i6 %%56, !dbg !7 for 0x%I64xth hint within @imf3  --> \n", ++aesl_llvm_cbe__2e__count);
  llvm_cbe__2e_ = (unsigned char )((((llvm_cbe_tmp__39&63U) == (((unsigned char )15)&63U))) ? ((unsigned char )((unsigned char )0)) : ((unsigned char )llvm_cbe_tmp__40));
if (AESL_DEBUG_TRACE)
printf("\n. = 0x%X\n", llvm_cbe__2e_);
if (AESL_DEBUG_TRACE)
printf("\n  store i6 %%., i6* @aesl_internal_imf3.j, align 1, !dbg !7 for 0x%I64xth hint within @imf3  --> \n", ++aesl_llvm_cbe_88_count);
  *(&aesl_internal_imf3_OC_j) = ((llvm_cbe__2e_) & 63ull);
if (AESL_DEBUG_TRACE)
printf("\n. = 0x%X\n", llvm_cbe__2e_);
  goto llvm_cbe_tmp__51;

llvm_cbe_tmp__51:
if (AESL_DEBUG_TRACE)
printf("\n  %%58 = select i1 %%50, i6 0, i6 %%5, !dbg !6 for 0x%I64xth hint within @imf3  --> \n", ++aesl_llvm_cbe_90_count);
  llvm_cbe_tmp__41 = (unsigned char )((((llvm_cbe_tmp__33&63U) == (((unsigned char )5)&63U))) ? ((unsigned char )((unsigned char )0)) : ((unsigned char )llvm_cbe_tmp__2));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__41);
if (AESL_DEBUG_TRACE)
printf("\n  store i6 %%58, i6* @aesl_internal_imf3.i, align 1, !dbg !6 for 0x%I64xth hint within @imf3  --> \n", ++aesl_llvm_cbe_91_count);
  *(&aesl_internal_imf3_OC_i) = ((llvm_cbe_tmp__41) & 63ull);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__41);
  if (AESL_DEBUG_TRACE)
      printf("\nEND @imf3}\n");
  return;
}


 char llvm_part_select_i6( char llvm_cbe_Val, signed int llvm_cbe_Lo, signed int llvm_cbe_High) {
  static  unsigned long long aesl_llvm_cbe_tmp_count = 0;
  unsigned char llvm_cbe_tmp;
  static  unsigned long long aesl_llvm_cbe_tmp1_count = 0;
  unsigned char llvm_cbe_tmp1;
  static  unsigned long long aesl_llvm_cbe_less_count = 0;
  static  unsigned long long aesl_llvm_cbe_93_count = 0;
  static  unsigned long long aesl_llvm_cbe_rbits_count = 0;
  unsigned char llvm_cbe_rbits;
  static  unsigned long long aesl_llvm_cbe_94_count = 0;
  static  unsigned long long aesl_llvm_cbe_fbits_count = 0;
  unsigned char llvm_cbe_fbits;
  static  unsigned long long aesl_llvm_cbe_95_count = 0;
  static  unsigned long long aesl_llvm_cbe_bits_count = 0;
  unsigned char llvm_cbe_bits;
  unsigned char llvm_cbe_bits__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_shiftamt_count = 0;
  unsigned char llvm_cbe_shiftamt;
  unsigned char llvm_cbe_shiftamt__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_bits2_count = 0;
  unsigned char llvm_cbe_bits2;
  static  unsigned long long aesl_llvm_cbe_mask_count = 0;
  unsigned char llvm_cbe_mask;
  static  unsigned long long aesl_llvm_cbe_is_over_shift_count = 0;
  static  unsigned long long aesl_llvm_cbe_96_count = 0;
  unsigned char llvm_cbe_tmp__52;
  static  unsigned long long aesl_llvm_cbe_mask3_count = 0;
  unsigned char llvm_cbe_mask3;
  static  unsigned long long aesl_llvm_cbe_fres_count = 0;
  unsigned char llvm_cbe_fres;
  static  unsigned long long aesl_llvm_cbe_fres4_count = 0;
  unsigned char llvm_cbe_fres4;
  static  unsigned long long aesl_llvm_cbe_97_count = 0;
  static  unsigned long long aesl_llvm_cbe_count_count = 0;
  unsigned char llvm_cbe_count;
  unsigned char llvm_cbe_count__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_val_count = 0;
  unsigned char llvm_cbe_val;
  unsigned char llvm_cbe_val__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_rres_count = 0;
  unsigned char llvm_cbe_rres;
  unsigned char llvm_cbe_rres__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_decr_count = 0;
  unsigned char llvm_cbe_decr;
  static  unsigned long long aesl_llvm_cbe_bit_count = 0;
  unsigned char llvm_cbe_bit;
  static  unsigned long long aesl_llvm_cbe_rshift_count = 0;
  unsigned char llvm_cbe_rshift;
  static  unsigned long long aesl_llvm_cbe_lshift_count = 0;
  unsigned char llvm_cbe_lshift;
  static  unsigned long long aesl_llvm_cbe_addbit_count = 0;
  unsigned char llvm_cbe_addbit;
  static  unsigned long long aesl_llvm_cbe_cond_count = 0;
  static  unsigned long long aesl_llvm_cbe_98_count = 0;
  static  unsigned long long aesl_llvm_cbe_part_select_count = 0;
  unsigned char llvm_cbe_part_select;
  unsigned char llvm_cbe_part_select__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_99_count = 0;

 if (!(llvm_cbe_Lo < 6 && llvm_cbe_High < 6))
   fprintf(stderr, "%s:%d: warning: Part select out of range.\n", __FILE__, __LINE__);
  llvm_cbe_tmp = (unsigned char )((unsigned char )llvm_cbe_High&63U);
  llvm_cbe_tmp1 = (unsigned char )((unsigned char )llvm_cbe_Lo&63U);
  if ((((unsigned char )llvm_cbe_tmp&63U) < ((unsigned char )llvm_cbe_tmp1&63U))) {
    goto llvm_cbe_revsize;
  } else {
    goto llvm_cbe_fwdsize;
  }

llvm_cbe_revsize:
  llvm_cbe_rbits = (unsigned char )((unsigned char )(llvm_cbe_tmp1&63ull)) - ((unsigned char )(llvm_cbe_tmp&63ull));
  llvm_cbe_bits__PHI_TEMPORARY = (unsigned char )llvm_cbe_rbits;   /* for PHI node */
  llvm_cbe_shiftamt__PHI_TEMPORARY = (unsigned char )llvm_cbe_tmp;   /* for PHI node */
  goto llvm_cbe_compute;

llvm_cbe_fwdsize:
  llvm_cbe_fbits = (unsigned char )((unsigned char )(llvm_cbe_tmp&63ull)) - ((unsigned char )(llvm_cbe_tmp1&63ull));
  llvm_cbe_bits__PHI_TEMPORARY = (unsigned char )llvm_cbe_fbits;   /* for PHI node */
  llvm_cbe_shiftamt__PHI_TEMPORARY = (unsigned char )llvm_cbe_tmp1;   /* for PHI node */
  goto llvm_cbe_compute;

llvm_cbe_compute:
  llvm_cbe_bits = (unsigned char )llvm_cbe_bits__PHI_TEMPORARY;
  llvm_cbe_shiftamt = (unsigned char )llvm_cbe_shiftamt__PHI_TEMPORARY;
  llvm_cbe_bits2 = (unsigned char )((unsigned char )(llvm_cbe_bits&63ull)) + ((unsigned char )(((unsigned char )1)&63ull));
  llvm_cbe_mask = (unsigned char )((unsigned char )-1) << llvm_cbe_bits2;
  llvm_cbe_tmp__52 = (unsigned char )(((((unsigned char )llvm_cbe_bits2&63U) >= ((unsigned char )((unsigned char )6)&63U))) ? ((unsigned char )((unsigned char )0)) : ((unsigned char )llvm_cbe_mask));
  llvm_cbe_mask3 = (unsigned char )llvm_cbe_tmp__52 ^ ((unsigned char )-1);
  llvm_cbe_fres = (unsigned char )((unsigned char )(((unsigned char )(llvm_cbe_Val&63ull)) >> ((unsigned char )(llvm_cbe_shiftamt&63ull))));
  llvm_cbe_fres4 = (unsigned char )llvm_cbe_fres & llvm_cbe_mask3;
  if ((((unsigned char )llvm_cbe_tmp&63U) < ((unsigned char )llvm_cbe_tmp1&63U))) {
    llvm_cbe_count__PHI_TEMPORARY = (unsigned char )llvm_cbe_bits2;   /* for PHI node */
    llvm_cbe_val__PHI_TEMPORARY = (unsigned char )llvm_cbe_fres4;   /* for PHI node */
    llvm_cbe_rres__PHI_TEMPORARY = (unsigned char )((unsigned char )0);   /* for PHI node */
    goto llvm_cbe_reverse;
  } else {
    llvm_cbe_part_select__PHI_TEMPORARY = (unsigned char )llvm_cbe_fres4;   /* for PHI node */
    goto llvm_cbe_result;
  }

  do {     /* Syntactic loop 'reverse' to make GCC happy */
llvm_cbe_reverse:
  llvm_cbe_count = (unsigned char )llvm_cbe_count__PHI_TEMPORARY;
  llvm_cbe_val = (unsigned char )llvm_cbe_val__PHI_TEMPORARY;
  llvm_cbe_rres = (unsigned char )llvm_cbe_rres__PHI_TEMPORARY;
  llvm_cbe_decr = (unsigned char )((unsigned char )(llvm_cbe_count&63ull)) - ((unsigned char )(((unsigned char )1)&63ull));
  llvm_cbe_bit = (unsigned char )llvm_cbe_val & ((unsigned char )1);
  llvm_cbe_rshift = (unsigned char )((unsigned char )(((unsigned char )(llvm_cbe_val&63ull)) >> ((unsigned char )(((unsigned char )1)&63ull))));
  llvm_cbe_lshift = (unsigned char )llvm_cbe_rres << ((unsigned char )1);
  llvm_cbe_addbit = (unsigned char )llvm_cbe_lshift | llvm_cbe_bit;
  if (((llvm_cbe_decr&63U) == (((unsigned char )0)&63U))) {
    llvm_cbe_part_select__PHI_TEMPORARY = (unsigned char )llvm_cbe_addbit;   /* for PHI node */
    goto llvm_cbe_result;
  } else {
    llvm_cbe_count__PHI_TEMPORARY = (unsigned char )llvm_cbe_decr;   /* for PHI node */
    llvm_cbe_val__PHI_TEMPORARY = (unsigned char )llvm_cbe_rshift;   /* for PHI node */
    llvm_cbe_rres__PHI_TEMPORARY = (unsigned char )llvm_cbe_addbit;   /* for PHI node */
    goto llvm_cbe_reverse;
  }

  } while (1); /* end of syntactic loop 'reverse' */
llvm_cbe_result:
  llvm_cbe_part_select = (unsigned char )llvm_cbe_part_select__PHI_TEMPORARY;
  return llvm_cbe_part_select;
}

