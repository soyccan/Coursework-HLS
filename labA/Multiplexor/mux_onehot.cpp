#include "mux.h"

dType mux_onehot(dType din[N_REGS], sType sel)
{
    dType tmp;
    switch (sel) {
    case 1:
        tmp = din[0];
        break;
    case 2:
        tmp = din[1];
        break;
    case 4:
        tmp = din[2];
        break;
    case 8:
        tmp = din[3];
        break;
    default:
        tmp = 0;
        break;
    }
    return tmp;
}
