#include "mux.h"

dType mux_onehot_if(dType din[N_REGS], sType sel)
{
    dType tmp;
    if (sel == 1)
        tmp = din[0];
    else if (sel == 2)
        tmp = din[1];
    else if (sel == 4)
        tmp = din[2];
    else if (sel == 8)
        tmp = din[3];
    else
        tmp = 0;
    return tmp;
}
