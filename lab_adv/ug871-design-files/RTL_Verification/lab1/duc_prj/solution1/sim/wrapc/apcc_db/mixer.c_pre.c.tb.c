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
signed long long mix_SubDSP(signed int llvm_cbe_a, signed int llvm_cbe_b, signed int llvm_cbe_c);
signed long long mult(signed int , signed int );
signed long long mix_AddDSP(signed int llvm_cbe_a, signed int llvm_cbe_b, signed int llvm_cbe_c);
void mixer(signed short llvm_cbe_freq, signed int llvm_cbe_Din, signed int *llvm_cbe_Dout_I, signed int *llvm_cbe_Dout_Q);
void dds(signed short , signed short *, signed short *);


/* Global Variable Definitions and Initialization */
static signed int aesl_internal_mixer_OC_DI_cache[16];
static bool aesl_internal_mixer_OC_init = 1;
static unsigned char aesl_internal_mixer_OC_index;
static unsigned char aesl_internal_mixer_OC_i;
static bool aesl_internal_mixer_OC_ch = 1;
static unsigned int aesl_internal_mixer_OC_Din_im;


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

signed long long mix_SubDSP(signed int llvm_cbe_a, signed int llvm_cbe_b, signed int llvm_cbe_c) {
  static  unsigned long long aesl_llvm_cbe_1_count = 0;
  static  unsigned long long aesl_llvm_cbe_2_count = 0;
  static  unsigned long long aesl_llvm_cbe_3_count = 0;
  static  unsigned long long aesl_llvm_cbe_4_count = 0;
  static  unsigned long long aesl_llvm_cbe_5_count = 0;
  unsigned int llvm_cbe_tmp__1;
  static  unsigned long long aesl_llvm_cbe_6_count = 0;
  static  unsigned long long aesl_llvm_cbe_7_count = 0;
  unsigned int llvm_cbe_tmp__2;
  static  unsigned long long aesl_llvm_cbe_8_count = 0;
  unsigned int llvm_cbe_tmp__3;
  static  unsigned long long aesl_llvm_cbe_9_count = 0;
  static  unsigned long long aesl_llvm_cbe_10_count = 0;
  static  unsigned long long aesl_llvm_cbe_11_count = 0;
  static  unsigned long long aesl_llvm_cbe_12_count = 0;
  unsigned long long llvm_cbe_tmp__4;
  static  unsigned long long aesl_llvm_cbe_13_count = 0;
  static  unsigned long long aesl_llvm_cbe_14_count = 0;
  static  unsigned long long aesl_llvm_cbe_15_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @mix_SubDSP\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = sext i18 %%a to i19, !dbg !6 for 0x%I64xth hint within @mix_SubDSP  --> \n", ++aesl_llvm_cbe_5_count);
  llvm_cbe_tmp__1 = (unsigned int )((signed int )(signed int )(llvm_cbe_a & (1U << 17U )  ? llvm_cbe_a | 4294705152U : llvm_cbe_a & 262143U));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__1);
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = sext i18 %%b to i19, !dbg !6 for 0x%I64xth hint within @mix_SubDSP  --> \n", ++aesl_llvm_cbe_7_count);
  llvm_cbe_tmp__2 = (unsigned int )((signed int )(signed int )(llvm_cbe_b & (1U << 17U )  ? llvm_cbe_b | 4294705152U : llvm_cbe_b & 262143U));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__2);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = sub i19 %%1, %%2, !dbg !6 for 0x%I64xth hint within @mix_SubDSP  --> \n", ++aesl_llvm_cbe_8_count);
  llvm_cbe_tmp__3 = (unsigned int )((unsigned int )(llvm_cbe_tmp__1&524287ull)) - ((unsigned int )(llvm_cbe_tmp__2&524287ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__3&524287ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = tail call i37 @mult(i18 signext %%c, i19 signext %%3) nounwind, !dbg !7 for 0x%I64xth hint within @mix_SubDSP  --> \n", ++aesl_llvm_cbe_12_count);
  llvm_cbe_tmp__4 = (unsigned long long ) /*tail*/ mult(llvm_cbe_c, llvm_cbe_tmp__3);
if (AESL_DEBUG_TRACE) {
printf("\nArgument c = 0x%X",llvm_cbe_c);
printf("\nArgument  = 0x%X",llvm_cbe_tmp__3);
printf("\nReturn  = 0x%I64X",llvm_cbe_tmp__4);
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @mix_SubDSP}\n");
  return llvm_cbe_tmp__4;
}


signed long long mix_AddDSP(signed int llvm_cbe_a, signed int llvm_cbe_b, signed int llvm_cbe_c) {
  static  unsigned long long aesl_llvm_cbe_16_count = 0;
  static  unsigned long long aesl_llvm_cbe_17_count = 0;
  static  unsigned long long aesl_llvm_cbe_18_count = 0;
  static  unsigned long long aesl_llvm_cbe_19_count = 0;
  static  unsigned long long aesl_llvm_cbe_20_count = 0;
  unsigned int llvm_cbe_tmp__5;
  static  unsigned long long aesl_llvm_cbe_21_count = 0;
  static  unsigned long long aesl_llvm_cbe_22_count = 0;
  unsigned int llvm_cbe_tmp__6;
  static  unsigned long long aesl_llvm_cbe_23_count = 0;
  unsigned int llvm_cbe_tmp__7;
  static  unsigned long long aesl_llvm_cbe_24_count = 0;
  static  unsigned long long aesl_llvm_cbe_25_count = 0;
  static  unsigned long long aesl_llvm_cbe_26_count = 0;
  static  unsigned long long aesl_llvm_cbe_27_count = 0;
  unsigned long long llvm_cbe_tmp__8;
  static  unsigned long long aesl_llvm_cbe_28_count = 0;
  static  unsigned long long aesl_llvm_cbe_29_count = 0;
  static  unsigned long long aesl_llvm_cbe_30_count = 0;
  unsigned long long llvm_cbe_tmp__9;
  static  unsigned long long aesl_llvm_cbe_31_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @mix_AddDSP\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = sext i18 %%a to i19, !dbg !6 for 0x%I64xth hint within @mix_AddDSP  --> \n", ++aesl_llvm_cbe_20_count);
  llvm_cbe_tmp__5 = (unsigned int )((signed int )(signed int )(llvm_cbe_a & (1U << 17U )  ? llvm_cbe_a | 4294705152U : llvm_cbe_a & 262143U));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__5);
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = sext i18 %%b to i19, !dbg !6 for 0x%I64xth hint within @mix_AddDSP  --> \n", ++aesl_llvm_cbe_22_count);
  llvm_cbe_tmp__6 = (unsigned int )((signed int )(signed int )(llvm_cbe_b & (1U << 17U )  ? llvm_cbe_b | 4294705152U : llvm_cbe_b & 262143U));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__6);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = add i19 %%2, %%1, !dbg !6 for 0x%I64xth hint within @mix_AddDSP  --> \n", ++aesl_llvm_cbe_23_count);
  llvm_cbe_tmp__7 = (unsigned int )((unsigned int )(llvm_cbe_tmp__6&524287ull)) + ((unsigned int )(llvm_cbe_tmp__5&524287ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__7&524287ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = tail call i37 @mult(i18 signext %%c, i19 signext %%3) nounwind, !dbg !7 for 0x%I64xth hint within @mix_AddDSP  --> \n", ++aesl_llvm_cbe_27_count);
  llvm_cbe_tmp__8 = (unsigned long long ) /*tail*/ mult(llvm_cbe_c, llvm_cbe_tmp__7);
if (AESL_DEBUG_TRACE) {
printf("\nArgument c = 0x%X",llvm_cbe_c);
printf("\nArgument  = 0x%X",llvm_cbe_tmp__7);
printf("\nReturn  = 0x%I64X",llvm_cbe_tmp__8);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = trunc i37 %%4 to i36, !dbg !7 for 0x%I64xth hint within @mix_AddDSP  --> \n", ++aesl_llvm_cbe_30_count);
  llvm_cbe_tmp__9 = (unsigned long long )((unsigned long long )llvm_cbe_tmp__8&68719476735ULL);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__9);
  if (AESL_DEBUG_TRACE)
      printf("\nEND @mix_AddDSP}\n");
  return llvm_cbe_tmp__9;
}


void mixer(signed short llvm_cbe_freq, signed int llvm_cbe_Din, signed int *llvm_cbe_Dout_I, signed int *llvm_cbe_Dout_Q) {
  static  unsigned long long aesl_llvm_cbe_cosine_count = 0;
  signed short llvm_cbe_cosine;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_sine_count = 0;
  signed short llvm_cbe_sine;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_32_count = 0;
  static  unsigned long long aesl_llvm_cbe_33_count = 0;
  static  unsigned long long aesl_llvm_cbe_34_count = 0;
  static  unsigned long long aesl_llvm_cbe_35_count = 0;
  static  unsigned long long aesl_llvm_cbe_36_count = 0;
  static  unsigned long long aesl_llvm_cbe_37_count = 0;
  static  unsigned long long aesl_llvm_cbe_38_count = 0;
  static  unsigned long long aesl_llvm_cbe_39_count = 0;
  static  unsigned long long aesl_llvm_cbe_40_count = 0;
  static  unsigned long long aesl_llvm_cbe_41_count = 0;
  static  unsigned long long aesl_llvm_cbe_42_count = 0;
  unsigned char llvm_cbe_tmp__10;
  static  unsigned long long aesl_llvm_cbe_43_count = 0;
  unsigned char llvm_cbe_tmp__11;
  static  unsigned long long aesl_llvm_cbe_44_count = 0;
  static  unsigned long long aesl_llvm_cbe_45_count = 0;
  static  unsigned long long aesl_llvm_cbe_46_count = 0;
  static  unsigned long long aesl_llvm_cbe_47_count = 0;
  static  unsigned long long aesl_llvm_cbe_48_count = 0;
  static  unsigned long long aesl_llvm_cbe_49_count = 0;
  static  unsigned long long aesl_llvm_cbe_50_count = 0;
  static  unsigned long long aesl_llvm_cbe_51_count = 0;
  bool llvm_cbe_tmp__12;
  static  unsigned long long aesl_llvm_cbe_52_count = 0;
  unsigned short llvm_cbe_tmp__13;
  static  unsigned long long aesl_llvm_cbe_53_count = 0;
  static  unsigned long long aesl_llvm_cbe_54_count = 0;
  static  unsigned long long aesl_llvm_cbe_55_count = 0;
  static  unsigned long long aesl_llvm_cbe_56_count = 0;
  bool llvm_cbe_tmp__14;
  static  unsigned long long aesl_llvm_cbe_57_count = 0;
  static  unsigned long long aesl_llvm_cbe_58_count = 0;
  static  unsigned long long aesl_llvm_cbe_59_count = 0;
  unsigned char llvm_cbe_tmp__15;
  static  unsigned long long aesl_llvm_cbe_60_count = 0;
  unsigned long long llvm_cbe_tmp__16;
  static  unsigned long long aesl_llvm_cbe_61_count = 0;
  signed int *llvm_cbe_tmp__17;
  static  unsigned long long aesl_llvm_cbe_62_count = 0;
  static  unsigned long long aesl_llvm_cbe_63_count = 0;
  static  unsigned long long aesl_llvm_cbe_64_count = 0;
  static  unsigned long long aesl_llvm_cbe_65_count = 0;
  static  unsigned long long aesl_llvm_cbe_66_count = 0;
  unsigned char llvm_cbe_tmp__18;
  static  unsigned long long aesl_llvm_cbe_67_count = 0;
  unsigned long long llvm_cbe_tmp__19;
  static  unsigned long long aesl_llvm_cbe_68_count = 0;
  signed int *llvm_cbe_tmp__20;
  static  unsigned long long aesl_llvm_cbe_69_count = 0;
  unsigned int llvm_cbe_tmp__21;
  static  unsigned long long aesl_llvm_cbe_70_count = 0;
  static  unsigned long long aesl_llvm_cbe_71_count = 0;
  static  unsigned long long aesl_llvm_cbe_72_count = 0;
  static  unsigned long long aesl_llvm_cbe_73_count = 0;
  static  unsigned long long aesl_llvm_cbe_74_count = 0;
  static  unsigned long long aesl_llvm_cbe_75_count = 0;
  static  unsigned long long aesl_llvm_cbe_76_count = 0;
  static  unsigned long long aesl_llvm_cbe_77_count = 0;
  static  unsigned long long aesl_llvm_cbe_78_count = 0;
  static  unsigned long long aesl_llvm_cbe_79_count = 0;
  unsigned short llvm_cbe_tmp__22;
  static  unsigned long long aesl_llvm_cbe_80_count = 0;
  unsigned int llvm_cbe_tmp__23;
  static  unsigned long long aesl_llvm_cbe_81_count = 0;
  static  unsigned long long aesl_llvm_cbe_82_count = 0;
  static  unsigned long long aesl_llvm_cbe_83_count = 0;
  static  unsigned long long aesl_llvm_cbe_84_count = 0;
  static  unsigned long long aesl_llvm_cbe_85_count = 0;
  static  unsigned long long aesl_llvm_cbe_86_count = 0;
  static  unsigned long long aesl_llvm_cbe_87_count = 0;
  unsigned short llvm_cbe_tmp__24;
  static  unsigned long long aesl_llvm_cbe_88_count = 0;
  unsigned int llvm_cbe_tmp__25;
  static  unsigned long long aesl_llvm_cbe_89_count = 0;
  unsigned int llvm_cbe_tmp__26;
  static  unsigned long long aesl_llvm_cbe_90_count = 0;
  unsigned long long llvm_cbe_tmp__27;
  static  unsigned long long aesl_llvm_cbe_91_count = 0;
  unsigned long long llvm_cbe_tmp__28;
  static  unsigned long long aesl_llvm_cbe_92_count = 0;
  static  unsigned long long aesl_llvm_cbe_93_count = 0;
  static  unsigned long long aesl_llvm_cbe_94_count = 0;
  static  unsigned long long aesl_llvm_cbe_95_count = 0;
  unsigned long long llvm_cbe_tmp__29;
  static  unsigned long long aesl_llvm_cbe_96_count = 0;
  unsigned int llvm_cbe_tmp__30;
  static  unsigned long long aesl_llvm_cbe_97_count = 0;
  static  unsigned long long aesl_llvm_cbe_98_count = 0;
  static  unsigned long long aesl_llvm_cbe_99_count = 0;
  static  unsigned long long aesl_llvm_cbe_100_count = 0;
  static  unsigned long long aesl_llvm_cbe_101_count = 0;
  static  unsigned long long aesl_llvm_cbe_102_count = 0;
  static  unsigned long long aesl_llvm_cbe_103_count = 0;
  unsigned short llvm_cbe_tmp__31;
  static  unsigned long long aesl_llvm_cbe_104_count = 0;
  unsigned int llvm_cbe_tmp__32;
  static  unsigned long long aesl_llvm_cbe_105_count = 0;
  unsigned long long llvm_cbe_tmp__33;
  static  unsigned long long aesl_llvm_cbe_106_count = 0;
  unsigned long long llvm_cbe_tmp__34;
  static  unsigned long long aesl_llvm_cbe_107_count = 0;
  unsigned long long llvm_cbe_tmp__35;
  static  unsigned long long aesl_llvm_cbe_108_count = 0;
  unsigned int llvm_cbe_tmp__36;
  static  unsigned long long aesl_llvm_cbe_109_count = 0;
  static  unsigned long long aesl_llvm_cbe_110_count = 0;
  unsigned long long llvm_cbe_tmp__37;
  static  unsigned long long aesl_llvm_cbe_111_count = 0;
  unsigned int llvm_cbe_tmp__38;
  static  unsigned long long aesl_llvm_cbe_112_count = 0;
  static  unsigned long long aesl_llvm_cbe_113_count = 0;
  static  unsigned long long aesl_llvm_cbe_114_count = 0;
  static  unsigned long long aesl_llvm_cbe_115_count = 0;
  static  unsigned long long aesl_llvm_cbe_116_count = 0;
  static  unsigned long long aesl_llvm_cbe_117_count = 0;
  static  unsigned long long aesl_llvm_cbe_118_count = 0;
  unsigned short llvm_cbe_tmp__39;
  static  unsigned long long aesl_llvm_cbe_119_count = 0;
  unsigned int llvm_cbe_tmp__40;
  static  unsigned long long aesl_llvm_cbe_120_count = 0;
  unsigned long long llvm_cbe_tmp__41;
  static  unsigned long long aesl_llvm_cbe_121_count = 0;
  unsigned long long llvm_cbe_tmp__42;
  static  unsigned long long aesl_llvm_cbe_122_count = 0;
  unsigned long long llvm_cbe_tmp__43;
  static  unsigned long long aesl_llvm_cbe_123_count = 0;
  unsigned int llvm_cbe_tmp__44;
  static  unsigned long long aesl_llvm_cbe_124_count = 0;
  static  unsigned long long aesl_llvm_cbe_125_count = 0;
  unsigned char llvm_cbe_tmp__45;
  static  unsigned long long aesl_llvm_cbe_126_count = 0;
  static  unsigned long long aesl_llvm_cbe_127_count = 0;
  static  unsigned long long aesl_llvm_cbe_128_count = 0;
  static  unsigned long long aesl_llvm_cbe_129_count = 0;
  static  unsigned long long aesl_llvm_cbe_130_count = 0;
  static  unsigned long long aesl_llvm_cbe_131_count = 0;
  static  unsigned long long aesl_llvm_cbe_132_count = 0;
  unsigned char llvm_cbe_tmp__46;
  static  unsigned long long aesl_llvm_cbe_133_count = 0;
  static  unsigned long long aesl_llvm_cbe_134_count = 0;
  static  unsigned long long aesl_llvm_cbe_135_count = 0;
  bool llvm_cbe_tmp__47;
  static  unsigned long long aesl_llvm_cbe_136_count = 0;
  bool llvm_cbe_tmp__48;
  static  unsigned long long aesl_llvm_cbe_137_count = 0;
  static  unsigned long long aesl_llvm_cbe_138_count = 0;
  static  unsigned long long aesl_llvm_cbe_139_count = 0;
  static  unsigned long long aesl_llvm_cbe_140_count = 0;
  unsigned char llvm_cbe_tmp__49;
  static  unsigned long long aesl_llvm_cbe_141_count = 0;
  static  unsigned long long aesl_llvm_cbe_142_count = 0;
  static  unsigned long long aesl_llvm_cbe_143_count = 0;
  unsigned char llvm_cbe_tmp__50;
  static  unsigned long long aesl_llvm_cbe_144_count = 0;
  static  unsigned long long aesl_llvm_cbe_145_count = 0;
  unsigned char llvm_cbe_tmp__51;
  static  unsigned long long aesl_llvm_cbe_146_count = 0;
  static  unsigned long long aesl_llvm_cbe_147_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @mixer\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = load i3* @aesl_internal_mixer.i, align 1, !dbg !8 for 0x%I64xth hint within @mixer  --> \n", ++aesl_llvm_cbe_42_count);
  llvm_cbe_tmp__10 = (unsigned char )*(&aesl_internal_mixer_OC_i);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__10);
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = add i3 %%1, 1, !dbg !8 for 0x%I64xth hint within @mixer  --> \n", ++aesl_llvm_cbe_43_count);
  llvm_cbe_tmp__11 = (unsigned char )((unsigned char )(llvm_cbe_tmp__10&7ull)) + ((unsigned char )(((unsigned char )1)&7ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned char )(llvm_cbe_tmp__11&7ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = load i1* @aesl_internal_mixer.init, align 1, !dbg !6 for 0x%I64xth hint within @mixer  --> \n", ++aesl_llvm_cbe_51_count);
  llvm_cbe_tmp__12 = (bool )((*(&aesl_internal_mixer_OC_init))&1);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__12);
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = select i1 %%4, i16 0, i16 %%freq, !dbg !6 for 0x%I64xth hint within @mixer  --> \n", ++aesl_llvm_cbe_52_count);
  llvm_cbe_tmp__13 = (unsigned short )((llvm_cbe_tmp__12) ? ((unsigned short )((unsigned short )0)) : ((unsigned short )llvm_cbe_freq));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__13);
if (AESL_DEBUG_TRACE)
printf("\n  store i18 %%Din, i18* @aesl_internal_mixer.Din_im, align 4, !dbg !6 for 0x%I64xth hint within @mixer  --> \n", ++aesl_llvm_cbe_55_count);
  *(&aesl_internal_mixer_OC_Din_im) = ((llvm_cbe_Din) & 262143ull);
if (AESL_DEBUG_TRACE)
printf("\nDin = 0x%X\n", llvm_cbe_Din);
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = load i1* @aesl_internal_mixer.ch, align 1, !dbg !8 for 0x%I64xth hint within @mixer  --> \n", ++aesl_llvm_cbe_56_count);
  llvm_cbe_tmp__14 = (bool )((*(&aesl_internal_mixer_OC_ch))&1);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__14);
  if (llvm_cbe_tmp__14) {
    goto llvm_cbe_tmp__52;
  } else {
    goto llvm_cbe_tmp__53;
  }

