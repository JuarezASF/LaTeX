/*
 * q_sip_lqr_ip02_data.c
 *
 * Real-Time Workshop code generation for Simulink model "q_sip_lqr_ip02.mdl".
 *
 * Model Version              : 1.106
 * Real-Time Workshop version : 7.2  (R2008b)  04-Aug-2008
 * C source code generated on : Wed Nov 27 17:12:14 2013
 */

#include "q_sip_lqr_ip02.h"
#include "q_sip_lqr_ip02_private.h"

/* Block parameters (auto storage) */
Parameters_q_sip_lqr_ip02 q_sip_lqr_ip02_P = {
  0.0,                                 /* HILInitialize_OOStart : '<S5>/HIL Initialize'
                                        */
  0.0,                                 /* HILInitialize_OOEnter : '<S5>/HIL Initialize'
                                        */
  0.0,                                 /* HILInitialize_OOTerminate : '<S5>/HIL Initialize'
                                        */
  0.0,                                 /* HILInitialize_OOExit : '<S5>/HIL Initialize'
                                        */
  10.0,                                /* HILInitialize_AIHigh : '<S5>/HIL Initialize'
                                        */
  -10.0,                               /* HILInitialize_AILow : '<S5>/HIL Initialize'
                                        */
  10.0,                                /* HILInitialize_AOHigh : '<S5>/HIL Initialize'
                                        */
  -10.0,                               /* HILInitialize_AOLow : '<S5>/HIL Initialize'
                                        */
  0.0,                                 /* HILInitialize_AOInitial : '<S5>/HIL Initialize'
                                        */
  0.0,                                 /* HILInitialize_AOFinal : '<S5>/HIL Initialize'
                                        */
  0.0,                                 /* HILInitialize_AOWatchdog : '<S5>/HIL Initialize'
                                        */
  2.4305934065934067E+004,             /* HILInitialize_POFrequency : '<S5>/HIL Initialize'
                                        */
  0.0,                                 /* HILInitialize_POLeading : '<S5>/HIL Initialize'
                                        */
  0.0,                                 /* HILInitialize_POTrailing : '<S5>/HIL Initialize'
                                        */
  0.0,                                 /* HILInitialize_POInitial : '<S5>/HIL Initialize'
                                        */
  0.0,                                 /* HILInitialize_POFinal : '<S5>/HIL Initialize'
                                        */
  0.0,                                 /* HILInitialize_POWatchdog : '<S5>/HIL Initialize'
                                        */
  2.2748544093178037E-005,             /* Conversiontom_Gain : '<S5>/Conversion to m'
                                        */
  1.0,                                 /* Constant_Value : '<S5>/Constant'
                                        */
  1.5339807878856412E-003,             /* Conversiontord_Gain : '<S5>/Conversion to rd'
                                        */
  3.1415926535897931E+000,             /* pi_Value : '<S5>/pi'
                                        */
  5.7295779513082323E+001,             /* Gain_Gain : '<S12>/Gain'
                                        */
  1000.0,                              /* mtomm_Gain : '<S5>/m to mm'
                                        */
  -1.0,                                /* ganho_sentido_Gain : '<S5>/ganho_sentido'
                                        */
  1.0,                                 /* Definesinaldeentrada_Value : '<Root>/Define sinal de entrada'
                                        */
  0.0,                                 /* Constant_Value_d : '<Root>/Constant'
                                        */
  1.0,                                 /* SquareWave_Amplitude : '<Root>/Square Wave'
                                        */
  0.2,                                 /* SquareWave_Frequency : '<Root>/Square Wave'
                                        */
  0.1,                                 /* gain_Gain : '<Root>/gain'
                                        */

  /*  u100_Gain : '<Root>/[ 1; 1; 0; 0 ]'
   */
  { 1.0, 0.0, 0.0, 0.0 },
  6.2831853071795862E+000,             /* pi1_Value : '<S1>/pi1'
                                        */
  3.1415926535897931E+000,             /* pi_Value_e : '<S1>/pi'
                                        */

  /*  DerivativeFilter_A : '<S1>/Derivative Filter'
   */
  { -1.1309733552923255E+002, -3.9478417604357433E+003 },

  /*  DerivativeFilter_C : '<S1>/Derivative Filter'
   */
  { 3.9478417604357433E+003, 0.0 },

  /*  DerivativeFilter1_A : '<S1>/Derivative Filter1'
   */
  { -1.1309733552923255E+002, -3.9478417604357433E+003 },

  /*  DerivativeFilter1_C : '<S1>/Derivative Filter1'
   */
  { 3.9478417604357433E+003, 0.0 },
  1.0,                                 /* SwitchTriggerValue_Value : '<S1>/Switch  Trigger Value'
                                        */
  0.0,                                 /* pi2_Value : '<S1>/pi2'
                                        */
  0.0,                                 /* Vm0_Value : '<S1>/Vm = 0'
                                        */
  0.5,                                 /* Threshold05_Threshold : '<S1>/Threshold=0.5'
                                        */
  1.0,                                 /* AmplifierGainPreCompensation_Ga : '<S5>/Amplifier Gain Pre-Compensation'
                                        */
  10.0,                                /* DACLimit_UpperSat : '<S5>/DAC Limit'
                                        */
  -10.0,                               /* DACLimit_LowerSat : '<S5>/DAC Limit'
                                        */
  1.0,                                 /* AmplifierGain_Gain : '<S5>/Amplifier Gain'
                                        */

  /*  EnableVoltPAQX2X4_Value : '<S5>/Enable VoltPAQ-X2,X4'
   */
  { 1.0, 1.0, 1.0, 1.0 },
  1.0,                                 /* Constant1_Value : '<S1>/Constant1'
                                        */

  /*  u1005_Gain : '<S2>/[ 1; 1; 0; 0 ]5'
   */
  { 1.0, 0.0, 0.0, 0.0 },

  /*  u1001_Gain : '<S2>/[ 1; 1; 0; 0 ]1'
   */
  { 1.0, 0.0, 0.0, 0.0 },

  /*  SIPIP01_2StateSpaceModel_A : '<Root>/SIP + IP01_2: State-Space Model'
   */
  { 1.0, 1.0, 1.3100816714110026E+000, -5.8716662653066720E+000,
    -1.4194010673295640E-002, 4.8162492584479189E+001, -2.5430935789654693E+001,
    -5.2181398207055207E-001 },

  /*  SIPIP01_2StateSpaceModel_B : '<Root>/SIP + IP01_2: State-Space Model'
   */
  { 1.3655037826294587E+000, 5.9141711138731843E+000 },

  /*  SIPIP01_2StateSpaceModel_C : '<Root>/SIP + IP01_2: State-Space Model'
   */
  { 1.0, 1.0, 1.0, 1.0 },

  /*  SIPIP01_2StateSpaceModel_X0 : '<Root>/SIP + IP01_2: State-Space Model'
   */
  { 0.0, 0.0, 0.0, 0.0 },

  /*  u1003_Gain : '<S2>/[ 1; 1; 0; 0 ]3'
   */
  { 1.0, 0.0, 0.0, 0.0 },
  1000.0,                              /* mTomm_Gain : '<S2>/m To mm'
                                        */

  /*  u1002_Gain : '<S2>/[ 1; 1; 0; 0 ]2'
   */
  { 0.0, 1.0, 0.0, 0.0 },

  /*  u1004_Gain : '<S2>/[ 1; 1; 0; 0 ]4'
   */
  { 0.0, 1.0, 0.0, 0.0 },
  5.7295779513082323E+001,             /* Gain_Gain_f : '<S17>/Gain'
                                        */
  1000.0,                              /* mTomm1_Gain : '<S2>/m To mm1'
                                        */
  1000.0,                              /* mTomm2_Gain : '<S2>/m To mm2'
                                        */

  /*  m2_Gain : '<Root>/(//m)2'
   */
  { -4.0824056246860629E+001, 1.4943365195241904E+002, -4.2375392047573065E+001,
    1.3535333412354580E+001 },
  24.0,                                /* SimAmplifierVoltageLimit_UpperS : '<Root>/Sim: Amplifier Voltage Limit'
                                        */
  -24.0,                               /* SimAmplifierVoltageLimit_LowerS : '<Root>/Sim: Amplifier Voltage Limit'
                                        */
  0.02,                                /* StepAmplitude_Gain : '<Root>/Step Amplitude'
                                        */

  /*  m1_Gain : '<Root>/(//m)1'
   */
  { -4.0824056246860629E+001, 1.4943365195241904E+002, -4.2375392047573065E+001,
    1.3535333412354580E+001 },
  24.0,                                /* AmplifierVoltageLimit_UpperSat : '<Root>/Amplifier Voltage Limit'
                                        */
  -24.0,                               /* AmplifierVoltageLimit_LowerSat : '<Root>/Amplifier Voltage Limit'
                                        */
  20.0,                                /* XMAX_Value : '<S3>/X MAX'
                                        */
  5.7295779513082323E+001,             /* Gain_Gain_p : '<S6>/Gain'
                                        */
  -20.0,                               /* XMIN_Value : '<S3>/X MIN'
                                        */
  0.0,                                 /* SwTrigger_Y0 : '<S4>/Sw Trigger'
                                        */
  0.25,                                /* XMAX_Value_e : '<S11>/X MAX'
                                        */
  -0.25,                               /* XIN_Value : '<S11>/X IN'
                                        */

  /*  HILInitialize_CKChannels : '<S5>/HIL Initialize'
   */
  { 0, 1, 2 },
  0,                                   /* HILInitialize_DOWatchdog : '<S5>/HIL Initialize'
                                        */
  0,                                   /* HILInitialize_EIInitial : '<S5>/HIL Initialize'
                                        */
  0,                                   /* HILInitialize_POModes : '<S5>/HIL Initialize'
                                        */
  0,                                   /* HILInitialize_POConfiguration : '<S5>/HIL Initialize'
                                        */
  0,                                   /* HILInitialize_POAlignment : '<S5>/HIL Initialize'
                                        */
  1,                                   /* HILInitialize_POPolarity : '<S5>/HIL Initialize'
                                        */
  0,                                   /* EncoderInput0CartPositionEncode : '<S5>/Encoder Input #0: Cart Position Encoder Input #1: Pendulum Angle Analog Input #3 Ball Position'
                                        */

  /*  HILInitialize_AIChannels : '<S5>/HIL Initialize'
   */
  { 0U, 1U, 2U, 3U, 4U, 5U, 6U, 7U },

  /*  HILInitialize_AOChannels : '<S5>/HIL Initialize'
   */
  { 0U, 1U, 2U, 3U, 4U, 5U, 6U, 7U },

  /*  HILInitialize_DOChannels : '<S5>/HIL Initialize'
   */
  { 0U, 1U, 2U, 3U, 4U, 5U, 6U, 7U },

  /*  HILInitialize_EIChannels : '<S5>/HIL Initialize'
   */
  { 0U, 1U, 2U, 3U, 4U, 5U, 6U, 7U },
  4U,                                  /* HILInitialize_EIQuadrature : '<S5>/HIL Initialize'
                                        */

  /*  HILInitialize_POChannels : '<S5>/HIL Initialize'
   */
  { 0U, 1U, 2U, 3U, 4U, 5U, 6U, 7U },
  1000U,                               /* EncoderInput0CartPositionEnco_a : '<S5>/Encoder Input #0: Cart Position Encoder Input #1: Pendulum Angle Analog Input #3 Ball Position'
                                        */
  3U,                                  /* EncoderInput0CartPositionEnco_o : '<S5>/Encoder Input #0: Cart Position Encoder Input #1: Pendulum Angle Analog Input #3 Ball Position'
                                        */

  /*  EncoderInput0CartPositionEnco_n : '<S5>/Encoder Input #0: Cart Position Encoder Input #1: Pendulum Angle Analog Input #3 Ball Position'
   */
  { 0U, 1U },
  0U,                                  /* AnalogOutput0ToAmplifierDriving : '<S5>/Analog Output #0: To Amplifier Driving the Motor'
                                        */

  /*  HILWriteDigital_Channels : '<S5>/HIL Write Digital'
   */
  { 0U, 1U, 2U, 3U },
  1,                                   /* ShowMessageonHost_MsgIcon : '<S7>/Show Message on Host'
                                        */
  1,                                   /* ShowMessageonHost_MsgIcon_l : '<S8>/Show Message on Host'
                                        */
  1,                                   /* ShowMessageonHost_MsgIcon_e : '<S13>/Show Message on Host'
                                        */
  1,                                   /* ShowMessageonHost_MsgIcon_c : '<S14>/Show Message on Host'
                                        */
  0,                                   /* HILInitialize_Active : '<S5>/HIL Initialize'
                                        */
  0,                                   /* HILInitialize_CKPStart : '<S5>/HIL Initialize'
                                        */
  0,                                   /* HILInitialize_CKPEnter : '<S5>/HIL Initialize'
                                        */
  1,                                   /* HILInitialize_AIPStart : '<S5>/HIL Initialize'
                                        */
  0,                                   /* HILInitialize_AIPEnter : '<S5>/HIL Initialize'
                                        */
  1,                                   /* HILInitialize_AOPStart : '<S5>/HIL Initialize'
                                        */
  0,                                   /* HILInitialize_AOPEnter : '<S5>/HIL Initialize'
                                        */
  1,                                   /* HILInitialize_AOStart : '<S5>/HIL Initialize'
                                        */
  0,                                   /* HILInitialize_AOEnter : '<S5>/HIL Initialize'
                                        */
  1,                                   /* HILInitialize_AOTerminate : '<S5>/HIL Initialize'
                                        */
  0,                                   /* HILInitialize_AOExit : '<S5>/HIL Initialize'
                                        */
  0,                                   /* HILInitialize_AOReset : '<S5>/HIL Initialize'
                                        */
  0,                                   /* HILInitialize_DOPStart : '<S5>/HIL Initialize'
                                        */
  0,                                   /* HILInitialize_DOPEnter : '<S5>/HIL Initialize'
                                        */
  1,                                   /* HILInitialize_DOStart : '<S5>/HIL Initialize'
                                        */
  0,                                   /* HILInitialize_DOEnter : '<S5>/HIL Initialize'
                                        */
  1,                                   /* HILInitialize_DOTerminate : '<S5>/HIL Initialize'
                                        */
  0,                                   /* HILInitialize_DOExit : '<S5>/HIL Initialize'
                                        */
  0,                                   /* HILInitialize_DOReset : '<S5>/HIL Initialize'
                                        */
  1,                                   /* HILInitialize_EIPStart : '<S5>/HIL Initialize'
                                        */
  0,                                   /* HILInitialize_EIPEnter : '<S5>/HIL Initialize'
                                        */
  1,                                   /* HILInitialize_EIStart : '<S5>/HIL Initialize'
                                        */
  0,                                   /* HILInitialize_EIEnter : '<S5>/HIL Initialize'
                                        */
  1,                                   /* HILInitialize_POPStart : '<S5>/HIL Initialize'
                                        */
  0,                                   /* HILInitialize_POPEnter : '<S5>/HIL Initialize'
                                        */
  1,                                   /* HILInitialize_POStart : '<S5>/HIL Initialize'
                                        */
  0,                                   /* HILInitialize_POEnter : '<S5>/HIL Initialize'
                                        */
  1,                                   /* HILInitialize_POTerminate : '<S5>/HIL Initialize'
                                        */
  0,                                   /* HILInitialize_POExit : '<S5>/HIL Initialize'
                                        */
  0,                                   /* HILInitialize_POReset : '<S5>/HIL Initialize'
                                        */
  0,                                   /* HILInitialize_OOReset : '<S5>/HIL Initialize'
                                        */
  0,                                   /* HILInitialize_DOInitial : '<S5>/HIL Initialize'
                                        */
  0,                                   /* HILInitialize_DOFinal : '<S5>/HIL Initialize'
                                        */
  1,                                   /* EncoderInput0CartPositionEnco_f : '<S5>/Encoder Input #0: Cart Position Encoder Input #1: Pendulum Angle Analog Input #3 Ball Position'
                                        */
  1,                                   /* AnalogOutput0ToAmplifierDrivi_n : '<S5>/Analog Output #0: To Amplifier Driving the Motor'
                                        */
  0                                    /* HILWriteDigital_Active : '<S5>/HIL Write Digital'
                                        */
};
