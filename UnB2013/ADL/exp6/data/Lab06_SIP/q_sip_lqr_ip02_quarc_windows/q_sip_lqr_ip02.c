/*
 * q_sip_lqr_ip02.c
 *
 * Real-Time Workshop code generation for Simulink model "q_sip_lqr_ip02.mdl".
 *
 * Model Version              : 1.106
 * Real-Time Workshop version : 7.2  (R2008b)  04-Aug-2008
 * C source code generated on : Wed Nov 27 17:12:14 2013
 */

#include "q_sip_lqr_ip02.h"
#include "q_sip_lqr_ip02_private.h"
#include <stdio.h>
#include "q_sip_lqr_ip02_dt.h"

/* Block signals (auto storage) */
BlockIO_q_sip_lqr_ip02 q_sip_lqr_ip02_B;

/* Continuous states */
ContinuousStates_q_sip_lqr_ip02 q_sip_lqr_ip02_X;

/* Block states (auto storage) */
D_Work_q_sip_lqr_ip02 q_sip_lqr_ip02_DWork;

/* Real-time model */
RT_MODEL_q_sip_lqr_ip02 q_sip_lqr_ip02_M_;
RT_MODEL_q_sip_lqr_ip02 *q_sip_lqr_ip02_M = &q_sip_lqr_ip02_M_;

/* This function updates continuous states using the ODE4 fixed-step
 * solver algorithm
 */
static void rt_ertODEUpdateContinuousStates(RTWSolverInfo *si )
{
  time_T t = rtsiGetT(si);
  time_T tnew = rtsiGetSolverStopTime(si);
  time_T h = rtsiGetStepSize(si);
  real_T *x = rtsiGetContStates(si);
  ODE4_IntgData *id = (ODE4_IntgData *)rtsiGetSolverData(si);
  real_T *y = id->y;
  real_T *f0 = id->f[0];
  real_T *f1 = id->f[1];
  real_T *f2 = id->f[2];
  real_T *f3 = id->f[3];
  real_T temp;
  int_T i;
  int_T nXc = 8;
  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);

  /* Save the state values at time t in y, we'll use x as ynew. */
  (void) memcpy(y,x,
                nXc*sizeof(real_T));

  /* Assumes that rtsiSetT and ModelOutputs are up-to-date */
  /* f0 = f(t,y) */
  rtsiSetdX(si, f0);
  q_sip_lqr_ip02_derivatives();

  /* f1 = f(t + (h/2), y + (h/2)*f0) */
  temp = 0.5 * h;
  for (i = 0; i < nXc; i++)
    x[i] = y[i] + (temp*f0[i]);
  rtsiSetT(si, t + temp);
  rtsiSetdX(si, f1);
  q_sip_lqr_ip02_output(0);
  q_sip_lqr_ip02_derivatives();

  /* f2 = f(t + (h/2), y + (h/2)*f1) */
  for (i = 0; i < nXc; i++)
    x[i] = y[i] + (temp*f1[i]);
  rtsiSetdX(si, f2);
  q_sip_lqr_ip02_output(0);
  q_sip_lqr_ip02_derivatives();

  /* f3 = f(t + h, y + h*f2) */
  for (i = 0; i < nXc; i++)
    x[i] = y[i] + (h*f2[i]);
  rtsiSetT(si, tnew);
  rtsiSetdX(si, f3);
  q_sip_lqr_ip02_output(0);
  q_sip_lqr_ip02_derivatives();

  /* tnew = t + h
     ynew = y + (h/6)*(f0 + 2*f1 + 2*f2 + 2*f3) */
  temp = h / 6.0;
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + temp*(f0[i] + 2.0*f1[i] + 2.0*f2[i] + f3[i]);
  }

  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

