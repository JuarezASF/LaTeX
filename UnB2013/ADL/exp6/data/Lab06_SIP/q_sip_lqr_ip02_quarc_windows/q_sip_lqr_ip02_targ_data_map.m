  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 5;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc paramMap
    ;%
    paramMap.nSections           = nTotSects;
    paramMap.sectIdxOffset       = sectIdxOffset;
      paramMap.sections(nTotSects) = dumSection; %prealloc
    paramMap.nTotData            = -1;
    
    ;%
    ;% Auto data (q_sip_lqr_ip02_P)
    ;%
      section.nData     = 72;
      section.data(72)  = dumData; %prealloc
      
	  ;% q_sip_lqr_ip02_P.HILInitialize_OOStart
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% q_sip_lqr_ip02_P.HILInitialize_OOEnter
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% q_sip_lqr_ip02_P.HILInitialize_OOTerminate
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% q_sip_lqr_ip02_P.HILInitialize_OOExit
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% q_sip_lqr_ip02_P.HILInitialize_AIHigh
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% q_sip_lqr_ip02_P.HILInitialize_AILow
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% q_sip_lqr_ip02_P.HILInitialize_AOHigh
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% q_sip_lqr_ip02_P.HILInitialize_AOLow
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% q_sip_lqr_ip02_P.HILInitialize_AOInitial
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
	  ;% q_sip_lqr_ip02_P.HILInitialize_AOFinal
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 9;
	
	  ;% q_sip_lqr_ip02_P.HILInitialize_AOWatchdog
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 10;
	
	  ;% q_sip_lqr_ip02_P.HILInitialize_POFrequency
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 11;
	
	  ;% q_sip_lqr_ip02_P.HILInitialize_POLeading
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 12;
	
	  ;% q_sip_lqr_ip02_P.HILInitialize_POTrailing
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 13;
	
	  ;% q_sip_lqr_ip02_P.HILInitialize_POInitial
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 14;
	
	  ;% q_sip_lqr_ip02_P.HILInitialize_POFinal
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 15;
	
	  ;% q_sip_lqr_ip02_P.HILInitialize_POWatchdog
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 16;
	
	  ;% q_sip_lqr_ip02_P.Conversiontom_Gain
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 17;
	
	  ;% q_sip_lqr_ip02_P.Constant_Value
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 18;
	
	  ;% q_sip_lqr_ip02_P.Conversiontord_Gain
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 19;
	
	  ;% q_sip_lqr_ip02_P.pi_Value
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 20;
	
	  ;% q_sip_lqr_ip02_P.Gain_Gain
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 21;
	
	  ;% q_sip_lqr_ip02_P.mtomm_Gain
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 22;
	
	  ;% q_sip_lqr_ip02_P.ganho_sentido_Gain
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 23;
	
	  ;% q_sip_lqr_ip02_P.Definesinaldeentrada_Value
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 24;
	
	  ;% q_sip_lqr_ip02_P.Constant_Value_d
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 25;
	
	  ;% q_sip_lqr_ip02_P.SquareWave_Amplitude
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 26;
	
	  ;% q_sip_lqr_ip02_P.SquareWave_Frequency
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 27;
	
	  ;% q_sip_lqr_ip02_P.gain_Gain
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 28;
	
	  ;% q_sip_lqr_ip02_P.u100_Gain
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 29;
	
	  ;% q_sip_lqr_ip02_P.pi1_Value
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 33;
	
	  ;% q_sip_lqr_ip02_P.pi_Value_e
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 34;
	
	  ;% q_sip_lqr_ip02_P.DerivativeFilter_A
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 35;
	
	  ;% q_sip_lqr_ip02_P.DerivativeFilter_C
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 37;
	
	  ;% q_sip_lqr_ip02_P.DerivativeFilter1_A
	  section.data(35).logicalSrcIdx = 36;
	  section.data(35).dtTransOffset = 39;
	
	  ;% q_sip_lqr_ip02_P.DerivativeFilter1_C
	  section.data(36).logicalSrcIdx = 37;
	  section.data(36).dtTransOffset = 41;
	
	  ;% q_sip_lqr_ip02_P.SwitchTriggerValue_Value
	  section.data(37).logicalSrcIdx = 40;
	  section.data(37).dtTransOffset = 43;
	
	  ;% q_sip_lqr_ip02_P.pi2_Value
	  section.data(38).logicalSrcIdx = 41;
	  section.data(38).dtTransOffset = 44;
	
	  ;% q_sip_lqr_ip02_P.Vm0_Value
	  section.data(39).logicalSrcIdx = 42;
	  section.data(39).dtTransOffset = 45;
	
	  ;% q_sip_lqr_ip02_P.Threshold05_Threshold
	  section.data(40).logicalSrcIdx = 43;
	  section.data(40).dtTransOffset = 46;
	
	  ;% q_sip_lqr_ip02_P.AmplifierGainPreCompensation_Ga
	  section.data(41).logicalSrcIdx = 44;
	  section.data(41).dtTransOffset = 47;
	
	  ;% q_sip_lqr_ip02_P.DACLimit_UpperSat
	  section.data(42).logicalSrcIdx = 45;
	  section.data(42).dtTransOffset = 48;
	
	  ;% q_sip_lqr_ip02_P.DACLimit_LowerSat
	  section.data(43).logicalSrcIdx = 46;
	  section.data(43).dtTransOffset = 49;
	
	  ;% q_sip_lqr_ip02_P.AmplifierGain_Gain
	  section.data(44).logicalSrcIdx = 47;
	  section.data(44).dtTransOffset = 50;
	
	  ;% q_sip_lqr_ip02_P.EnableVoltPAQX2X4_Value
	  section.data(45).logicalSrcIdx = 48;
	  section.data(45).dtTransOffset = 51;
	
	  ;% q_sip_lqr_ip02_P.Constant1_Value
	  section.data(46).logicalSrcIdx = 49;
	  section.data(46).dtTransOffset = 55;
	
	  ;% q_sip_lqr_ip02_P.u1005_Gain
	  section.data(47).logicalSrcIdx = 50;
	  section.data(47).dtTransOffset = 56;
	
	  ;% q_sip_lqr_ip02_P.u1001_Gain
	  section.data(48).logicalSrcIdx = 51;
	  section.data(48).dtTransOffset = 60;
	
	  ;% q_sip_lqr_ip02_P.SIPIP01_2StateSpaceModel_A
	  section.data(49).logicalSrcIdx = 52;
	  section.data(49).dtTransOffset = 64;
	
	  ;% q_sip_lqr_ip02_P.SIPIP01_2StateSpaceModel_B
	  section.data(50).logicalSrcIdx = 53;
	  section.data(50).dtTransOffset = 72;
	
	  ;% q_sip_lqr_ip02_P.SIPIP01_2StateSpaceModel_C
	  section.data(51).logicalSrcIdx = 54;
	  section.data(51).dtTransOffset = 74;
	
	  ;% q_sip_lqr_ip02_P.SIPIP01_2StateSpaceModel_X0
	  section.data(52).logicalSrcIdx = 56;
	  section.data(52).dtTransOffset = 78;
	
	  ;% q_sip_lqr_ip02_P.u1003_Gain
	  section.data(53).logicalSrcIdx = 57;
	  section.data(53).dtTransOffset = 82;
	
	  ;% q_sip_lqr_ip02_P.mTomm_Gain
	  section.data(54).logicalSrcIdx = 58;
	  section.data(54).dtTransOffset = 86;
	
	  ;% q_sip_lqr_ip02_P.u1002_Gain
	  section.data(55).logicalSrcIdx = 59;
	  section.data(55).dtTransOffset = 87;
	
	  ;% q_sip_lqr_ip02_P.u1004_Gain
	  section.data(56).logicalSrcIdx = 60;
	  section.data(56).dtTransOffset = 91;
	
	  ;% q_sip_lqr_ip02_P.Gain_Gain_f
	  section.data(57).logicalSrcIdx = 61;
	  section.data(57).dtTransOffset = 95;
	
	  ;% q_sip_lqr_ip02_P.mTomm1_Gain
	  section.data(58).logicalSrcIdx = 62;
	  section.data(58).dtTransOffset = 96;
	
	  ;% q_sip_lqr_ip02_P.mTomm2_Gain
	  section.data(59).logicalSrcIdx = 63;
	  section.data(59).dtTransOffset = 97;
	
	  ;% q_sip_lqr_ip02_P.m2_Gain
	  section.data(60).logicalSrcIdx = 64;
	  section.data(60).dtTransOffset = 98;
	
	  ;% q_sip_lqr_ip02_P.SimAmplifierVoltageLimit_UpperS
	  section.data(61).logicalSrcIdx = 65;
	  section.data(61).dtTransOffset = 102;
	
	  ;% q_sip_lqr_ip02_P.SimAmplifierVoltageLimit_LowerS
	  section.data(62).logicalSrcIdx = 66;
	  section.data(62).dtTransOffset = 103;
	
	  ;% q_sip_lqr_ip02_P.StepAmplitude_Gain
	  section.data(63).logicalSrcIdx = 67;
	  section.data(63).dtTransOffset = 104;
	
	  ;% q_sip_lqr_ip02_P.m1_Gain
	  section.data(64).logicalSrcIdx = 68;
	  section.data(64).dtTransOffset = 105;
	
	  ;% q_sip_lqr_ip02_P.AmplifierVoltageLimit_UpperSat
	  section.data(65).logicalSrcIdx = 69;
	  section.data(65).dtTransOffset = 109;
	
	  ;% q_sip_lqr_ip02_P.AmplifierVoltageLimit_LowerSat
	  section.data(66).logicalSrcIdx = 70;
	  section.data(66).dtTransOffset = 110;
	
	  ;% q_sip_lqr_ip02_P.XMAX_Value
	  section.data(67).logicalSrcIdx = 71;
	  section.data(67).dtTransOffset = 111;
	
	  ;% q_sip_lqr_ip02_P.Gain_Gain_p
	  section.data(68).logicalSrcIdx = 72;
	  section.data(68).dtTransOffset = 112;
	
	  ;% q_sip_lqr_ip02_P.XMIN_Value
	  section.data(69).logicalSrcIdx = 73;
	  section.data(69).dtTransOffset = 113;
	
	  ;% q_sip_lqr_ip02_P.SwTrigger_Y0
	  section.data(70).logicalSrcIdx = 74;
	  section.data(70).dtTransOffset = 114;
	
	  ;% q_sip_lqr_ip02_P.XMAX_Value_e
	  section.data(71).logicalSrcIdx = 75;
	  section.data(71).dtTransOffset = 115;
	
	  ;% q_sip_lqr_ip02_P.XIN_Value
	  section.data(72).logicalSrcIdx = 76;
	  section.data(72).dtTransOffset = 116;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
      section.nData     = 8;
      section.data(8)  = dumData; %prealloc
      
	  ;% q_sip_lqr_ip02_P.HILInitialize_CKChannels
	  section.data(1).logicalSrcIdx = 77;
	  section.data(1).dtTransOffset = 0;
	
	  ;% q_sip_lqr_ip02_P.HILInitialize_DOWatchdog
	  section.data(2).logicalSrcIdx = 78;
	  section.data(2).dtTransOffset = 3;
	
	  ;% q_sip_lqr_ip02_P.HILInitialize_EIInitial
	  section.data(3).logicalSrcIdx = 79;
	  section.data(3).dtTransOffset = 4;
	
	  ;% q_sip_lqr_ip02_P.HILInitialize_POModes
	  section.data(4).logicalSrcIdx = 80;
	  section.data(4).dtTransOffset = 5;
	
	  ;% q_sip_lqr_ip02_P.HILInitialize_POConfiguration
	  section.data(5).logicalSrcIdx = 81;
	  section.data(5).dtTransOffset = 6;
	
	  ;% q_sip_lqr_ip02_P.HILInitialize_POAlignment
	  section.data(6).logicalSrcIdx = 82;
	  section.data(6).dtTransOffset = 7;
	
	  ;% q_sip_lqr_ip02_P.HILInitialize_POPolarity
	  section.data(7).logicalSrcIdx = 83;
	  section.data(7).dtTransOffset = 8;
	
	  ;% q_sip_lqr_ip02_P.EncoderInput0CartPositionEncode
	  section.data(8).logicalSrcIdx = 84;
	  section.data(8).dtTransOffset = 9;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(2) = section;
      clear section
      
      section.nData     = 11;
      section.data(11)  = dumData; %prealloc
      
	  ;% q_sip_lqr_ip02_P.HILInitialize_AIChannels
	  section.data(1).logicalSrcIdx = 85;
	  section.data(1).dtTransOffset = 0;
	
	  ;% q_sip_lqr_ip02_P.HILInitialize_AOChannels
	  section.data(2).logicalSrcIdx = 86;
	  section.data(2).dtTransOffset = 8;
	
	  ;% q_sip_lqr_ip02_P.HILInitialize_DOChannels
	  section.data(3).logicalSrcIdx = 87;
	  section.data(3).dtTransOffset = 16;
	
	  ;% q_sip_lqr_ip02_P.HILInitialize_EIChannels
	  section.data(4).logicalSrcIdx = 88;
	  section.data(4).dtTransOffset = 24;
	
	  ;% q_sip_lqr_ip02_P.HILInitialize_EIQuadrature
	  section.data(5).logicalSrcIdx = 89;
	  section.data(5).dtTransOffset = 32;
	
	  ;% q_sip_lqr_ip02_P.HILInitialize_POChannels
	  section.data(6).logicalSrcIdx = 90;
	  section.data(6).dtTransOffset = 33;
	
	  ;% q_sip_lqr_ip02_P.EncoderInput0CartPositionEnco_a
	  section.data(7).logicalSrcIdx = 91;
	  section.data(7).dtTransOffset = 41;
	
	  ;% q_sip_lqr_ip02_P.EncoderInput0CartPositionEnco_o
	  section.data(8).logicalSrcIdx = 92;
	  section.data(8).dtTransOffset = 42;
	
	  ;% q_sip_lqr_ip02_P.EncoderInput0CartPositionEnco_n
	  section.data(9).logicalSrcIdx = 93;
	  section.data(9).dtTransOffset = 43;
	
	  ;% q_sip_lqr_ip02_P.AnalogOutput0ToAmplifierDriving
	  section.data(10).logicalSrcIdx = 94;
	  section.data(10).dtTransOffset = 45;
	
	  ;% q_sip_lqr_ip02_P.HILWriteDigital_Channels
	  section.data(11).logicalSrcIdx = 95;
	  section.data(11).dtTransOffset = 46;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(3) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% q_sip_lqr_ip02_P.ShowMessageonHost_MsgIcon
	  section.data(1).logicalSrcIdx = 96;
	  section.data(1).dtTransOffset = 0;
	
	  ;% q_sip_lqr_ip02_P.ShowMessageonHost_MsgIcon_l
	  section.data(2).logicalSrcIdx = 97;
	  section.data(2).dtTransOffset = 1;
	
	  ;% q_sip_lqr_ip02_P.ShowMessageonHost_MsgIcon_e
	  section.data(3).logicalSrcIdx = 98;
	  section.data(3).dtTransOffset = 2;
	
	  ;% q_sip_lqr_ip02_P.ShowMessageonHost_MsgIcon_c
	  section.data(4).logicalSrcIdx = 99;
	  section.data(4).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(4) = section;
      clear section
      
      section.nData     = 36;
      section.data(36)  = dumData; %prealloc
      
	  ;% q_sip_lqr_ip02_P.HILInitialize_Active
	  section.data(1).logicalSrcIdx = 100;
	  section.data(1).dtTransOffset = 0;
	
	  ;% q_sip_lqr_ip02_P.HILInitialize_CKPStart
	  section.data(2).logicalSrcIdx = 101;
	  section.data(2).dtTransOffset = 1;
	
	  ;% q_sip_lqr_ip02_P.HILInitialize_CKPEnter
	  section.data(3).logicalSrcIdx = 102;
	  section.data(3).dtTransOffset = 2;
	
	  ;% q_sip_lqr_ip02_P.HILInitialize_AIPStart
	  section.data(4).logicalSrcIdx = 103;
	  section.data(4).dtTransOffset = 3;
	
	  ;% q_sip_lqr_ip02_P.HILInitialize_AIPEnter
	  section.data(5).logicalSrcIdx = 104;
	  section.data(5).dtTransOffset = 4;
	
	  ;% q_sip_lqr_ip02_P.HILInitialize_AOPStart
	  section.data(6).logicalSrcIdx = 105;
	  section.data(6).dtTransOffset = 5;
	
	  ;% q_sip_lqr_ip02_P.HILInitialize_AOPEnter
	  section.data(7).logicalSrcIdx = 106;
	  section.data(7).dtTransOffset = 6;
	
	  ;% q_sip_lqr_ip02_P.HILInitialize_AOStart
	  section.data(8).logicalSrcIdx = 107;
	  section.data(8).dtTransOffset = 7;
	
	  ;% q_sip_lqr_ip02_P.HILInitialize_AOEnter
	  section.data(9).logicalSrcIdx = 108;
	  section.data(9).dtTransOffset = 8;
	
	  ;% q_sip_lqr_ip02_P.HILInitialize_AOTerminate
	  section.data(10).logicalSrcIdx = 109;
	  section.data(10).dtTransOffset = 9;
	
	  ;% q_sip_lqr_ip02_P.HILInitialize_AOExit
	  section.data(11).logicalSrcIdx = 110;
	  section.data(11).dtTransOffset = 10;
	
	  ;% q_sip_lqr_ip02_P.HILInitialize_AOReset
	  section.data(12).logicalSrcIdx = 111;
	  section.data(12).dtTransOffset = 11;
	
	  ;% q_sip_lqr_ip02_P.HILInitialize_DOPStart
	  section.data(13).logicalSrcIdx = 112;
	  section.data(13).dtTransOffset = 12;
	
	  ;% q_sip_lqr_ip02_P.HILInitialize_DOPEnter
	  section.data(14).logicalSrcIdx = 113;
	  section.data(14).dtTransOffset = 13;
	
	  ;% q_sip_lqr_ip02_P.HILInitialize_DOStart
	  section.data(15).logicalSrcIdx = 114;
	  section.data(15).dtTransOffset = 14;
	
	  ;% q_sip_lqr_ip02_P.HILInitialize_DOEnter
	  section.data(16).logicalSrcIdx = 115;
	  section.data(16).dtTransOffset = 15;
	
	  ;% q_sip_lqr_ip02_P.HILInitialize_DOTerminate
	  section.data(17).logicalSrcIdx = 116;
	  section.data(17).dtTransOffset = 16;
	
	  ;% q_sip_lqr_ip02_P.HILInitialize_DOExit
	  section.data(18).logicalSrcIdx = 117;
	  section.data(18).dtTransOffset = 17;
	
	  ;% q_sip_lqr_ip02_P.HILInitialize_DOReset
	  section.data(19).logicalSrcIdx = 118;
	  section.data(19).dtTransOffset = 18;
	
	  ;% q_sip_lqr_ip02_P.HILInitialize_EIPStart
	  section.data(20).logicalSrcIdx = 119;
	  section.data(20).dtTransOffset = 19;
	
	  ;% q_sip_lqr_ip02_P.HILInitialize_EIPEnter
	  section.data(21).logicalSrcIdx = 120;
	  section.data(21).dtTransOffset = 20;
	
	  ;% q_sip_lqr_ip02_P.HILInitialize_EIStart
	  section.data(22).logicalSrcIdx = 121;
	  section.data(22).dtTransOffset = 21;
	
	  ;% q_sip_lqr_ip02_P.HILInitialize_EIEnter
	  section.data(23).logicalSrcIdx = 122;
	  section.data(23).dtTransOffset = 22;
	
	  ;% q_sip_lqr_ip02_P.HILInitialize_POPStart
	  section.data(24).logicalSrcIdx = 123;
	  section.data(24).dtTransOffset = 23;
	
	  ;% q_sip_lqr_ip02_P.HILInitialize_POPEnter
	  section.data(25).logicalSrcIdx = 124;
	  section.data(25).dtTransOffset = 24;
	
	  ;% q_sip_lqr_ip02_P.HILInitialize_POStart
	  section.data(26).logicalSrcIdx = 125;
	  section.data(26).dtTransOffset = 25;
	
	  ;% q_sip_lqr_ip02_P.HILInitialize_POEnter
	  section.data(27).logicalSrcIdx = 126;
	  section.data(27).dtTransOffset = 26;
	
	  ;% q_sip_lqr_ip02_P.HILInitialize_POTerminate
	  section.data(28).logicalSrcIdx = 127;
	  section.data(28).dtTransOffset = 27;
	
	  ;% q_sip_lqr_ip02_P.HILInitialize_POExit
	  section.data(29).logicalSrcIdx = 128;
	  section.data(29).dtTransOffset = 28;
	
	  ;% q_sip_lqr_ip02_P.HILInitialize_POReset
	  section.data(30).logicalSrcIdx = 129;
	  section.data(30).dtTransOffset = 29;
	
	  ;% q_sip_lqr_ip02_P.HILInitialize_OOReset
	  section.data(31).logicalSrcIdx = 130;
	  section.data(31).dtTransOffset = 30;
	
	  ;% q_sip_lqr_ip02_P.HILInitialize_DOInitial
	  section.data(32).logicalSrcIdx = 131;
	  section.data(32).dtTransOffset = 31;
	
	  ;% q_sip_lqr_ip02_P.HILInitialize_DOFinal
	  section.data(33).logicalSrcIdx = 132;
	  section.data(33).dtTransOffset = 32;
	
	  ;% q_sip_lqr_ip02_P.EncoderInput0CartPositionEnco_f
	  section.data(34).logicalSrcIdx = 133;
	  section.data(34).dtTransOffset = 33;
	
	  ;% q_sip_lqr_ip02_P.AnalogOutput0ToAmplifierDrivi_n
	  section.data(35).logicalSrcIdx = 134;
	  section.data(35).dtTransOffset = 34;
	
	  ;% q_sip_lqr_ip02_P.HILWriteDigital_Active
	  section.data(36).logicalSrcIdx = 135;
	  section.data(36).dtTransOffset = 35;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(5) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (parameter)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    paramMap.nTotData = nTotData;
    


  ;%**************************
  ;% Create Block Output Map *
  ;%**************************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 1;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc sigMap
    ;%
    sigMap.nSections           = nTotSects;
    sigMap.sectIdxOffset       = sectIdxOffset;
      sigMap.sections(nTotSects) = dumSection; %prealloc
    sigMap.nTotData            = -1;
    
    ;%
    ;% Auto data (q_sip_lqr_ip02_B)
    ;%
      section.nData     = 19;
      section.data(19)  = dumData; %prealloc
      
	  ;% q_sip_lqr_ip02_B.Conversiontom
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% q_sip_lqr_ip02_B.Conversiontord
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% q_sip_lqr_ip02_B.Sum
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% q_sip_lqr_ip02_B.Gain
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% q_sip_lqr_ip02_B.mtomm
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% q_sip_lqr_ip02_B.gain
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% q_sip_lqr_ip02_B.Sum_j
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% q_sip_lqr_ip02_B.DACLimit
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% q_sip_lqr_ip02_B.AmplifierGain
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
	  ;% q_sip_lqr_ip02_B.mTomm
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 9;
	
	  ;% q_sip_lqr_ip02_B.Gain_d
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 12;
	
	  ;% q_sip_lqr_ip02_B.mTomm1
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 14;
	
	  ;% q_sip_lqr_ip02_B.mTomm2
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 15;
	
	  ;% q_sip_lqr_ip02_B.SimAmplifierVoltageLimit
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 16;
	
	  ;% q_sip_lqr_ip02_B.CheckMaximumAllowedPosition
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 17;
	
	  ;% q_sip_lqr_ip02_B.CheckMinimumAllowedPosition
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 18;
	
	  ;% q_sip_lqr_ip02_B.Trigger
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 19;
	
	  ;% q_sip_lqr_ip02_B.CheckMaximumAllowedAngle
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 20;
	
	  ;% q_sip_lqr_ip02_B.CheckMinimumAllowedAngle
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 21;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (signal)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    sigMap.nTotData = nTotData;
    


  ;%*******************
  ;% Create DWork Map *
  ;%*******************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 10;
    sectIdxOffset = 1;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc dworkMap
    ;%
    dworkMap.nSections           = nTotSects;
    dworkMap.sectIdxOffset       = sectIdxOffset;
      dworkMap.sections(nTotSects) = dumSection; %prealloc
    dworkMap.nTotData            = -1;
    
    ;%
    ;% Auto data (q_sip_lqr_ip02_DWork)
    ;%
      section.nData     = 9;
      section.data(9)  = dumData; %prealloc
      
	  ;% q_sip_lqr_ip02_DWork.HILInitialize_AIMinimums
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% q_sip_lqr_ip02_DWork.HILInitialize_AIMaximums
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 8;
	
	  ;% q_sip_lqr_ip02_DWork.HILInitialize_AOMinimums
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 16;
	
	  ;% q_sip_lqr_ip02_DWork.HILInitialize_AOMaximums
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 24;
	
	  ;% q_sip_lqr_ip02_DWork.HILInitialize_AOVoltages
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 32;
	
	  ;% q_sip_lqr_ip02_DWork.HILInitialize_FilterFrequency
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 40;
	
	  ;% q_sip_lqr_ip02_DWork.HILInitialize_POSortedFreqs
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 48;
	
	  ;% q_sip_lqr_ip02_DWork.HILInitialize_POValues
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 56;
	
	  ;% q_sip_lqr_ip02_DWork.EncoderInput0CartPositionEncode
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 64;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 10;
      section.data(10)  = dumData; %prealloc
      
	  ;% q_sip_lqr_ip02_DWork.ToWorkspace_PWORK.LoggedData
	  section.data(1).logicalSrcIdx = 9;
	  section.data(1).dtTransOffset = 0;
	
	  ;% q_sip_lqr_ip02_DWork.AnalogOutput0ToAmplifierDriving
	  section.data(2).logicalSrcIdx = 10;
	  section.data(2).dtTransOffset = 1;
	
	  ;% q_sip_lqr_ip02_DWork.VCommandV_PWORK.LoggedData
	  section.data(3).logicalSrcIdx = 11;
	  section.data(3).dtTransOffset = 2;
	
	  ;% q_sip_lqr_ip02_DWork.HILWriteDigital_PWORK
	  section.data(4).logicalSrcIdx = 12;
	  section.data(4).dtTransOffset = 3;
	
	  ;% q_sip_lqr_ip02_DWork.PendAnglerd_PWORK.LoggedData
	  section.data(5).logicalSrcIdx = 13;
	  section.data(5).dtTransOffset = 4;
	
	  ;% q_sip_lqr_ip02_DWork.CartPositionmm_PWORK.LoggedData
	  section.data(6).logicalSrcIdx = 14;
	  section.data(6).dtTransOffset = 5;
	
	  ;% q_sip_lqr_ip02_DWork.PendAngledeg_PWORK.LoggedData
	  section.data(7).logicalSrcIdx = 15;
	  section.data(7).dtTransOffset = 6;
	
	  ;% q_sip_lqr_ip02_DWork.ToWorkspace_PWORK_a.LoggedData
	  section.data(8).logicalSrcIdx = 16;
	  section.data(8).dtTransOffset = 7;
	
	  ;% q_sip_lqr_ip02_DWork.ToWorkspace1_PWORK.LoggedData
	  section.data(9).logicalSrcIdx = 17;
	  section.data(9).dtTransOffset = 8;
	
	  ;% q_sip_lqr_ip02_DWork.ball_position_PWORK.LoggedData
	  section.data(10).logicalSrcIdx = 18;
	  section.data(10).dtTransOffset = 9;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 8;
      section.data(8)  = dumData; %prealloc
      
	  ;% q_sip_lqr_ip02_DWork.HILInitialize_ClockModes
	  section.data(1).logicalSrcIdx = 19;
	  section.data(1).dtTransOffset = 0;
	
	  ;% q_sip_lqr_ip02_DWork.HILInitialize_DOStates
	  section.data(2).logicalSrcIdx = 20;
	  section.data(2).dtTransOffset = 3;
	
	  ;% q_sip_lqr_ip02_DWork.HILInitialize_QuadratureModes
	  section.data(3).logicalSrcIdx = 21;
	  section.data(3).dtTransOffset = 11;
	
	  ;% q_sip_lqr_ip02_DWork.HILInitialize_InitialEICounts
	  section.data(4).logicalSrcIdx = 22;
	  section.data(4).dtTransOffset = 19;
	
	  ;% q_sip_lqr_ip02_DWork.HILInitialize_POModeValues
	  section.data(5).logicalSrcIdx = 23;
	  section.data(5).dtTransOffset = 27;
	
	  ;% q_sip_lqr_ip02_DWork.HILInitialize_POAlignValues
	  section.data(6).logicalSrcIdx = 24;
	  section.data(6).dtTransOffset = 35;
	
	  ;% q_sip_lqr_ip02_DWork.HILInitialize_POPolarityVals
	  section.data(7).logicalSrcIdx = 25;
	  section.data(7).dtTransOffset = 43;
	
	  ;% q_sip_lqr_ip02_DWork.EncoderInput0CartPositionEnco_g
	  section.data(8).logicalSrcIdx = 26;
	  section.data(8).dtTransOffset = 51;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% q_sip_lqr_ip02_DWork.HILInitialize_POSortedChans
	  section.data(1).logicalSrcIdx = 27;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(4) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% q_sip_lqr_ip02_DWork.EncoderInput0CartPositionEnco_p
	  section.data(1).logicalSrcIdx = 28;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(5) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% q_sip_lqr_ip02_DWork.HILInitialize_Card
	  section.data(1).logicalSrcIdx = 29;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(6) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% q_sip_lqr_ip02_DWork.CartPositionWatchdog_MODE
	  section.data(1).logicalSrcIdx = 30;
	  section.data(1).dtTransOffset = 0;
	
	  ;% q_sip_lqr_ip02_DWork.Holdsstatesonceenabled_MODE
	  section.data(2).logicalSrcIdx = 31;
	  section.data(2).dtTransOffset = 1;
	
	  ;% q_sip_lqr_ip02_DWork.CartPendulumAngleWatchdog_MODE
	  section.data(3).logicalSrcIdx = 32;
	  section.data(3).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(7) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% q_sip_lqr_ip02_DWork.CartPositionWatchdog_SubsysRanB
	  section.data(1).logicalSrcIdx = 33;
	  section.data(1).dtTransOffset = 0;
	
	  ;% q_sip_lqr_ip02_DWork.Holdsstatesonceenabled_SubsysRa
	  section.data(2).logicalSrcIdx = 34;
	  section.data(2).dtTransOffset = 1;
	
	  ;% q_sip_lqr_ip02_DWork.CartPendulumAngleWatchdog_Subsy
	  section.data(3).logicalSrcIdx = 35;
	  section.data(3).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(8) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% q_sip_lqr_ip02_DWork.HILInitialize_DOBits
	  section.data(1).logicalSrcIdx = 36;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(9) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% q_sip_lqr_ip02_DWork.HILWriteDigital_Buffer
	  section.data(1).logicalSrcIdx = 37;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(10) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (dwork)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    dworkMap.nTotData = nTotData;
    


  ;%
  ;% Add individual maps to base struct.
  ;%

  targMap.paramMap  = paramMap;    
  targMap.signalMap = sigMap;
  targMap.dworkMap  = dworkMap;
  
  ;%
  ;% Add checksums to base struct.
  ;%


  targMap.checksum0 = 2621379898;
  targMap.checksum1 = 2407721752;
  targMap.checksum2 = 2862449952;
  targMap.checksum3 = 711050574;