llvm_cbe_tmp__52:
  if ((((unsigned char )llvm_cbe_tmp__10&7U) < ((unsigned char )((unsigned char )2)&7U))) {
    goto llvm_cbe_tmp__54;
  } else {
    goto llvm_cbe__2e_thread;
  }

llvm_cbe_tmp__54:
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = load i4* @aesl_internal_mixer.index, align 1, !dbg !9 for 0x%I64xth hint within @mixer  --> \n", ++aesl_llvm_cbe_59_count);
  llvm_cbe_tmp__15 = (unsigned char )*(&aesl_internal_mixer_OC_index);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__15);
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = zext i4 %%9 to i64, !dbg !9 for 0x%I64xth hint within @mixer  --> \n", ++aesl_llvm_cbe_60_count);
  llvm_cbe_tmp__16 = (unsigned long long )((unsigned long long )(unsigned char )llvm_cbe_tmp__15&15U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__16);
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = getelementptr inbounds [16 x i18]* @aesl_internal_mixer.DI_cache, i64 0, i64 %%10, !dbg !9 for 0x%I64xth hint within @mixer  --> \n", ++aesl_llvm_cbe_61_count);
  llvm_cbe_tmp__17 = (signed int *)(&aesl_internal_mixer_OC_DI_cache[(((signed long long )llvm_cbe_tmp__16))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__16));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__16) < 16 && "Write access out of array 'aesl_internal_mixer.DI_cache' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i18 %%Din, i18* %%11, align 4, !dbg !9 for 0x%I64xth hint within @mixer  --> \n", ++aesl_llvm_cbe_62_count);
  *llvm_cbe_tmp__17 = ((llvm_cbe_Din) & 262143ull);
