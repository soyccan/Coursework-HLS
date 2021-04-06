#include "mux.h"

dType mux_2to1(dType din[2], bool sel)
{
    return sel ? din[0] : din[1];
}
