#ifndef __LEADING_ONES_TMPL__
#define __LEADING_ONES_TMPL__
#include "ac_int.h" // hlslib
#include "log2ceil.h"
#include "nextpow2.h"
template <int N_BITS>
bool leading_ones(ac_int<N_BITS, false> &din,
                  ac_int<LOG2_CEIL<N_BITS>::val, false> &dout)
{
    enum { P2 = NEXT_POW2<(N_BITS + 1) / 2>::val };
    ac_int<N_BITS - P2, false> upper;
    ac_int<P2, false> lower;
    ac_int<LOG2_CEIL<N_BITS>::val, 0> idx = 0;
    ac_int<LOG2_CEIL<N_BITS - P2>::val, 0> idxu = 0;
    ac_int<LOG2_CEIL<P2>::val, 0> idxl = 0;
    static bool flag = false;

    upper.set_slc(0, din.template slc<N_BITS - P2>(P2));
    lower.set_slc(0, din.template slc<P2>(0));
    flag = (din != 0) ? 1 : 0;
    if (upper) {
        leading_ones<N_BITS - P2>(upper, idxu);
        idx = idxu | P2;
    } else {
        leading_ones<P2>(lower, idxl);
        idx = idxl;
    }
    dout = idx;
    return flag;
}

template <>
bool leading_ones<1>(ac_int<1, false> &din, ac_int<1, false> &dout)
{
    dout = 0;
    return din[0];
}
#endif