if (AESL_DEBUG_TRACE)
printf("\nDin = 0x%X\n", llvm_cbe_Din);
  goto llvm_cbe_tmp__55;

llvm_cbe_tmp__53:
  if ((((unsigned char )llvm_cbe_tmp__10&7U) < ((unsigned char )((unsigned char )2)&7U))) {
    goto llvm_cbe_tmp__56;
  } else {
    goto llvm_cbe__2e_thread;
  }

llvm_cbe_tmp__56:
if (AESL_DEBUG_TRACE)
printf("\n  call void @dds(i16 zeroext %%5, i16* %%sine, i16* %%cosine) nounwind, !dbg !9 for 0x%I64xth hint within @mixer  --> \n", ++aesl_llvm_cbe_65_count);
  dds(llvm_cbe_tmp__13, (signed short *)(&llvm_cbe_sine), (signed short *)(&llvm_cbe_cosine));
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__13);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = load i4* @aesl_internal_mixer.index, align 1, !dbg !9 for 0x%I64xth hint within @mixer  --> \n", ++aesl_llvm_cbe_66_count);
  llvm_cbe_tmp__18 = (unsigned char )*(&aesl_internal_mixer_OC_index);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__18);
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = zext i4 %%14 to i64, !dbg !9 for 0x%I64xth hint within @mixer  --> \n", ++aesl_llvm_cbe_67_count);
  llvm_cbe_tmp__19 = (unsigned long long )((unsigned long long )(unsigned char )llvm_cbe_tmp__18&15U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__19);
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = getelementptr inbounds [16 x i18]* @aesl_internal_mixer.DI_cache, i64 0, i64 %%15, !dbg !9 for 0x%I64xth hint within @mixer  --> \n", ++aesl_llvm_cbe_68_count);
  llvm_cbe_tmp__20 = (signed int *)(&aesl_internal_mixer_OC_DI_cache[(((signed long long )llvm_cbe_tmp__19))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__19));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__19) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_mixer.DI_cache' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = load i18* %%16, align 4, !dbg !9 for 0x%I64xth hint within @mixer  --> \n", ++aesl_llvm_cbe_69_count);
  llvm_cbe_tmp__21 = (unsigned int )*llvm_cbe_tmp__20;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__21);
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = load i16* %%sine, align 2, !dbg !9 for 0x%I64xth hint within @mixer  --> \n", ++aesl_llvm_cbe_79_count);
  llvm_cbe_tmp__22 = (unsigned short )*(&llvm_cbe_sine);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__22);
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = sext i16 %%18 to i18, !dbg !9 for 0x%I64xth hint within @mixer  --> \n", ++aesl_llvm_cbe_80_count);
  llvm_cbe_tmp__23 = (unsigned int )((signed int )(signed short )llvm_cbe_tmp__22);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__23);
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = load i16* %%cosine, align 2, !dbg !9 for 0x%I64xth hint within @mixer  --> \n", ++aesl_llvm_cbe_87_count);
  llvm_cbe_tmp__24 = (unsigned short )*(&llvm_cbe_cosine);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__24);
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = sext i16 %%20 to i18, !dbg !9 for 0x%I64xth hint within @mixer  --> \n", ++aesl_llvm_cbe_88_count);
  llvm_cbe_tmp__25 = (unsigned int )((signed int )(signed short )llvm_cbe_tmp__24);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__25);
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = load i18* @aesl_internal_mixer.Din_im, align 4, !dbg !9 for 0x%I64xth hint within @mixer  --> \n", ++aesl_llvm_cbe_89_count);
  llvm_cbe_tmp__26 = (unsigned int )*(&aesl_internal_mixer_OC_Din_im);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__26);
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = call i37 @mix_SubDSP(i18 signext %%19, i18 signext %%21, i18 signext %%22), !dbg !9 for 0x%I64xth hint within @mixer  --> \n", ++aesl_llvm_cbe_90_count);
  llvm_cbe_tmp__27 = (unsigned long long )mix_SubDSP(llvm_cbe_tmp__23, llvm_cbe_tmp__25, llvm_cbe_tmp__26);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__23);