/* Model output function */
void q_sip_lqr_ip02_output(int_T tid)
{
  /* local block i/o variables */
  real_T rtb_SquareWave;
  real_T rtb_RelationalOperator1;
  real_T rtb_LogicalOperator;
  real_T rtb_EncoderInput0CartPositionEn;
  real_T rtb_EncoderInput0CartPosition_k;
  real_T rtb_MathFunction;
  real_T rtb_Sum2[4];
  real_T rtb_u1001;
  real_T rtb_u1005;
  boolean_T rtb_Compare;
  boolean_T rtb_Compare_h;
  boolean_T rtb_Compare_d;
  boolean_T rtb_Compare_p;

  /* Update absolute time of base rate at minor time step */
  if (rtmIsMinorTimeStep(q_sip_lqr_ip02_M)) {
    q_sip_lqr_ip02_M->Timing.t[0] = rtsiGetT(&q_sip_lqr_ip02_M->solverInfo);
  }

  if (rtmIsMajorTimeStep(q_sip_lqr_ip02_M)) {
    /* set solver stop time */
    rtsiSetSolverStopTime(&q_sip_lqr_ip02_M->solverInfo,
                          ((q_sip_lqr_ip02_M->Timing.clockTick0+1)*
      q_sip_lqr_ip02_M->Timing.stepSize0));
  }                                    /* end MajorTimeStep */

  /* Reset subsysRan breadcrumbs */
  srClearBC(q_sip_lqr_ip02_DWork.CartPendulumAngleWatchdog_Subsy);
  srClearBC(q_sip_lqr_ip02_DWork.Holdsstatesonceenabled_SubsysRa);
  srClearBC(q_sip_lqr_ip02_DWork.CartPositionWatchdog_SubsysRanB);

  {
    real_T rtb_ganho_sentido;
    real_T rtb_TmpHiddenBufferAt11001Inp_0;
    real_T rtb_TmpHiddenBufferAt11001Inp_1;
    real_T rtb_TmpHiddenBufferAt11001Inp_2;
    real_T rtb_TmpHiddenBufferAt11001Inp_3;
    real_T rtb_u100_idx;
    real_T rtb_u100_idx_0;
    real_T rtb_u100_idx_1;
    real_T rtb_u100_idx_2;
    if (rtmIsMajorTimeStep(q_sip_lqr_ip02_M) &&
        q_sip_lqr_ip02_M->Timing.TaskCounters.TID[1] == 0) {
      /* S-Function Block: q_sip_lqr_ip02/SIP + IP02: Actual Plant/IP02 /Encoder Input #0: Cart Position Encoder Input #1: Pendulum Angle Analog Input #3 Ball Position (hil_read_timebase_block) */
      {
        t_error result;
        result = hil_task_read
          (q_sip_lqr_ip02_DWork.EncoderInput0CartPositionEnco_p, 1,
           &q_sip_lqr_ip02_DWork.EncoderInput0CartPositionEncode,
           &q_sip_lqr_ip02_DWork.EncoderInput0CartPositionEnco_g[0],
           NULL,
           NULL
           );
        if (result < 0) {
          msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
            (_rt_error_message));
          rtmSetErrorStatus(q_sip_lqr_ip02_M, _rt_error_message);
        } else {
          rtb_EncoderInput0CartPositionEn =
            q_sip_lqr_ip02_DWork.EncoderInput0CartPositionEncode;
          rtb_EncoderInput0CartPosition_k =
            q_sip_lqr_ip02_DWork.EncoderInput0CartPositionEnco_g[0];
          rtb_MathFunction =
            q_sip_lqr_ip02_DWork.EncoderInput0CartPositionEnco_g[1];
        }
      }

      /* Gain: '<S5>/Conversion to m' */
      q_sip_lqr_ip02_B.Conversiontom = q_sip_lqr_ip02_P.Conversiontom_Gain *
        rtb_EncoderInput0CartPosition_k;

      /* Outputs for enable SubSystem: '<S5>/Cart Position Watchdog' incorporates:
       *  Constant: '<S5>/Constant'
       *  EnablePort: '<S11>/Enable'
       */
      if (rtmIsMajorTimeStep(q_sip_lqr_ip02_M) &&
          q_sip_lqr_ip02_M->Timing.TaskCounters.TID[1] == 0) {
        if (rtmIsMajorTimeStep(q_sip_lqr_ip02_M)) {
          if (q_sip_lqr_ip02_P.Constant_Value > 0.0) {
            if (q_sip_lqr_ip02_DWork.CartPositionWatchdog_MODE ==
                SUBSYS_DISABLED) {
              q_sip_lqr_ip02_DWork.CartPositionWatchdog_MODE = SUBSYS_ENABLED;
            }
          } else {
            if (q_sip_lqr_ip02_DWork.CartPositionWatchdog_MODE == SUBSYS_ENABLED)
            {
              q_sip_lqr_ip02_DWork.CartPositionWatchdog_MODE = SUBSYS_DISABLED;
            }
          }
        }

        if (q_sip_lqr_ip02_DWork.CartPositionWatchdog_MODE == SUBSYS_ENABLED) {
          /* RelationalOperator: '<S11>/Check Maximum Allowed Position' incorporates:
           *  Constant: '<S11>/X MAX'
           */
          q_sip_lqr_ip02_B.CheckMaximumAllowedPosition = (real_T)
            (q_sip_lqr_ip02_P.XMAX_Value_e < q_sip_lqr_ip02_B.Conversiontom);

          /* RelationalOperator: '<S15>/Compare' */
          rtb_Compare = (q_sip_lqr_ip02_B.CheckMaximumAllowedPosition != 0.0);

          /* Stop: '<S13>/Stop Simulation' */
          if (rtb_Compare) {
            rtmSetStopRequested(q_sip_lqr_ip02_M, 1);
          }

          /* RelationalOperator: '<S11>/Check Minimum Allowed Position' incorporates:
           *  Constant: '<S11>/X IN'
           */
          q_sip_lqr_ip02_B.CheckMinimumAllowedPosition = (real_T)
            (q_sip_lqr_ip02_B.Conversiontom < q_sip_lqr_ip02_P.XIN_Value);

          /* RelationalOperator: '<S16>/Compare' */
          rtb_Compare_h = (q_sip_lqr_ip02_B.CheckMinimumAllowedPosition != 0.0);

          /* Stop: '<S14>/Stop Simulation' */
          if (rtb_Compare_h) {
            rtmSetStopRequested(q_sip_lqr_ip02_M, 1);
          }

          if (rtmIsMajorTimeStep(q_sip_lqr_ip02_M)) {
            srUpdateBC(q_sip_lqr_ip02_DWork.CartPositionWatchdog_SubsysRanB);
          }
        }
      }

      /* end of Outputs for SubSystem: '<S5>/Cart Position Watchdog' */

      /* Gain: '<S5>/Conversion to rd' */
      q_sip_lqr_ip02_B.Conversiontord = q_sip_lqr_ip02_P.Conversiontord_Gain *
        rtb_MathFunction;

      /* Sum: '<S5>/Sum' incorporates:
       *  Constant: '<S5>/pi'
       */
      q_sip_lqr_ip02_B.Sum = q_sip_lqr_ip02_B.Conversiontord +
        q_sip_lqr_ip02_P.pi_Value;

      /* Gain: '<S12>/Gain' */
      q_sip_lqr_ip02_B.Gain = q_sip_lqr_ip02_P.Gain_Gain *
        q_sip_lqr_ip02_B.Conversiontord;

      /* Gain: '<S5>/m to mm' */
      q_sip_lqr_ip02_B.mtomm = q_sip_lqr_ip02_P.mtomm_Gain *
        q_sip_lqr_ip02_B.Conversiontom;

      /* Gain: '<S5>/ganho_sentido' */
      rtb_ganho_sentido = q_sip_lqr_ip02_P.ganho_sentido_Gain *
        rtb_EncoderInput0CartPositionEn;
    }

    /* SignalGenerator: '<Root>/Square Wave' */
    {
      real_T phase = q_sip_lqr_ip02_P.SquareWave_Frequency*
        q_sip_lqr_ip02_M->Timing.t[0];
      phase = phase-floor(phase);
      rtb_SquareWave = ( phase >= 0.5 ) ?
        q_sip_lqr_ip02_P.SquareWave_Amplitude :
        -q_sip_lqr_ip02_P.SquareWave_Amplitude;
    }

    if (rtmIsMajorTimeStep(q_sip_lqr_ip02_M) &&
        q_sip_lqr_ip02_M->Timing.TaskCounters.TID[1] == 0) {
      /* Gain: '<Root>/gain' */
      q_sip_lqr_ip02_B.gain = q_sip_lqr_ip02_P.gain_Gain * rtb_ganho_sentido;
    }

    /* MultiPortSwitch: '<Root>/Multiport Switch' incorporates:
     *  Constant: '<Root>/Constant'
     *  Constant: '<Root>/Define sinal de entrada'
     *  Gain: '<Root>/Step Amplitude'
     */
    switch ((int32_T)q_sip_lqr_ip02_P.Definesinaldeentrada_Value) {
     case 1:
      rtb_u1001 = q_sip_lqr_ip02_P.Constant_Value_d;
      break;

     case 2:
      rtb_u1001 = q_sip_lqr_ip02_P.StepAmplitude_Gain * rtb_SquareWave;
      break;

     default:
      rtb_u1001 = q_sip_lqr_ip02_B.gain;
      break;
    }

    /* Gain: '<Root>/[ 1; 1; 0; 0 ]' */
    rtb_u100_idx = q_sip_lqr_ip02_P.u100_Gain[0] * rtb_u1001;
    rtb_u100_idx_0 = q_sip_lqr_ip02_P.u100_Gain[1] * rtb_u1001;
    rtb_u100_idx_1 = q_sip_lqr_ip02_P.u100_Gain[2] * rtb_u1001;
    rtb_u100_idx_2 = q_sip_lqr_ip02_P.u100_Gain[3] * rtb_u1001;
    if (rtmIsMajorTimeStep(q_sip_lqr_ip02_M) &&
        q_sip_lqr_ip02_M->Timing.TaskCounters.TID[1] == 0) {
      /* Math: '<S1>/Math Function' incorporates:
       *  Constant: '<S1>/pi1'
       */
      rtb_MathFunction = rt_mod_snf(q_sip_lqr_ip02_B.Conversiontord,
        q_sip_lqr_ip02_P.pi1_Value);

      /* Sum: '<S1>/Sum' incorporates:
       *  Constant: '<S1>/pi'
       */
      q_sip_lqr_ip02_B.Sum_j = rtb_MathFunction - q_sip_lqr_ip02_P.pi_Value_e;
    }

    /* TransferFcn Block: '<S1>/Derivative Filter' */
    rtb_u1001 = q_sip_lqr_ip02_P.DerivativeFilter_C[0]*
      q_sip_lqr_ip02_X.DerivativeFilter_CSTATE[0]
      + q_sip_lqr_ip02_P.DerivativeFilter_C[1]*
      q_sip_lqr_ip02_X.DerivativeFilter_CSTATE[1];

    /* TransferFcn Block: '<S1>/Derivative Filter1' */
    rtb_u1005 = q_sip_lqr_ip02_P.DerivativeFilter1_C[0]*
      q_sip_lqr_ip02_X.DerivativeFilter1_CSTATE[0]
      + q_sip_lqr_ip02_P.DerivativeFilter1_C[1]*
      q_sip_lqr_ip02_X.DerivativeFilter1_CSTATE[1];

    /* SignalConversion: '<S2>/TmpHiddenBufferAt[ 1; 1; 0; 0 ]1Inport1' */
    rtb_TmpHiddenBufferAt11001Inp_0 = q_sip_lqr_ip02_B.Conversiontom;
    rtb_TmpHiddenBufferAt11001Inp_1 = q_sip_lqr_ip02_B.Sum_j;
    rtb_TmpHiddenBufferAt11001Inp_2 = rtb_u1001;
    rtb_TmpHiddenBufferAt11001Inp_3 = rtb_u1005;
    if (rtmIsMajorTimeStep(q_sip_lqr_ip02_M) &&
        q_sip_lqr_ip02_M->Timing.TaskCounters.TID[1] == 0) {
      /* RelationalOperator: '<S1>/Relational Operator1' incorporates:
       *  Constant: '<S1>/pi2'
       */
      rtb_RelationalOperator1 = (real_T)(q_sip_lqr_ip02_P.pi2_Value ==
        q_sip_lqr_ip02_B.Sum_j);

      /* Outputs for enable SubSystem: '<S1>/Holds states once enabled' incorporates:
       *  EnablePort: '<S4>/Enable'
       */
      if (rtmIsMajorTimeStep(q_sip_lqr_ip02_M) &&
          q_sip_lqr_ip02_M->Timing.TaskCounters.TID[1] == 0) {
        if (rtmIsMajorTimeStep(q_sip_lqr_ip02_M)) {
          if (rtb_RelationalOperator1 > 0.0) {
            if (q_sip_lqr_ip02_DWork.Holdsstatesonceenabled_MODE ==
                SUBSYS_DISABLED) {
              q_sip_lqr_ip02_DWork.Holdsstatesonceenabled_MODE = SUBSYS_ENABLED;
            }
          } else {
            if (q_sip_lqr_ip02_DWork.Holdsstatesonceenabled_MODE ==
                SUBSYS_ENABLED) {
              q_sip_lqr_ip02_DWork.Holdsstatesonceenabled_MODE = SUBSYS_DISABLED;
            }
          }
        }

        if (q_sip_lqr_ip02_DWork.Holdsstatesonceenabled_MODE == SUBSYS_ENABLED)
        {
          /* Inport: '<S4>/Trigger' incorporates:
           *  Constant: '<S1>/Switch  Trigger Value'
           */
          q_sip_lqr_ip02_B.Trigger = q_sip_lqr_ip02_P.SwitchTriggerValue_Value;
          if (rtmIsMajorTimeStep(q_sip_lqr_ip02_M)) {
            srUpdateBC(q_sip_lqr_ip02_DWork.Holdsstatesonceenabled_SubsysRa);
          }
        }
      }

      /* end of Outputs for SubSystem: '<S1>/Holds states once enabled' */
    }

    /* Switch: '<S1>/Threshold=0.5' incorporates:
     *  Constant: '<S1>/Vm = 0'
     *  Saturate: '<Root>/Amplifier Voltage Limit'
     */
    if (q_sip_lqr_ip02_B.Trigger >= q_sip_lqr_ip02_P.Threshold05_Threshold) {
      /* Gain: '<Root>/(//m)1' incorporates:
       *  Sum: '<Root>/Sum1'
       */
      rtb_ganho_sentido = (((rtb_u100_idx - rtb_TmpHiddenBufferAt11001Inp_0) *
                            q_sip_lqr_ip02_P.m1_Gain[0] + (rtb_u100_idx_0 -
        rtb_TmpHiddenBufferAt11001Inp_1) * q_sip_lqr_ip02_P.m1_Gain[1]) +
                           (rtb_u100_idx_1 - rtb_TmpHiddenBufferAt11001Inp_2) *
                           q_sip_lqr_ip02_P.m1_Gain[2]) + (rtb_u100_idx_2 -
        rtb_TmpHiddenBufferAt11001Inp_3) * q_sip_lqr_ip02_P.m1_Gain[3];
      rtb_u1005 = rt_SATURATE(rtb_ganho_sentido,
        q_sip_lqr_ip02_P.AmplifierVoltageLimit_LowerSat,
        q_sip_lqr_ip02_P.AmplifierVoltageLimit_UpperSat);
    } else {
      rtb_u1005 = q_sip_lqr_ip02_P.Vm0_Value;
    }

    /* Gain: '<S5>/Amplifier Gain Pre-Compensation' */
    rtb_u1005 *= q_sip_lqr_ip02_P.AmplifierGainPreCompensation_Ga;

    /* Saturate: '<S5>/DAC Limit' */
    q_sip_lqr_ip02_B.DACLimit = rt_SATURATE(rtb_u1005,
      q_sip_lqr_ip02_P.DACLimit_LowerSat, q_sip_lqr_ip02_P.DACLimit_UpperSat);
    if (rtmIsMajorTimeStep(q_sip_lqr_ip02_M) &&
        q_sip_lqr_ip02_M->Timing.TaskCounters.TID[1] == 0) {
      /* S-Function Block: q_sip_lqr_ip02/SIP + IP02: Actual Plant/IP02 /Analog Output #0: To Amplifier Driving the Motor (hil_write_analog_block) */
      {
        t_error result;
        result = hil_write_analog(q_sip_lqr_ip02_DWork.HILInitialize_Card,
          &q_sip_lqr_ip02_P.AnalogOutput0ToAmplifierDriving, 1,
          &q_sip_lqr_ip02_B.DACLimit);
        if (result < 0) {
          msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
            (_rt_error_message));
          rtmSetErrorStatus(q_sip_lqr_ip02_M, _rt_error_message);
        }
      }
    }

    /* Gain: '<S5>/Amplifier Gain' */
    q_sip_lqr_ip02_B.AmplifierGain = q_sip_lqr_ip02_P.AmplifierGain_Gain *
      q_sip_lqr_ip02_B.DACLimit;
    if (rtmIsMajorTimeStep(q_sip_lqr_ip02_M) &&
        q_sip_lqr_ip02_M->Timing.TaskCounters.TID[1] == 0) {
      /* S-Function Block: q_sip_lqr_ip02/SIP + IP02: Actual Plant/IP02 /HIL Write Digital (hil_write_digital_block) */
      {
        t_error result;
        q_sip_lqr_ip02_DWork.HILWriteDigital_Buffer[0] =
          (q_sip_lqr_ip02_P.EnableVoltPAQX2X4_Value[0] != 0);
        q_sip_lqr_ip02_DWork.HILWriteDigital_Buffer[1] =
          (q_sip_lqr_ip02_P.EnableVoltPAQX2X4_Value[1] != 0);
        q_sip_lqr_ip02_DWork.HILWriteDigital_Buffer[2] =
          (q_sip_lqr_ip02_P.EnableVoltPAQX2X4_Value[2] != 0);
        q_sip_lqr_ip02_DWork.HILWriteDigital_Buffer[3] =
          (q_sip_lqr_ip02_P.EnableVoltPAQX2X4_Value[3] != 0);
        result = hil_write_digital(q_sip_lqr_ip02_DWork.HILInitialize_Card,
          q_sip_lqr_ip02_P.HILWriteDigital_Channels, 4,
          &q_sip_lqr_ip02_DWork.HILWriteDigital_Buffer[0]);
        if (result < 0) {
          msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
            (_rt_error_message));
          rtmSetErrorStatus(q_sip_lqr_ip02_M, _rt_error_message);
        }
      }

      /* Logic: '<S1>/Logical Operator' incorporates:
       *  Constant: '<S1>/Constant1'
       */
      rtb_LogicalOperator = (real_T)((q_sip_lqr_ip02_B.Trigger != 0.0) &&
        (q_sip_lqr_ip02_P.Constant1_Value != 0.0));

      /* Outputs for enable SubSystem: '<S1>/Cart Pendulum Angle Watchdog' incorporates:
       *  EnablePort: '<S3>/Enable'
       */
      if (rtmIsMajorTimeStep(q_sip_lqr_ip02_M) &&
          q_sip_lqr_ip02_M->Timing.TaskCounters.TID[1] == 0) {
        if (rtmIsMajorTimeStep(q_sip_lqr_ip02_M)) {
          if (rtb_LogicalOperator > 0.0) {
            if (q_sip_lqr_ip02_DWork.CartPendulumAngleWatchdog_MODE ==
                SUBSYS_DISABLED) {
              q_sip_lqr_ip02_DWork.CartPendulumAngleWatchdog_MODE =
                SUBSYS_ENABLED;
            }
          } else {
            if (q_sip_lqr_ip02_DWork.CartPendulumAngleWatchdog_MODE ==
                SUBSYS_ENABLED) {
              q_sip_lqr_ip02_DWork.CartPendulumAngleWatchdog_MODE =
                SUBSYS_DISABLED;
            }
          }
        }

        if (q_sip_lqr_ip02_DWork.CartPendulumAngleWatchdog_MODE ==
            SUBSYS_ENABLED) {
          /* Gain: '<S6>/Gain' */
          rtb_ganho_sentido = q_sip_lqr_ip02_P.Gain_Gain_p *
            q_sip_lqr_ip02_B.Sum_j;

          /* RelationalOperator: '<S3>/Check Maximum Allowed Angle' incorporates:
           *  Constant: '<S3>/X MAX'
           */
          q_sip_lqr_ip02_B.CheckMaximumAllowedAngle = (real_T)
            (q_sip_lqr_ip02_P.XMAX_Value < rtb_ganho_sentido);

          /* RelationalOperator: '<S9>/Compare' */
          rtb_Compare_d = (q_sip_lqr_ip02_B.CheckMaximumAllowedAngle != 0.0);

          /* Stop: '<S7>/Stop Simulation' */
          if (rtb_Compare_d) {
            rtmSetStopRequested(q_sip_lqr_ip02_M, 1);
          }

          /* RelationalOperator: '<S3>/Check Minimum Allowed Angle' incorporates:
           *  Constant: '<S3>/X MIN'
           */
          q_sip_lqr_ip02_B.CheckMinimumAllowedAngle = (real_T)(rtb_ganho_sentido
            < q_sip_lqr_ip02_P.XMIN_Value);

          /* RelationalOperator: '<S10>/Compare' */
          rtb_Compare_p = (q_sip_lqr_ip02_B.CheckMinimumAllowedAngle != 0.0);

          /* Stop: '<S8>/Stop Simulation' */
          if (rtb_Compare_p) {
            rtmSetStopRequested(q_sip_lqr_ip02_M, 1);
          }

          if (rtmIsMajorTimeStep(q_sip_lqr_ip02_M)) {
            srUpdateBC(q_sip_lqr_ip02_DWork.CartPendulumAngleWatchdog_Subsy);
          }
        }
      }

      /* end of Outputs for SubSystem: '<S1>/Cart Pendulum Angle Watchdog' */
    }

    /* Gain: '<S2>/[ 1; 1; 0; 0 ]5' */
    rtb_u1005 = ((q_sip_lqr_ip02_P.u1005_Gain[0] * rtb_u100_idx +
                  q_sip_lqr_ip02_P.u1005_Gain[1] * rtb_u100_idx_0) +
                 q_sip_lqr_ip02_P.u1005_Gain[2] * rtb_u100_idx_1) +
      q_sip_lqr_ip02_P.u1005_Gain[3] * rtb_u100_idx_2;

    /* Gain: '<S2>/[ 1; 1; 0; 0 ]1' */
    rtb_u1001 = ((q_sip_lqr_ip02_P.u1001_Gain[0] *
                  rtb_TmpHiddenBufferAt11001Inp_0 + q_sip_lqr_ip02_P.u1001_Gain
                  [1] * rtb_TmpHiddenBufferAt11001Inp_1) +
                 q_sip_lqr_ip02_P.u1001_Gain[2] *
                 rtb_TmpHiddenBufferAt11001Inp_2) + q_sip_lqr_ip02_P.u1001_Gain
      [3] * rtb_TmpHiddenBufferAt11001Inp_3;

    /* StateSpace Block: '<Root>/SIP + IP01_2: State-Space Model' */
    {
      rtb_Sum2[0] = (q_sip_lqr_ip02_P.SIPIP01_2StateSpaceModel_C[0])*
        q_sip_lqr_ip02_X.SIPIP01_2StateSpaceModel_CSTATE[0];
      rtb_Sum2[1] = (q_sip_lqr_ip02_P.SIPIP01_2StateSpaceModel_C[1])*
        q_sip_lqr_ip02_X.SIPIP01_2StateSpaceModel_CSTATE[1];
      rtb_Sum2[2] = (q_sip_lqr_ip02_P.SIPIP01_2StateSpaceModel_C[2])*
        q_sip_lqr_ip02_X.SIPIP01_2StateSpaceModel_CSTATE[2];
      rtb_Sum2[3] = (q_sip_lqr_ip02_P.SIPIP01_2StateSpaceModel_C[3])*
        q_sip_lqr_ip02_X.SIPIP01_2StateSpaceModel_CSTATE[3];
    }

    /* Gain: '<S2>/m To mm' incorporates:
     *  Gain: '<S2>/[ 1; 1; 0; 0 ]3'
     */
    q_sip_lqr_ip02_B.mTomm[0] = q_sip_lqr_ip02_P.mTomm_Gain * rtb_u1005;
    q_sip_lqr_ip02_B.mTomm[1] = q_sip_lqr_ip02_P.mTomm_Gain * rtb_u1001;
    q_sip_lqr_ip02_B.mTomm[2] = (((q_sip_lqr_ip02_P.u1003_Gain[0] * rtb_Sum2[0]
      + q_sip_lqr_ip02_P.u1003_Gain[1] * rtb_Sum2[1]) +
      q_sip_lqr_ip02_P.u1003_Gain[2] * rtb_Sum2[2]) +
      q_sip_lqr_ip02_P.u1003_Gain[3] * rtb_Sum2[3]) *
      q_sip_lqr_ip02_P.mTomm_Gain;
    if (rtmIsMajorTimeStep(q_sip_lqr_ip02_M) &&
        q_sip_lqr_ip02_M->Timing.TaskCounters.TID[1] == 0) {
    }

    /* Gain: '<S17>/Gain' incorporates:
     *  Gain: '<S2>/[ 1; 1; 0; 0 ]2'
     *  Gain: '<S2>/[ 1; 1; 0; 0 ]4'
     */
    q_sip_lqr_ip02_B.Gain_d[0] = (((q_sip_lqr_ip02_P.u1002_Gain[0] *
      rtb_TmpHiddenBufferAt11001Inp_0 + q_sip_lqr_ip02_P.u1002_Gain[1] *
      rtb_TmpHiddenBufferAt11001Inp_1) + q_sip_lqr_ip02_P.u1002_Gain[2] *
      rtb_TmpHiddenBufferAt11001Inp_2) + q_sip_lqr_ip02_P.u1002_Gain[3] *
      rtb_TmpHiddenBufferAt11001Inp_3) * q_sip_lqr_ip02_P.Gain_Gain_f;
    q_sip_lqr_ip02_B.Gain_d[1] = (((q_sip_lqr_ip02_P.u1004_Gain[0] * rtb_Sum2[0]
      + q_sip_lqr_ip02_P.u1004_Gain[1] * rtb_Sum2[1]) +
      q_sip_lqr_ip02_P.u1004_Gain[2] * rtb_Sum2[2]) +
      q_sip_lqr_ip02_P.u1004_Gain[3] * rtb_Sum2[3]) *
      q_sip_lqr_ip02_P.Gain_Gain_f;
    if (rtmIsMajorTimeStep(q_sip_lqr_ip02_M) &&
        q_sip_lqr_ip02_M->Timing.TaskCounters.TID[1] == 0) {
    }

    /* Gain: '<S2>/m To mm1' */
    q_sip_lqr_ip02_B.mTomm1 = q_sip_lqr_ip02_P.mTomm1_Gain * rtb_u1001;
    if (rtmIsMajorTimeStep(q_sip_lqr_ip02_M) &&
        q_sip_lqr_ip02_M->Timing.TaskCounters.TID[1] == 0) {
    }

    /* Gain: '<S2>/m To mm2' */
    q_sip_lqr_ip02_B.mTomm2 = q_sip_lqr_ip02_P.mTomm2_Gain * rtb_u1005;
    if (rtmIsMajorTimeStep(q_sip_lqr_ip02_M) &&
        q_sip_lqr_ip02_M->Timing.TaskCounters.TID[1] == 0) {
    }

    /* Sum: '<Root>/Sum2' */
    rtb_Sum2[0] = rtb_u100_idx - rtb_Sum2[0];
    rtb_Sum2[1] = rtb_u100_idx_0 - rtb_Sum2[1];
    rtb_Sum2[2] = rtb_u100_idx_1 - rtb_Sum2[2];
    rtb_Sum2[3] = rtb_u100_idx_2 - rtb_Sum2[3];

    /* Gain: '<Root>/(//m)2' */
    rtb_ganho_sentido = ((q_sip_lqr_ip02_P.m2_Gain[0] * rtb_Sum2[0] +
                          q_sip_lqr_ip02_P.m2_Gain[1] * rtb_Sum2[1]) +
                         q_sip_lqr_ip02_P.m2_Gain[2] * rtb_Sum2[2]) +
      q_sip_lqr_ip02_P.m2_Gain[3] * rtb_Sum2[3];

    /* Saturate: '<Root>/Sim: Amplifier Voltage Limit' */
    q_sip_lqr_ip02_B.SimAmplifierVoltageLimit = rt_SATURATE(rtb_ganho_sentido,
      q_sip_lqr_ip02_P.SimAmplifierVoltageLimit_LowerS,
      q_sip_lqr_ip02_P.SimAmplifierVoltageLimit_UpperS);
  }

  /* tid is required for a uniform function interface.
   * Argument tid is not used in the function. */
  UNUSED_PARAMETER(tid);
}

