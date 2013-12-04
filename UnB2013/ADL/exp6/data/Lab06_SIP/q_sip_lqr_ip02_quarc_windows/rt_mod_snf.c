/*
 * rt_mod_snf.c
 *
 * Real-Time Workshop code generation for Simulink model "q_sip_lqr_ip02.mdl".
 *
 * Model Version              : 1.106
 * Real-Time Workshop version : 7.2  (R2008b)  04-Aug-2008
 * C source code generated on : Wed Nov 27 17:12:14 2013
 *
 */

#include "rt_mod_snf.h"
#include "rt_nonfinite.h"
#include <float.h>
#include <math.h>
#include "rt_round_snf.h"

/* Function: rt_mod_snf =======================================================
 * Abstract:
 *   Calls double-precision version of MOD, with guard against domain error
 *   and guards against non-finites
 */
real_T rt_mod_snf(const real_T xr, const real_T yr)
{
  real_T zr, yrf, tr, trf, wr;
  if (yr == 0.0) {
    zr = xr;
  } else if (rtIsInf(xr) || rtIsInf(yr) || rtIsNaN(xr) || rtIsNaN(yr)) {
    zr = (rtNaN);
  } else {
    yrf = floor(yr);
    tr = xr/yr;
    if (yr == yrf) {
      /* Integer denominator.  Use conventional formula.*/
      trf = floor(tr);
      zr = xr - trf*yr;
    } else {
      /* Noninteger denominator. Check for nearly integer quotient.*/
      wr = rt_round_snf(tr);
      if (fabs(tr - wr) <= ((DBL_EPSILON)*fabs(tr))) {
        zr = 0.0;
      } else {
        trf = floor(tr);
        zr = (tr - trf)*yr;
      }
    }
  }

  return zr;
}                                      /* end rt_mod_snf */