printf("\nArgument  = 0x%X",llvm_cbe_tmp__25);
printf("\nArgument  = 0x%X",llvm_cbe_tmp__26);
printf("\nReturn  = 0x%I64X",llvm_cbe_tmp__27);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = trunc i37 %%23 to i34, !dbg !9 for 0x%I64xth hint within @mixer  --> \n", ++aesl_llvm_cbe_91_count);
  llvm_cbe_tmp__28 = (unsigned long long )((unsigned long long )llvm_cbe_tmp__27&17179869183ULL);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__28);
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = zext i34 %%24 to i37, !dbg !10 for 0x%I64xth hint within @mixer  --> \n", ++aesl_llvm_cbe_95_count);
  llvm_cbe_tmp__29 = (unsigned long long )((unsigned long long )(unsigned long long )llvm_cbe_tmp__28&17179869183ULL);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__29);
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = load i18* @aesl_internal_mixer.Din_im, align 4, !dbg !7 for 0x%I64xth hint within @mixer  --> \n", ++aesl_llvm_cbe_96_count);
  llvm_cbe_tmp__30 = (unsigned int )*(&aesl_internal_mixer_OC_Din_im);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__30);
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = load i16* %%sine, align 2, !dbg !7 for 0x%I64xth hint within @mixer  --> \n", ++aesl_llvm_cbe_103_count);
  llvm_cbe_tmp__31 = (unsigned short )*(&llvm_cbe_sine);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__31);
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = sext i16 %%27 to i18, !dbg !7 for 0x%I64xth hint within @mixer  --> \n", ++aesl_llvm_cbe_104_count);
  llvm_cbe_tmp__32 = (unsigned int )((signed int )(signed short )llvm_cbe_tmp__31);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__32);
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = call i37 @mix_SubDSP(i18 signext %%17, i18 signext %%26, i18 signext %%28), !dbg !7 for 0x%I64xth hint within @mixer  --> \n", ++aesl_llvm_cbe_105_count);
  llvm_cbe_tmp__33 = (unsigned long long )mix_SubDSP(llvm_cbe_tmp__21, llvm_cbe_tmp__30, llvm_cbe_tmp__32);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__21);