/* Model update function */
void q_sip_lqr_ip02_update(int_T tid)
{
  if (rtmIsMajorTimeStep(q_sip_lqr_ip02_M)) {
    rt_ertODEUpdateContinuousStates(&q_sip_lqr_ip02_M->solverInfo);
  }

  /* Update absolute time for base rate */
  if (!(++q_sip_lqr_ip02_M->Timing.clockTick0))
    ++q_sip_lqr_ip02_M->Timing.clockTickH0;
  q_sip_lqr_ip02_M->Timing.t[0] = q_sip_lqr_ip02_M->Timing.clockTick0 *
    q_sip_lqr_ip02_M->Timing.stepSize0 + q_sip_lqr_ip02_M->Timing.clockTickH0 *
    q_sip_lqr_ip02_M->Timing.stepSize0 * 4294967296.0;
  if (rtmIsMajorTimeStep(q_sip_lqr_ip02_M) &&
      q_sip_lqr_ip02_M->Timing.TaskCounters.TID[1] == 0) {
    /* Update absolute timer for sample time: [0.001s, 0.0s] */
    if (!(++q_sip_lqr_ip02_M->Timing.clockTick1))
      ++q_sip_lqr_ip02_M->Timing.clockTickH1;
    q_sip_lqr_ip02_M->Timing.t[1] = q_sip_lqr_ip02_M->Timing.clockTick1 *
      q_sip_lqr_ip02_M->Timing.stepSize1 + q_sip_lqr_ip02_M->Timing.clockTickH1 *
      q_sip_lqr_ip02_M->Timing.stepSize1 * 4294967296.0;
  }

  /* tid is required for a uniform function interface.
   * Argument tid is not used in the function. */
  UNUSED_PARAMETER(tid);
}

