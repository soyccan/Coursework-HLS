#include "max.h"
#include "max_tmpl.h"
void max(int din[N_REGS], int &dout)
{
    dout = max<N_REGS>(din);
}