printf("\nArgument  = 0x%X",llvm_cbe_tmp__30);
printf("\nArgument  = 0x%X",llvm_cbe_tmp__32);
printf("\nReturn  = 0x%I64X",llvm_cbe_tmp__33);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = add nsw i37 %%29, %%25, !dbg !7 for 0x%I64xth hint within @mixer  --> \n", ++aesl_llvm_cbe_106_count);
  llvm_cbe_tmp__34 = (unsigned long long )((unsigned long long )(llvm_cbe_tmp__33&137438953471ull)) + ((unsigned long long )(llvm_cbe_tmp__29&137438953471ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__34&137438953471ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = lshr i37 %%30, 14, !dbg !7 for 0x%I64xth hint within @mixer  --> \n", ++aesl_llvm_cbe_107_count);
  llvm_cbe_tmp__35 = (unsigned long long )((unsigned long long )(((unsigned long long )(llvm_cbe_tmp__34&137438953471ull)) >> ((unsigned long long )(14ull&137438953471ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__35&137438953471ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = trunc i37 %%31 to i18, !dbg !7 for 0x%I64xth hint within @mixer  --> \n", ++aesl_llvm_cbe_108_count);
  llvm_cbe_tmp__36 = (unsigned int )((unsigned int )llvm_cbe_tmp__35&262143U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__36);
if (AESL_DEBUG_TRACE)
printf("\n  store i18 %%32, i18* %%Dout_I, align 4, !dbg !7 for 0x%I64xth hint within @mixer  --> \n", ++aesl_llvm_cbe_109_count);
  *llvm_cbe_Dout_I = ((llvm_cbe_tmp__36) & 262143ull);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__36);
if (AESL_DEBUG_TRACE)
printf("\n  %%33 = zext i34 %%24 to i36, !dbg !10 for 0x%I64xth hint within @mixer  --> \n", ++aesl_llvm_cbe_110_count);
  llvm_cbe_tmp__37 = (unsigned long long )((unsigned long long )(unsigned long long )llvm_cbe_tmp__28&17179869183ULL);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__37);
if (AESL_DEBUG_TRACE)
printf("\n  %%34 = load i18* @aesl_internal_mixer.Din_im, align 4, !dbg !7 for 0x%I64xth hint within @mixer  --> \n", ++aesl_llvm_cbe_111_count);
  llvm_cbe_tmp__38 = (unsigned int )*(&aesl_internal_mixer_OC_Din_im);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__38);
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = load i16* %%cosine, align 2, !dbg !7 for 0x%I64xth hint within @mixer  --> \n", ++aesl_llvm_cbe_118_count);
  llvm_cbe_tmp__39 = (unsigned short )*(&llvm_cbe_cosine);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__39);
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = sext i16 %%35 to i18, !dbg !7 for 0x%I64xth hint within @mixer  --> \n", ++aesl_llvm_cbe_119_count);
  llvm_cbe_tmp__40 = (unsigned int )((signed int )(signed short )llvm_cbe_tmp__39);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__40);
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = call i36 @mix_AddDSP(i18 signext %%17, i18 signext %%34, i18 signext %%36), !dbg !7 for 0x%I64xth hint within @mixer  --> \n", ++aesl_llvm_cbe_120_count);
  llvm_cbe_tmp__41 = (unsigned long long )mix_AddDSP(llvm_cbe_tmp__21, llvm_cbe_tmp__38, llvm_cbe_tmp__40);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__21);
