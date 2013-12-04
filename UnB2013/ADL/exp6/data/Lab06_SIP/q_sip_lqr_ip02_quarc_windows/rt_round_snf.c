/*
 * rt_round_snf.c
 *
 * Real-Time Workshop code generation for Simulink model "q_sip_lqr_ip02.mdl".
 *
 * Model Version              : 1.106
 * Real-Time Workshop version : 7.2  (R2008b)  04-Aug-2008
 * C source code generated on : Wed Nov 27 17:12:14 2013
 *
 */

#include "rt_round_snf.h"
#include "rt_nonfinite.h"
#include <math.h>

/* Function: rt_round_snf =======================================================
 * Abstract:
 *   Calls double-precision version of ROUND, with guard against domain error
 *   and guards against non-finites
 */
real_T rt_round_snf(const real_T xr)
{
  real_T zr, axr;
  if (rtIsNaN(xr)) {
    zr = xr;
  } else {
    axr = fabs(xr);
    if (axr < 4.5035996273704960E+015) {
      if (xr < 0.0) {
        zr = -floor(axr + 0.5);
      } else {
        zr = floor(axr + 0.5);
      }
    } else {
      zr = xr;
    }
  }

  return zr;
}                                      /* end rt_round_snf */