/* Derivatives for root system: '<Root>' */
void q_sip_lqr_ip02_derivatives(void)
{
  /* TransferFcn Block: '<S1>/Derivative Filter' */
  {
    ((StateDerivatives_q_sip_lqr_ip02 *) q_sip_lqr_ip02_M->ModelData.derivs)
      ->DerivativeFilter_CSTATE[0] = q_sip_lqr_ip02_B.Conversiontom;
    ((StateDerivatives_q_sip_lqr_ip02 *) q_sip_lqr_ip02_M->ModelData.derivs)
      ->DerivativeFilter_CSTATE[0] += (q_sip_lqr_ip02_P.DerivativeFilter_A[0])*
      q_sip_lqr_ip02_X.DerivativeFilter_CSTATE[0]
      + (q_sip_lqr_ip02_P.DerivativeFilter_A[1])*
      q_sip_lqr_ip02_X.DerivativeFilter_CSTATE[1];
    ((StateDerivatives_q_sip_lqr_ip02 *) q_sip_lqr_ip02_M->ModelData.derivs)
      ->DerivativeFilter_CSTATE[1]= q_sip_lqr_ip02_X.DerivativeFilter_CSTATE[0];
  }

  /* TransferFcn Block: '<S1>/Derivative Filter1' */
  {
    ((StateDerivatives_q_sip_lqr_ip02 *) q_sip_lqr_ip02_M->ModelData.derivs)
      ->DerivativeFilter1_CSTATE[0] = q_sip_lqr_ip02_B.Conversiontord;
    ((StateDerivatives_q_sip_lqr_ip02 *) q_sip_lqr_ip02_M->ModelData.derivs)
      ->DerivativeFilter1_CSTATE[0] += (q_sip_lqr_ip02_P.DerivativeFilter1_A[0])*
      q_sip_lqr_ip02_X.DerivativeFilter1_CSTATE[0]
      + (q_sip_lqr_ip02_P.DerivativeFilter1_A[1])*
      q_sip_lqr_ip02_X.DerivativeFilter1_CSTATE[1];
    ((StateDerivatives_q_sip_lqr_ip02 *) q_sip_lqr_ip02_M->ModelData.derivs)
      ->DerivativeFilter1_CSTATE[1]= q_sip_lqr_ip02_X.DerivativeFilter1_CSTATE[0];
  }

  /* StateSpace Block: '<Root>/SIP + IP01_2: State-Space Model' */
  {
    ((StateDerivatives_q_sip_lqr_ip02 *) q_sip_lqr_ip02_M->ModelData.derivs)
      ->SIPIP01_2StateSpaceModel_CSTATE[0] =
      (q_sip_lqr_ip02_P.SIPIP01_2StateSpaceModel_A[0])*
      q_sip_lqr_ip02_X.SIPIP01_2StateSpaceModel_CSTATE[2];
    ((StateDerivatives_q_sip_lqr_ip02 *) q_sip_lqr_ip02_M->ModelData.derivs)
      ->SIPIP01_2StateSpaceModel_CSTATE[1] =
      (q_sip_lqr_ip02_P.SIPIP01_2StateSpaceModel_A[1])*
      q_sip_lqr_ip02_X.SIPIP01_2StateSpaceModel_CSTATE[3];
    ((StateDerivatives_q_sip_lqr_ip02 *) q_sip_lqr_ip02_M->ModelData.derivs)
      ->SIPIP01_2StateSpaceModel_CSTATE[2] =
      (q_sip_lqr_ip02_P.SIPIP01_2StateSpaceModel_B[0])*
      q_sip_lqr_ip02_B.SimAmplifierVoltageLimit;
    ((StateDerivatives_q_sip_lqr_ip02 *) q_sip_lqr_ip02_M->ModelData.derivs)
      ->SIPIP01_2StateSpaceModel_CSTATE[2] +=
      (q_sip_lqr_ip02_P.SIPIP01_2StateSpaceModel_A[2])*
      q_sip_lqr_ip02_X.SIPIP01_2StateSpaceModel_CSTATE[1]
      + (q_sip_lqr_ip02_P.SIPIP01_2StateSpaceModel_A[3])*
      q_sip_lqr_ip02_X.SIPIP01_2StateSpaceModel_CSTATE[2]
      + (q_sip_lqr_ip02_P.SIPIP01_2StateSpaceModel_A[4])*
      q_sip_lqr_ip02_X.SIPIP01_2StateSpaceModel_CSTATE[3];
    ((StateDerivatives_q_sip_lqr_ip02 *) q_sip_lqr_ip02_M->ModelData.derivs)
      ->SIPIP01_2StateSpaceModel_CSTATE[3] =
      (q_sip_lqr_ip02_P.SIPIP01_2StateSpaceModel_B[1])*
      q_sip_lqr_ip02_B.SimAmplifierVoltageLimit;
    ((StateDerivatives_q_sip_lqr_ip02 *) q_sip_lqr_ip02_M->ModelData.derivs)
      ->SIPIP01_2StateSpaceModel_CSTATE[3] +=
      (q_sip_lqr_ip02_P.SIPIP01_2StateSpaceModel_A[5])*
      q_sip_lqr_ip02_X.SIPIP01_2StateSpaceModel_CSTATE[1]
      + (q_sip_lqr_ip02_P.SIPIP01_2StateSpaceModel_A[6])*
      q_sip_lqr_ip02_X.SIPIP01_2StateSpaceModel_CSTATE[2]
      + (q_sip_lqr_ip02_P.SIPIP01_2StateSpaceModel_A[7])*
      q_sip_lqr_ip02_X.SIPIP01_2StateSpaceModel_CSTATE[3];
  }
}