printf("\nArgument  = 0x%X",llvm_cbe_tmp__38);
printf("\nArgument  = 0x%X",llvm_cbe_tmp__40);
printf("\nReturn  = 0x%I64X",llvm_cbe_tmp__41);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = add nsw i36 %%37, %%33, !dbg !7 for 0x%I64xth hint within @mixer  --> \n", ++aesl_llvm_cbe_121_count);
  llvm_cbe_tmp__42 = (unsigned long long )((unsigned long long )(llvm_cbe_tmp__41&68719476735ull)) + ((unsigned long long )(llvm_cbe_tmp__37&68719476735ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__42&68719476735ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%39 = lshr i36 %%38, 14, !dbg !7 for 0x%I64xth hint within @mixer  --> \n", ++aesl_llvm_cbe_122_count);
  llvm_cbe_tmp__43 = (unsigned long long )((unsigned long long )(((unsigned long long )(llvm_cbe_tmp__42&68719476735ull)) >> ((unsigned long long )(14ull&68719476735ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__43&68719476735ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%40 = trunc i36 %%39 to i18, !dbg !7 for 0x%I64xth hint within @mixer  --> \n", ++aesl_llvm_cbe_123_count);
  llvm_cbe_tmp__44 = (unsigned int )((unsigned int )llvm_cbe_tmp__43&262143U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__44);
if (AESL_DEBUG_TRACE)
printf("\n  store i18 %%40, i18* %%Dout_Q, align 4, !dbg !7 for 0x%I64xth hint within @mixer  --> \n", ++aesl_llvm_cbe_124_count);
  *llvm_cbe_Dout_Q = ((llvm_cbe_tmp__44) & 262143ull);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__44);
if (AESL_DEBUG_TRACE)
printf("\n  %%41 = load i4* @aesl_internal_mixer.index, align 1, !dbg !10 for 0x%I64xth hint within @mixer  --> \n", ++aesl_llvm_cbe_125_count);
  llvm_cbe_tmp__45 = (unsigned char )*(&aesl_internal_mixer_OC_index);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__45);
  if (((llvm_cbe_tmp__45&15U) == (((unsigned char )-1)&15U))) {
    goto llvm_cbe_tmp__57;
  } else {
    goto llvm_cbe_tmp__58;
  }

llvm_cbe_tmp__57:
if (AESL_DEBUG_TRACE)
printf("\n  store i1 false, i1* @aesl_internal_mixer.init, align 1, !dbg !10 for 0x%I64xth hint within @mixer  --> \n", ++aesl_llvm_cbe_128_count);
  *(&aesl_internal_mixer_OC_init) = ((0) & 1ull);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 0);
  goto llvm_cbe_tmp__58;

llvm_cbe_tmp__58:
  goto llvm_cbe__2e_thread;

llvm_cbe__2e_thread:
  goto llvm_cbe_tmp__55;

llvm_cbe_tmp__55:
if (AESL_DEBUG_TRACE)
printf("\n  %%46 = load i4* @aesl_internal_mixer.index, align 1, !dbg !10 for 0x%I64xth hint within @mixer  --> \n", ++aesl_llvm_cbe_132_count);
  llvm_cbe_tmp__46 = (unsigned char )*(&aesl_internal_mixer_OC_index);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__46);
  if (((llvm_cbe_tmp__46&15U) == (((unsigned char )-1)&15U))) {
    goto llvm_cbe_tmp__59;
  } else {
    goto llvm_cbe_tmp__60;
  }

llvm_cbe_tmp__59:
if (AESL_DEBUG_TRACE)
printf("\n  %%49 = load i1* @aesl_internal_mixer.ch, align 1, !dbg !11 for 0x%I64xth hint within @mixer  --> \n", ++aesl_llvm_cbe_135_count);
  llvm_cbe_tmp__47 = (bool )((*(&aesl_internal_mixer_OC_ch))&1);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__47);
if (AESL_DEBUG_TRACE)
printf("\n  %%50 = xor i1 %%49, true, !dbg !11 for 0x%I64xth hint within @mixer  --> \n", ++aesl_llvm_cbe_136_count);
  llvm_cbe_tmp__48 = (bool )((llvm_cbe_tmp__47 ^ 1)&1);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__48);
