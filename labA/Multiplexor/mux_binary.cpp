#include "mux.h"

dType mux_binary(dType din[N_REGS], sType sel)
{
    return din[sel];
}