/* Model initialize function */
void q_sip_lqr_ip02_initialize(boolean_T firstTime)
{
  (void)firstTime;

  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)q_sip_lqr_ip02_M,0,
                sizeof(RT_MODEL_q_sip_lqr_ip02));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&q_sip_lqr_ip02_M->solverInfo,
                          &q_sip_lqr_ip02_M->Timing.simTimeStep);
    rtsiSetTPtr(&q_sip_lqr_ip02_M->solverInfo, &rtmGetTPtr(q_sip_lqr_ip02_M));
    rtsiSetStepSizePtr(&q_sip_lqr_ip02_M->solverInfo,
                       &q_sip_lqr_ip02_M->Timing.stepSize0);
    rtsiSetdXPtr(&q_sip_lqr_ip02_M->solverInfo,
                 &q_sip_lqr_ip02_M->ModelData.derivs);
    rtsiSetContStatesPtr(&q_sip_lqr_ip02_M->solverInfo,
                         &q_sip_lqr_ip02_M->ModelData.contStates);
    rtsiSetNumContStatesPtr(&q_sip_lqr_ip02_M->solverInfo,
      &q_sip_lqr_ip02_M->Sizes.numContStates);
    rtsiSetErrorStatusPtr(&q_sip_lqr_ip02_M->solverInfo, (&rtmGetErrorStatus
      (q_sip_lqr_ip02_M)));
    rtsiSetRTModelPtr(&q_sip_lqr_ip02_M->solverInfo, q_sip_lqr_ip02_M);
  }

  rtsiSetSimTimeStep(&q_sip_lqr_ip02_M->solverInfo, MAJOR_TIME_STEP);
  q_sip_lqr_ip02_M->ModelData.intgData.y = q_sip_lqr_ip02_M->ModelData.odeY;
  q_sip_lqr_ip02_M->ModelData.intgData.f[0] = q_sip_lqr_ip02_M->ModelData.odeF[0];
  q_sip_lqr_ip02_M->ModelData.intgData.f[1] = q_sip_lqr_ip02_M->ModelData.odeF[1];
  q_sip_lqr_ip02_M->ModelData.intgData.f[2] = q_sip_lqr_ip02_M->ModelData.odeF[2];
  q_sip_lqr_ip02_M->ModelData.intgData.f[3] = q_sip_lqr_ip02_M->ModelData.odeF[3];
  q_sip_lqr_ip02_M->ModelData.contStates = ((real_T *) &q_sip_lqr_ip02_X);
  rtsiSetSolverData(&q_sip_lqr_ip02_M->solverInfo, (void *)
                    &q_sip_lqr_ip02_M->ModelData.intgData);
  rtsiSetSolverName(&q_sip_lqr_ip02_M->solverInfo,"ode4");

  /* Initialize timing info */
  {
    int_T *mdlTsMap = q_sip_lqr_ip02_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    q_sip_lqr_ip02_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    q_sip_lqr_ip02_M->Timing.sampleTimes =
      (&q_sip_lqr_ip02_M->Timing.sampleTimesArray[0]);
    q_sip_lqr_ip02_M->Timing.offsetTimes =
      (&q_sip_lqr_ip02_M->Timing.offsetTimesArray[0]);

    /* task periods */
    q_sip_lqr_ip02_M->Timing.sampleTimes[0] = (0.0);
    q_sip_lqr_ip02_M->Timing.sampleTimes[1] = (0.001);

    /* task offsets */
    q_sip_lqr_ip02_M->Timing.offsetTimes[0] = (0.0);
    q_sip_lqr_ip02_M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(q_sip_lqr_ip02_M, &q_sip_lqr_ip02_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = q_sip_lqr_ip02_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    q_sip_lqr_ip02_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(q_sip_lqr_ip02_M, -1);
  q_sip_lqr_ip02_M->Timing.stepSize0 = 0.001;
  q_sip_lqr_ip02_M->Timing.stepSize1 = 0.001;

  /* external mode info */
  q_sip_lqr_ip02_M->Sizes.checksums[0] = (2621379898U);
  q_sip_lqr_ip02_M->Sizes.checksums[1] = (2407721752U);
  q_sip_lqr_ip02_M->Sizes.checksums[2] = (2862449952U);
  q_sip_lqr_ip02_M->Sizes.checksums[3] = (711050574U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[6];
    q_sip_lqr_ip02_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    systemRan[3] = (sysRanDType *)
      &q_sip_lqr_ip02_DWork.CartPendulumAngleWatchdog_Subsy;
    systemRan[4] = (sysRanDType *)
      &q_sip_lqr_ip02_DWork.Holdsstatesonceenabled_SubsysRa;
    systemRan[5] = (sysRanDType *)
      &q_sip_lqr_ip02_DWork.CartPositionWatchdog_SubsysRanB;
    rteiSetModelMappingInfoPtr(&rt_ExtModeInfo,
      &q_sip_lqr_ip02_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(&rt_ExtModeInfo, q_sip_lqr_ip02_M->Sizes.checksums);
    rteiSetTPtr(&rt_ExtModeInfo, rtmGetTPtr(q_sip_lqr_ip02_M));
  }

  q_sip_lqr_ip02_M->solverInfoPtr = (&q_sip_lqr_ip02_M->solverInfo);
  q_sip_lqr_ip02_M->Timing.stepSize = (0.001);
  rtsiSetFixedStepSize(&q_sip_lqr_ip02_M->solverInfo, 0.001);
  rtsiSetSolverMode(&q_sip_lqr_ip02_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  q_sip_lqr_ip02_M->ModelData.blockIO = ((void *) &q_sip_lqr_ip02_B);

  {
    q_sip_lqr_ip02_B.Conversiontom = 0.0;
    q_sip_lqr_ip02_B.Conversiontord = 0.0;
    q_sip_lqr_ip02_B.Sum = 0.0;
    q_sip_lqr_ip02_B.Gain = 0.0;
    q_sip_lqr_ip02_B.mtomm = 0.0;
    q_sip_lqr_ip02_B.gain = 0.0;
    q_sip_lqr_ip02_B.Sum_j = 0.0;
    q_sip_lqr_ip02_B.DACLimit = 0.0;
    q_sip_lqr_ip02_B.AmplifierGain = 0.0;
    q_sip_lqr_ip02_B.mTomm[0] = 0.0;
    q_sip_lqr_ip02_B.mTomm[1] = 0.0;
    q_sip_lqr_ip02_B.mTomm[2] = 0.0;
    q_sip_lqr_ip02_B.Gain_d[0] = 0.0;
    q_sip_lqr_ip02_B.Gain_d[1] = 0.0;
    q_sip_lqr_ip02_B.mTomm1 = 0.0;
    q_sip_lqr_ip02_B.mTomm2 = 0.0;
    q_sip_lqr_ip02_B.SimAmplifierVoltageLimit = 0.0;
    q_sip_lqr_ip02_B.CheckMaximumAllowedPosition = 0.0;
    q_sip_lqr_ip02_B.CheckMinimumAllowedPosition = 0.0;
    q_sip_lqr_ip02_B.Trigger = 0.0;
    q_sip_lqr_ip02_B.CheckMaximumAllowedAngle = 0.0;
    q_sip_lqr_ip02_B.CheckMinimumAllowedAngle = 0.0;
  }

  /* parameters */
  q_sip_lqr_ip02_M->ModelData.defaultParam = ((real_T *) &q_sip_lqr_ip02_P);

  /* states (continuous) */
  {
    real_T *x = (real_T *) &q_sip_lqr_ip02_X;
    q_sip_lqr_ip02_M->ModelData.contStates = (x);
    (void) memset((void *)x,0,
                  sizeof(ContinuousStates_q_sip_lqr_ip02));
  }

  /* states (dwork) */
  q_sip_lqr_ip02_M->Work.dwork = ((void *) &q_sip_lqr_ip02_DWork);
  (void) memset((void *)&q_sip_lqr_ip02_DWork, 0,
                sizeof(D_Work_q_sip_lqr_ip02));

  {
    int_T i;
    for (i = 0; i < 8; i++) {
      q_sip_lqr_ip02_DWork.HILInitialize_AIMinimums[i] = 0.0;
    }
  }

  {
    int_T i;
    for (i = 0; i < 8; i++) {
      q_sip_lqr_ip02_DWork.HILInitialize_AIMaximums[i] = 0.0;
    }
  }

  {
    int_T i;
    for (i = 0; i < 8; i++) {
      q_sip_lqr_ip02_DWork.HILInitialize_AOMinimums[i] = 0.0;
    }
  }

  {
    int_T i;
    for (i = 0; i < 8; i++) {
      q_sip_lqr_ip02_DWork.HILInitialize_AOMaximums[i] = 0.0;
    }
  }

  {
    int_T i;
    for (i = 0; i < 8; i++) {
      q_sip_lqr_ip02_DWork.HILInitialize_AOVoltages[i] = 0.0;
    }
  }

  {
    int_T i;
    for (i = 0; i < 8; i++) {
      q_sip_lqr_ip02_DWork.HILInitialize_FilterFrequency[i] = 0.0;
    }
  }

  {
    int_T i;
    for (i = 0; i < 8; i++) {
      q_sip_lqr_ip02_DWork.HILInitialize_POSortedFreqs[i] = 0.0;
    }
  }

  {
    int_T i;
    for (i = 0; i < 8; i++) {
      q_sip_lqr_ip02_DWork.HILInitialize_POValues[i] = 0.0;
    }
  }

  q_sip_lqr_ip02_DWork.EncoderInput0CartPositionEncode = 0.0;

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo,0,
                  sizeof(dtInfo));
    q_sip_lqr_ip02_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 17;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.B = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.P = &rtPTransTable;
  }
}

/* Model terminate function */
void q_sip_lqr_ip02_terminate(void)
{
  /* S-Function Block: q_sip_lqr_ip02/SIP + IP02: Actual Plant/IP02 /HIL Initialize (hil_initialize_block) */
  {
    t_boolean is_switching;
    t_int result;
    hil_task_stop_all(q_sip_lqr_ip02_DWork.HILInitialize_Card);
    hil_task_delete_all(q_sip_lqr_ip02_DWork.HILInitialize_Card);
    hil_monitor_stop_all(q_sip_lqr_ip02_DWork.HILInitialize_Card);
    hil_monitor_delete_all(q_sip_lqr_ip02_DWork.HILInitialize_Card);
    is_switching = reconfiguration_is_switching_out(_reconfiguration);
    if ((q_sip_lqr_ip02_P.HILInitialize_AOTerminate && !is_switching) ||
        (q_sip_lqr_ip02_P.HILInitialize_AOExit && is_switching)) {
      {
        int_T i1;
        real_T *dw_AOVoltages = &q_sip_lqr_ip02_DWork.HILInitialize_AOVoltages[0];
        for (i1=0; i1 < 8; i1++) {
          dw_AOVoltages[i1] = q_sip_lqr_ip02_P.HILInitialize_AOFinal;
        }
      }

      result = hil_write_analog(q_sip_lqr_ip02_DWork.HILInitialize_Card,
        &q_sip_lqr_ip02_P.HILInitialize_AOChannels[0], 8U,
        &q_sip_lqr_ip02_DWork.HILInitialize_AOVoltages[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(q_sip_lqr_ip02_M, _rt_error_message);
      }
    }

    if ((q_sip_lqr_ip02_P.HILInitialize_DOTerminate && !is_switching) ||
        (q_sip_lqr_ip02_P.HILInitialize_DOExit && is_switching)) {
      {
        int_T i1;
        boolean_T *dw_DOBits = &q_sip_lqr_ip02_DWork.HILInitialize_DOBits[0];
        for (i1=0; i1 < 8; i1++) {
          dw_DOBits[i1] = q_sip_lqr_ip02_P.HILInitialize_DOFinal;
        }
      }

      result = hil_write_digital(q_sip_lqr_ip02_DWork.HILInitialize_Card,
        &q_sip_lqr_ip02_P.HILInitialize_DOChannels[0], 8U, (t_boolean *)
        &q_sip_lqr_ip02_DWork.HILInitialize_DOBits[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(q_sip_lqr_ip02_M, _rt_error_message);
      }
    }

    if ((q_sip_lqr_ip02_P.HILInitialize_POTerminate && !is_switching) ||
        (q_sip_lqr_ip02_P.HILInitialize_POExit && is_switching)) {
      {
        int_T i1;
        real_T *dw_POValues = &q_sip_lqr_ip02_DWork.HILInitialize_POValues[0];
        for (i1=0; i1 < 8; i1++) {
          dw_POValues[i1] = q_sip_lqr_ip02_P.HILInitialize_POFinal;
        }
      }

      result = hil_write_pwm(q_sip_lqr_ip02_DWork.HILInitialize_Card,
        &q_sip_lqr_ip02_P.HILInitialize_POChannels[0], 8U,
        &q_sip_lqr_ip02_DWork.HILInitialize_POValues[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(q_sip_lqr_ip02_M, _rt_error_message);
      }
    }

    hil_close(q_sip_lqr_ip02_DWork.HILInitialize_Card);
    q_sip_lqr_ip02_DWork.HILInitialize_Card = NULL;
  }

  /* External mode */
  rtExtModeShutdown(2);
}

/*========================================================================*
 * Start of GRT compatible call interface                                 *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  q_sip_lqr_ip02_output(tid);
}

void MdlUpdate(int_T tid)
{
  q_sip_lqr_ip02_update(tid);
}

void MdlInitializeSizes(void)
{
  q_sip_lqr_ip02_M->Sizes.numContStates = (8);/* Number of continuous states */
  q_sip_lqr_ip02_M->Sizes.numY = (0);  /* Number of model outputs */
  q_sip_lqr_ip02_M->Sizes.numU = (0);  /* Number of model inputs */
  q_sip_lqr_ip02_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  q_sip_lqr_ip02_M->Sizes.numSampTimes = (2);/* Number of sample times */
  q_sip_lqr_ip02_M->Sizes.numBlocks = (90);/* Number of blocks */
  q_sip_lqr_ip02_M->Sizes.numBlockIO = (19);/* Number of block outputs */
  q_sip_lqr_ip02_M->Sizes.numBlockPrms = (217);/* Sum of parameter "widths" */
}

void MdlInitializeSampleTimes(void)
{
}

void MdlInitialize(void)
{
  /* TransferFcn Block: '<S1>/Derivative Filter' */
  q_sip_lqr_ip02_X.DerivativeFilter_CSTATE[0] = 0.0;
  q_sip_lqr_ip02_X.DerivativeFilter_CSTATE[1] = 0.0;

  /* TransferFcn Block: '<S1>/Derivative Filter1' */
  q_sip_lqr_ip02_X.DerivativeFilter1_CSTATE[0] = 0.0;
  q_sip_lqr_ip02_X.DerivativeFilter1_CSTATE[1] = 0.0;

  /* StateSpace Block: '<Root>/SIP + IP01_2: State-Space Model' */
  q_sip_lqr_ip02_X.SIPIP01_2StateSpaceModel_CSTATE[0] =
    q_sip_lqr_ip02_P.SIPIP01_2StateSpaceModel_X0[0];
  q_sip_lqr_ip02_X.SIPIP01_2StateSpaceModel_CSTATE[1] =
    q_sip_lqr_ip02_P.SIPIP01_2StateSpaceModel_X0[1];
  q_sip_lqr_ip02_X.SIPIP01_2StateSpaceModel_CSTATE[2] =
    q_sip_lqr_ip02_P.SIPIP01_2StateSpaceModel_X0[2];
  q_sip_lqr_ip02_X.SIPIP01_2StateSpaceModel_CSTATE[3] =
    q_sip_lqr_ip02_P.SIPIP01_2StateSpaceModel_X0[3];
}

void MdlStart(void)
{
  /* S-Function Block: q_sip_lqr_ip02/SIP + IP02: Actual Plant/IP02 /HIL Initialize (hil_initialize_block) */
  {
    t_int result;
    t_boolean is_switching;
    result = hil_open("q8_usb", "0", &q_sip_lqr_ip02_DWork.HILInitialize_Card);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(q_sip_lqr_ip02_M, _rt_error_message);
      return;
    }

    is_switching = reconfiguration_is_switching_in(_reconfiguration);
    result = hil_set_card_specific_options
      (q_sip_lqr_ip02_DWork.HILInitialize_Card, "update_rate=normal", 19);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(q_sip_lqr_ip02_M, _rt_error_message);
      return;
    }

    result = hil_watchdog_clear(q_sip_lqr_ip02_DWork.HILInitialize_Card);
    if (result < 0 && result != -QERR_HIL_WATCHDOG_CLEAR) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(q_sip_lqr_ip02_M, _rt_error_message);
      return;
    }

    if ((q_sip_lqr_ip02_P.HILInitialize_AIPStart && !is_switching) ||
        (q_sip_lqr_ip02_P.HILInitialize_AIPEnter && is_switching)) {
      {
        int_T i1;
        real_T *dw_AIMinimums = &q_sip_lqr_ip02_DWork.HILInitialize_AIMinimums[0];
        for (i1=0; i1 < 8; i1++) {
          dw_AIMinimums[i1] = q_sip_lqr_ip02_P.HILInitialize_AILow;
        }
      }

      {
        int_T i1;
        real_T *dw_AIMaximums = &q_sip_lqr_ip02_DWork.HILInitialize_AIMaximums[0];
        for (i1=0; i1 < 8; i1++) {
          dw_AIMaximums[i1] = q_sip_lqr_ip02_P.HILInitialize_AIHigh;
        }
      }

      result = hil_set_analog_input_ranges
        (q_sip_lqr_ip02_DWork.HILInitialize_Card,
         &q_sip_lqr_ip02_P.HILInitialize_AIChannels[0], 8U,
         &q_sip_lqr_ip02_DWork.HILInitialize_AIMinimums[0],
         &q_sip_lqr_ip02_DWork.HILInitialize_AIMaximums[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(q_sip_lqr_ip02_M, _rt_error_message);
        return;
      }
    }

    if ((q_sip_lqr_ip02_P.HILInitialize_AOPStart && !is_switching) ||
        (q_sip_lqr_ip02_P.HILInitialize_AOPEnter && is_switching)) {
      {
        int_T i1;
        real_T *dw_AOMinimums = &q_sip_lqr_ip02_DWork.HILInitialize_AOMinimums[0];
        for (i1=0; i1 < 8; i1++) {
          dw_AOMinimums[i1] = q_sip_lqr_ip02_P.HILInitialize_AOLow;
        }
      }

      {
        int_T i1;
        real_T *dw_AOMaximums = &q_sip_lqr_ip02_DWork.HILInitialize_AOMaximums[0];
        for (i1=0; i1 < 8; i1++) {
          dw_AOMaximums[i1] = q_sip_lqr_ip02_P.HILInitialize_AOHigh;
        }
      }

      result = hil_set_analog_output_ranges
        (q_sip_lqr_ip02_DWork.HILInitialize_Card,
         &q_sip_lqr_ip02_P.HILInitialize_AOChannels[0], 8U,
         &q_sip_lqr_ip02_DWork.HILInitialize_AOMinimums[0],
         &q_sip_lqr_ip02_DWork.HILInitialize_AOMaximums[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(q_sip_lqr_ip02_M, _rt_error_message);
        return;
      }
    }

    if ((q_sip_lqr_ip02_P.HILInitialize_AOStart && !is_switching) ||
        (q_sip_lqr_ip02_P.HILInitialize_AOEnter && is_switching)) {
      {
        int_T i1;
        real_T *dw_AOVoltages = &q_sip_lqr_ip02_DWork.HILInitialize_AOVoltages[0];
        for (i1=0; i1 < 8; i1++) {
          dw_AOVoltages[i1] = q_sip_lqr_ip02_P.HILInitialize_AOInitial;
        }
      }

      result = hil_write_analog(q_sip_lqr_ip02_DWork.HILInitialize_Card,
        &q_sip_lqr_ip02_P.HILInitialize_AOChannels[0], 8U,
        &q_sip_lqr_ip02_DWork.HILInitialize_AOVoltages[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(q_sip_lqr_ip02_M, _rt_error_message);
        return;
      }
    }

    if (q_sip_lqr_ip02_P.HILInitialize_AOReset) {
      {
        int_T i1;
        real_T *dw_AOVoltages = &q_sip_lqr_ip02_DWork.HILInitialize_AOVoltages[0];
        for (i1=0; i1 < 8; i1++) {
          dw_AOVoltages[i1] = q_sip_lqr_ip02_P.HILInitialize_AOWatchdog;
        }
      }

      result = hil_watchdog_set_analog_expiration_state
        (q_sip_lqr_ip02_DWork.HILInitialize_Card,
         &q_sip_lqr_ip02_P.HILInitialize_AOChannels[0], 8U,
         &q_sip_lqr_ip02_DWork.HILInitialize_AOVoltages[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(q_sip_lqr_ip02_M, _rt_error_message);
        return;
      }
    }

    result = hil_set_digital_directions(q_sip_lqr_ip02_DWork.HILInitialize_Card,
      NULL, 0U, &q_sip_lqr_ip02_P.HILInitialize_DOChannels[0], 8U);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(q_sip_lqr_ip02_M, _rt_error_message);
      return;
    }

    if ((q_sip_lqr_ip02_P.HILInitialize_DOStart && !is_switching) ||
        (q_sip_lqr_ip02_P.HILInitialize_DOEnter && is_switching)) {
      {
        int_T i1;
        boolean_T *dw_DOBits = &q_sip_lqr_ip02_DWork.HILInitialize_DOBits[0];
        for (i1=0; i1 < 8; i1++) {
          dw_DOBits[i1] = q_sip_lqr_ip02_P.HILInitialize_DOInitial;
        }
      }

      result = hil_write_digital(q_sip_lqr_ip02_DWork.HILInitialize_Card,
        &q_sip_lqr_ip02_P.HILInitialize_DOChannels[0], 8U, (t_boolean *)
        &q_sip_lqr_ip02_DWork.HILInitialize_DOBits[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(q_sip_lqr_ip02_M, _rt_error_message);
        return;
      }
    }

    if (q_sip_lqr_ip02_P.HILInitialize_DOReset) {
      {
        int_T i1;
        int32_T *dw_DOStates = &q_sip_lqr_ip02_DWork.HILInitialize_DOStates[0];
        for (i1=0; i1 < 8; i1++) {
          dw_DOStates[i1] = q_sip_lqr_ip02_P.HILInitialize_DOWatchdog;
        }
      }

      result = hil_watchdog_set_digital_expiration_state
        (q_sip_lqr_ip02_DWork.HILInitialize_Card,
         &q_sip_lqr_ip02_P.HILInitialize_DOChannels[0], 8U, (const
          t_digital_state *) &q_sip_lqr_ip02_DWork.HILInitialize_DOStates[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(q_sip_lqr_ip02_M, _rt_error_message);
        return;
      }
    }

    if ((q_sip_lqr_ip02_P.HILInitialize_EIPStart && !is_switching) ||
        (q_sip_lqr_ip02_P.HILInitialize_EIPEnter && is_switching)) {
      {
        int_T i1;
        int32_T *dw_QuadratureModes =
          &q_sip_lqr_ip02_DWork.HILInitialize_QuadratureModes[0];
        for (i1=0; i1 < 8; i1++) {
          dw_QuadratureModes[i1] = q_sip_lqr_ip02_P.HILInitialize_EIQuadrature;
        }
      }

      result = hil_set_encoder_quadrature_mode
        (q_sip_lqr_ip02_DWork.HILInitialize_Card,
         &q_sip_lqr_ip02_P.HILInitialize_EIChannels[0], 8U,
         (t_encoder_quadrature_mode *)
         &q_sip_lqr_ip02_DWork.HILInitialize_QuadratureModes[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(q_sip_lqr_ip02_M, _rt_error_message);
        return;
      }
    }

    if ((q_sip_lqr_ip02_P.HILInitialize_EIStart && !is_switching) ||
        (q_sip_lqr_ip02_P.HILInitialize_EIEnter && is_switching)) {
      {
        int_T i1;
        int32_T *dw_InitialEICounts =
          &q_sip_lqr_ip02_DWork.HILInitialize_InitialEICounts[0];
        for (i1=0; i1 < 8; i1++) {
          dw_InitialEICounts[i1] = q_sip_lqr_ip02_P.HILInitialize_EIInitial;
        }
      }

      result = hil_set_encoder_counts(q_sip_lqr_ip02_DWork.HILInitialize_Card,
        &q_sip_lqr_ip02_P.HILInitialize_EIChannels[0], 8U,
        &q_sip_lqr_ip02_DWork.HILInitialize_InitialEICounts[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(q_sip_lqr_ip02_M, _rt_error_message);
        return;
      }
    }

    if ((q_sip_lqr_ip02_P.HILInitialize_POPStart && !is_switching) ||
        (q_sip_lqr_ip02_P.HILInitialize_POPEnter && is_switching)) {
      uint32_T num_duty_cycle_modes = 0;
      uint32_T num_frequency_modes = 0;

      {
        int_T i1;
        int32_T *dw_POModeValues =
          &q_sip_lqr_ip02_DWork.HILInitialize_POModeValues[0];
        for (i1=0; i1 < 8; i1++) {
          dw_POModeValues[i1] = q_sip_lqr_ip02_P.HILInitialize_POModes;
        }
      }

      result = hil_set_pwm_mode(q_sip_lqr_ip02_DWork.HILInitialize_Card,
        &q_sip_lqr_ip02_P.HILInitialize_POChannels[0], 8U, (t_pwm_mode *)
        &q_sip_lqr_ip02_DWork.HILInitialize_POModeValues[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(q_sip_lqr_ip02_M, _rt_error_message);
        return;
      }

      {
        int_T i1;
        const uint32_T *p_HILInitialize_POChannels =
          &q_sip_lqr_ip02_P.HILInitialize_POChannels[0];
        int32_T *dw_POModeValues =
          &q_sip_lqr_ip02_DWork.HILInitialize_POModeValues[0];
        for (i1=0; i1 < 8; i1++) {
          if (dw_POModeValues[i1] == PWM_DUTY_CYCLE_MODE || dw_POModeValues[i1] ==
              PWM_ONE_SHOT_MODE || dw_POModeValues[i1] == PWM_TIME_MODE) {
            q_sip_lqr_ip02_DWork.HILInitialize_POSortedChans[num_duty_cycle_modes]
              = (p_HILInitialize_POChannels[i1]);
            q_sip_lqr_ip02_DWork.HILInitialize_POSortedFreqs[num_duty_cycle_modes]
              = q_sip_lqr_ip02_P.HILInitialize_POFrequency;
            num_duty_cycle_modes++;
          } else {
            q_sip_lqr_ip02_DWork.HILInitialize_POSortedChans[7U -
              num_frequency_modes] = (p_HILInitialize_POChannels[i1]);
            q_sip_lqr_ip02_DWork.HILInitialize_POSortedFreqs[7U -
              num_frequency_modes] = q_sip_lqr_ip02_P.HILInitialize_POFrequency;
            num_frequency_modes++;
          }
        }
      }

      if (num_duty_cycle_modes > 0) {
        result = hil_set_pwm_frequency(q_sip_lqr_ip02_DWork.HILInitialize_Card,
          &q_sip_lqr_ip02_DWork.HILInitialize_POSortedChans[0],
          num_duty_cycle_modes,
          &q_sip_lqr_ip02_DWork.HILInitialize_POSortedFreqs[0]);
        if (result < 0) {
          msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
            (_rt_error_message));
          rtmSetErrorStatus(q_sip_lqr_ip02_M, _rt_error_message);
          return;
        }
      }

      if (num_frequency_modes > 0) {
        result = hil_set_pwm_duty_cycle(q_sip_lqr_ip02_DWork.HILInitialize_Card,
          &q_sip_lqr_ip02_DWork.HILInitialize_POSortedChans[num_duty_cycle_modes],
          num_frequency_modes,
          &q_sip_lqr_ip02_DWork.HILInitialize_POSortedFreqs[num_duty_cycle_modes]);
        if (result < 0) {
          msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
            (_rt_error_message));
          rtmSetErrorStatus(q_sip_lqr_ip02_M, _rt_error_message);
          return;
        }
      }

      {
        int_T i1;
        int32_T *dw_POModeValues =
          &q_sip_lqr_ip02_DWork.HILInitialize_POModeValues[0];
        for (i1=0; i1 < 8; i1++) {
          dw_POModeValues[i1] = q_sip_lqr_ip02_P.HILInitialize_POConfiguration;
        }
      }

      {
        int_T i1;
        int32_T *dw_POAlignValues =
          &q_sip_lqr_ip02_DWork.HILInitialize_POAlignValues[0];
        for (i1=0; i1 < 8; i1++) {
          dw_POAlignValues[i1] = q_sip_lqr_ip02_P.HILInitialize_POAlignment;
        }
      }

      {
        int_T i1;
        int32_T *dw_POPolarityVals =
          &q_sip_lqr_ip02_DWork.HILInitialize_POPolarityVals[0];
        for (i1=0; i1 < 8; i1++) {
          dw_POPolarityVals[i1] = q_sip_lqr_ip02_P.HILInitialize_POPolarity;
        }
      }

      result = hil_set_pwm_configuration(q_sip_lqr_ip02_DWork.HILInitialize_Card,
        &q_sip_lqr_ip02_P.HILInitialize_POChannels[0], 8U,
        (t_pwm_configuration *)
        &q_sip_lqr_ip02_DWork.HILInitialize_POModeValues[0],
        (t_pwm_alignment *) &q_sip_lqr_ip02_DWork.HILInitialize_POAlignValues[0],
        (t_pwm_polarity *) &q_sip_lqr_ip02_DWork.HILInitialize_POPolarityVals[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(q_sip_lqr_ip02_M, _rt_error_message);
        return;
      }

      {
        int_T i1;
        real_T *dw_POSortedFreqs =
          &q_sip_lqr_ip02_DWork.HILInitialize_POSortedFreqs[0];
        for (i1=0; i1 < 8; i1++) {
          dw_POSortedFreqs[i1] = q_sip_lqr_ip02_P.HILInitialize_POLeading;
        }
      }

      {
        int_T i1;
        real_T *dw_POValues = &q_sip_lqr_ip02_DWork.HILInitialize_POValues[0];
        for (i1=0; i1 < 8; i1++) {
          dw_POValues[i1] = q_sip_lqr_ip02_P.HILInitialize_POTrailing;
        }
      }

      result = hil_set_pwm_deadband(q_sip_lqr_ip02_DWork.HILInitialize_Card,
        &q_sip_lqr_ip02_P.HILInitialize_POChannels[0], 8U,
        &q_sip_lqr_ip02_DWork.HILInitialize_POSortedFreqs[0],
        &q_sip_lqr_ip02_DWork.HILInitialize_POValues[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(q_sip_lqr_ip02_M, _rt_error_message);
        return;
      }
    }

    if ((q_sip_lqr_ip02_P.HILInitialize_POStart && !is_switching) ||
        (q_sip_lqr_ip02_P.HILInitialize_POEnter && is_switching)) {
      {
        int_T i1;
        real_T *dw_POValues = &q_sip_lqr_ip02_DWork.HILInitialize_POValues[0];
        for (i1=0; i1 < 8; i1++) {
          dw_POValues[i1] = q_sip_lqr_ip02_P.HILInitialize_POInitial;
        }
      }

      result = hil_write_pwm(q_sip_lqr_ip02_DWork.HILInitialize_Card,
        &q_sip_lqr_ip02_P.HILInitialize_POChannels[0], 8U,
        &q_sip_lqr_ip02_DWork.HILInitialize_POValues[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(q_sip_lqr_ip02_M, _rt_error_message);
        return;
      }
    }

    if (q_sip_lqr_ip02_P.HILInitialize_POReset) {
      {
        int_T i1;
        real_T *dw_POValues = &q_sip_lqr_ip02_DWork.HILInitialize_POValues[0];
        for (i1=0; i1 < 8; i1++) {
          dw_POValues[i1] = q_sip_lqr_ip02_P.HILInitialize_POWatchdog;
        }
      }

      result = hil_watchdog_set_pwm_expiration_state
        (q_sip_lqr_ip02_DWork.HILInitialize_Card,
         &q_sip_lqr_ip02_P.HILInitialize_POChannels[0], 8U,
         &q_sip_lqr_ip02_DWork.HILInitialize_POValues[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(q_sip_lqr_ip02_M, _rt_error_message);
        return;
      }
    }
  }

  /* S-Function Block: q_sip_lqr_ip02/SIP + IP02: Actual Plant/IP02 /Encoder Input #0: Cart Position Encoder Input #1: Pendulum Angle Analog Input #3 Ball Position (hil_read_timebase_block) */
  {
    t_error result;
    result = hil_task_create_reader(q_sip_lqr_ip02_DWork.HILInitialize_Card,
      q_sip_lqr_ip02_P.EncoderInput0CartPositionEnco_a,
      &q_sip_lqr_ip02_P.EncoderInput0CartPositionEnco_o, 1U,
      q_sip_lqr_ip02_P.EncoderInput0CartPositionEnco_n, 2U,
      NULL, 0U,
      NULL, 0U,
      &q_sip_lqr_ip02_DWork.EncoderInput0CartPositionEnco_p);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(q_sip_lqr_ip02_M, _rt_error_message);
    }
  }

  /* Start for enable SubSystem: '<S5>/Cart Position Watchdog' */
  q_sip_lqr_ip02_DWork.CartPositionWatchdog_MODE = SUBSYS_DISABLED;

  /* end of Start for SubSystem: '<S5>/Cart Position Watchdog' */

  /* Start for enable SubSystem: '<S1>/Holds states once enabled' */
  q_sip_lqr_ip02_DWork.Holdsstatesonceenabled_MODE = SUBSYS_DISABLED;

  /* VirtualOutportStart for Outport: '<S4>/Sw Trigger' */
  q_sip_lqr_ip02_B.Trigger = q_sip_lqr_ip02_P.SwTrigger_Y0;

  /* end of Start for SubSystem: '<S1>/Holds states once enabled' */

  /* Start for enable SubSystem: '<S1>/Cart Pendulum Angle Watchdog' */
  q_sip_lqr_ip02_DWork.CartPendulumAngleWatchdog_MODE = SUBSYS_DISABLED;

  /* end of Start for SubSystem: '<S1>/Cart Pendulum Angle Watchdog' */
  MdlInitialize();
}

RT_MODEL_q_sip_lqr_ip02 *q_sip_lqr_ip02(void)
{
  q_sip_lqr_ip02_initialize(1);
  return q_sip_lqr_ip02_M;
}

void MdlTerminate(void)
{
  q_sip_lqr_ip02_terminate();
}

/*========================================================================*
 * End of GRT compatible call interface                                   *
 *========================================================================*/