if (AESL_DEBUG_TRACE)
printf("\n  store i1 %%50, i1* @aesl_internal_mixer.ch, align 1, !dbg !11 for 0x%I64xth hint within @mixer  --> \n", ++aesl_llvm_cbe_137_count);
  *(&aesl_internal_mixer_OC_ch) = ((llvm_cbe_tmp__48) & 1ull);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__48);
  goto llvm_cbe_tmp__60;

llvm_cbe_tmp__60:
  if ((((unsigned char )llvm_cbe_tmp__10&7U) < ((unsigned char )((unsigned char )2)&7U))) {
    goto llvm_cbe_tmp__61;
  } else {
    goto llvm_cbe_tmp__62;
  }

llvm_cbe_tmp__61:
if (AESL_DEBUG_TRACE)
printf("\n  %%53 = add i4 %%46, 1, !dbg !11 for 0x%I64xth hint within @mixer  --> \n", ++aesl_llvm_cbe_140_count);
  llvm_cbe_tmp__49 = (unsigned char )((unsigned char )(llvm_cbe_tmp__46&15ull)) + ((unsigned char )(((unsigned char )1)&15ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned char )(llvm_cbe_tmp__49&15ull)));
if (AESL_DEBUG_TRACE)
printf("\n  store i4 %%53, i4* @aesl_internal_mixer.index, align 1, !dbg !11 for 0x%I64xth hint within @mixer  --> \n", ++aesl_llvm_cbe_141_count);
  *(&aesl_internal_mixer_OC_index) = ((llvm_cbe_tmp__49) & 15ull);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__49);
  goto llvm_cbe_tmp__62;

llvm_cbe_tmp__62:
if (AESL_DEBUG_TRACE)
printf("\n  %%55 = load i3* @aesl_internal_mixer.i, align 1, !dbg !8 for 0x%I64xth hint within @mixer  --> \n", ++aesl_llvm_cbe_143_count);
  llvm_cbe_tmp__50 = (unsigned char )*(&aesl_internal_mixer_OC_i);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__50);
if (AESL_DEBUG_TRACE)
printf("\n  %%57 = select i1 %%56, i3 0, i3 %%2, !dbg !8 for 0x%I64xth hint within @mixer  --> \n", ++aesl_llvm_cbe_145_count);
  llvm_cbe_tmp__51 = (unsigned char )((((llvm_cbe_tmp__50&7U) == (((unsigned char )-3)&7U))) ? ((unsigned char )((unsigned char )0)) : ((unsigned char )llvm_cbe_tmp__11));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__51);
if (AESL_DEBUG_TRACE)
printf("\n  store i3 %%57, i3* @aesl_internal_mixer.i, align 1, !dbg !8 for 0x%I64xth hint within @mixer  --> \n", ++aesl_llvm_cbe_146_count);
  *(&aesl_internal_mixer_OC_i) = ((llvm_cbe_tmp__51) & 7ull);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__51);
  if (AESL_DEBUG_TRACE)
      printf("\nEND @mixer}\n");
  return;
}

