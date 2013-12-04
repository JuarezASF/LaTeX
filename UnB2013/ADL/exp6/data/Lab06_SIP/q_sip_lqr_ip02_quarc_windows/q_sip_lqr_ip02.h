/*
 * q_sip_lqr_ip02.h
 *
 * Real-Time Workshop code generation for Simulink model "q_sip_lqr_ip02.mdl".
 *
 * Model Version              : 1.106
 * Real-Time Workshop version : 7.2  (R2008b)  04-Aug-2008
 * C source code generated on : Wed Nov 27 17:12:14 2013
 */
#ifndef RTW_HEADER_q_sip_lqr_ip02_h_
#define RTW_HEADER_q_sip_lqr_ip02_h_
#ifndef q_sip_lqr_ip02_COMMON_INCLUDES_
# define q_sip_lqr_ip02_COMMON_INCLUDES_
#include <float.h>
#include <math.h>
#include <string.h>
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "dt_info.h"
#include "ext_work.h"
#include "hil.h"
#include "quanser_messages.h"
#include "dynamic_reconfiguration.h"
#include "quanser_extern.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"
#include "rtGetNaN.h"
#include "rt_SATURATE.h"
#include "rt_mod_snf.h"
#include "rt_round_snf.h"
#endif                                 /* q_sip_lqr_ip02_COMMON_INCLUDES_ */

#include "q_sip_lqr_ip02_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetBlkStateChangeFlag
# define rtmGetBlkStateChangeFlag(rtm) ((rtm)->ModelData.blkStateChange)
#endif

#ifndef rtmSetBlkStateChangeFlag
# define rtmSetBlkStateChangeFlag(rtm, val) ((rtm)->ModelData.blkStateChange = (val))
#endif

#ifndef rtmGetBlockIO
# define rtmGetBlockIO(rtm)            ((rtm)->ModelData.blockIO)
#endif

#ifndef rtmSetBlockIO
# define rtmSetBlockIO(rtm, val)       ((rtm)->ModelData.blockIO = (val))
#endif

#ifndef rtmGetChecksums
# define rtmGetChecksums(rtm)          ((rtm)->Sizes.checksums)
#endif

#ifndef rtmSetChecksums
# define rtmSetChecksums(rtm, val)     ((rtm)->Sizes.checksums = (val))
#endif

#ifndef rtmGetConstBlockIO
# define rtmGetConstBlockIO(rtm)       ((rtm)->ModelData.constBlockIO)
#endif

#ifndef rtmSetConstBlockIO
# define rtmSetConstBlockIO(rtm, val)  ((rtm)->ModelData.constBlockIO = (val))
#endif

#ifndef rtmGetContStateDisabled
# define rtmGetContStateDisabled(rtm)  ((rtm)->ModelData.contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
# define rtmSetContStateDisabled(rtm, val) ((rtm)->ModelData.contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
# define rtmGetContStates(rtm)         ((rtm)->ModelData.contStates)
#endif

#ifndef rtmSetContStates
# define rtmSetContStates(rtm, val)    ((rtm)->ModelData.contStates = (val))
#endif

#ifndef rtmGetDataMapInfo
# define rtmGetDataMapInfo(rtm)        ((rtm)->DataMapInfo)
#endif

#ifndef rtmSetDataMapInfo
# define rtmSetDataMapInfo(rtm, val)   ((rtm)->DataMapInfo = (val))
#endif

#ifndef rtmGetDefaultParam
# define rtmGetDefaultParam(rtm)       ((rtm)->ModelData.defaultParam)
#endif

#ifndef rtmSetDefaultParam
# define rtmSetDefaultParam(rtm, val)  ((rtm)->ModelData.defaultParam = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
# define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->ModelData.derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
# define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->ModelData.derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetDirectFeedThrough
# define rtmGetDirectFeedThrough(rtm)  ((rtm)->Sizes.sysDirFeedThru)
#endif

#ifndef rtmSetDirectFeedThrough
# define rtmSetDirectFeedThrough(rtm, val) ((rtm)->Sizes.sysDirFeedThru = (val))
#endif

#ifndef rtmGetErrorStatusFlag
# define rtmGetErrorStatusFlag(rtm)    ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatusFlag
# define rtmSetErrorStatusFlag(rtm, val) ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetFinalTime
# define rtmSetFinalTime(rtm, val)     ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetFirstInitCondFlag
# define rtmGetFirstInitCondFlag(rtm)  ((rtm)->Timing.firstInitCondFlag)
#endif

#ifndef rtmSetFirstInitCondFlag
# define rtmSetFirstInitCondFlag(rtm, val) ((rtm)->Timing.firstInitCondFlag = (val))
#endif

#ifndef rtmGetIntgData
# define rtmGetIntgData(rtm)           ((rtm)->ModelData.intgData)
#endif

#ifndef rtmSetIntgData
# define rtmSetIntgData(rtm, val)      ((rtm)->ModelData.intgData = (val))
#endif

#ifndef rtmGetMdlRefGlobalTID
# define rtmGetMdlRefGlobalTID(rtm)    ((rtm)->Timing.mdlref_GlobalTID)
#endif

#ifndef rtmSetMdlRefGlobalTID
# define rtmSetMdlRefGlobalTID(rtm, val) ((rtm)->Timing.mdlref_GlobalTID = (val))
#endif

#ifndef rtmGetMdlRefTriggerTID
# define rtmGetMdlRefTriggerTID(rtm)   ((rtm)->Timing.mdlref_TriggerTID)
#endif

#ifndef rtmSetMdlRefTriggerTID
# define rtmSetMdlRefTriggerTID(rtm, val) ((rtm)->Timing.mdlref_TriggerTID = (val))
#endif

#ifndef rtmGetModelMappingInfo
# define rtmGetModelMappingInfo(rtm)   ((rtm)->SpecialInfo.mappingInfo)
#endif

#ifndef rtmSetModelMappingInfo
# define rtmSetModelMappingInfo(rtm, val) ((rtm)->SpecialInfo.mappingInfo = (val))
#endif

#ifndef rtmGetModelName
# define rtmGetModelName(rtm)          ((rtm)->modelName)
#endif

#ifndef rtmSetModelName
# define rtmSetModelName(rtm, val)     ((rtm)->modelName = (val))
#endif

#ifndef rtmGetNonInlinedSFcns
# define rtmGetNonInlinedSFcns(rtm)    ((rtm)->NonInlinedSFcns)
#endif

#ifndef rtmSetNonInlinedSFcns
# define rtmSetNonInlinedSFcns(rtm, val) ((rtm)->NonInlinedSFcns = (val))
#endif

#ifndef rtmGetNumBlockIO
# define rtmGetNumBlockIO(rtm)         ((rtm)->Sizes.numBlockIO)
#endif

#ifndef rtmSetNumBlockIO
# define rtmSetNumBlockIO(rtm, val)    ((rtm)->Sizes.numBlockIO = (val))
#endif

#ifndef rtmGetNumBlockParams
# define rtmGetNumBlockParams(rtm)     ((rtm)->Sizes.numBlockPrms)
#endif

#ifndef rtmSetNumBlockParams
# define rtmSetNumBlockParams(rtm, val) ((rtm)->Sizes.numBlockPrms = (val))
#endif

#ifndef rtmGetNumBlocks
# define rtmGetNumBlocks(rtm)          ((rtm)->Sizes.numBlocks)
#endif

#ifndef rtmSetNumBlocks
# define rtmSetNumBlocks(rtm, val)     ((rtm)->Sizes.numBlocks = (val))
#endif

#ifndef rtmGetNumContStates
# define rtmGetNumContStates(rtm)      ((rtm)->Sizes.numContStates)
#endif

#ifndef rtmSetNumContStates
# define rtmSetNumContStates(rtm, val) ((rtm)->Sizes.numContStates = (val))
#endif

#ifndef rtmGetNumDWork
# define rtmGetNumDWork(rtm)           ((rtm)->Sizes.numDwork)
#endif

#ifndef rtmSetNumDWork
# define rtmSetNumDWork(rtm, val)      ((rtm)->Sizes.numDwork = (val))
#endif

#ifndef rtmGetNumInputPorts
# define rtmGetNumInputPorts(rtm)      ((rtm)->Sizes.numIports)
#endif

#ifndef rtmSetNumInputPorts
# define rtmSetNumInputPorts(rtm, val) ((rtm)->Sizes.numIports = (val))
#endif

#ifndef rtmGetNumNonSampledZCs
# define rtmGetNumNonSampledZCs(rtm)   ((rtm)->Sizes.numNonSampZCs)
#endif

#ifndef rtmSetNumNonSampledZCs
# define rtmSetNumNonSampledZCs(rtm, val) ((rtm)->Sizes.numNonSampZCs = (val))
#endif

#ifndef rtmGetNumOutputPorts
# define rtmGetNumOutputPorts(rtm)     ((rtm)->Sizes.numOports)
#endif

#ifndef rtmSetNumOutputPorts
# define rtmSetNumOutputPorts(rtm, val) ((rtm)->Sizes.numOports = (val))
#endif

#ifndef rtmGetNumSFcnParams
# define rtmGetNumSFcnParams(rtm)      ((rtm)->Sizes.numSFcnPrms)
#endif

#ifndef rtmSetNumSFcnParams
# define rtmSetNumSFcnParams(rtm, val) ((rtm)->Sizes.numSFcnPrms = (val))
#endif

#ifndef rtmGetNumSFunctions
# define rtmGetNumSFunctions(rtm)      ((rtm)->Sizes.numSFcns)
#endif

#ifndef rtmSetNumSFunctions
# define rtmSetNumSFunctions(rtm, val) ((rtm)->Sizes.numSFcns = (val))
#endif

#ifndef rtmGetNumSampleTimes
# define rtmGetNumSampleTimes(rtm)     ((rtm)->Sizes.numSampTimes)
#endif

#ifndef rtmSetNumSampleTimes
# define rtmSetNumSampleTimes(rtm, val) ((rtm)->Sizes.numSampTimes = (val))
#endif

#ifndef rtmGetNumU
# define rtmGetNumU(rtm)               ((rtm)->Sizes.numU)
#endif

#ifndef rtmSetNumU
# define rtmSetNumU(rtm, val)          ((rtm)->Sizes.numU = (val))
#endif

#ifndef rtmGetNumY
# define rtmGetNumY(rtm)               ((rtm)->Sizes.numY)
#endif

#ifndef rtmSetNumY
# define rtmSetNumY(rtm, val)          ((rtm)->Sizes.numY = (val))
#endif

#ifndef rtmGetOdeF
# define rtmGetOdeF(rtm)               ((rtm)->ModelData.odeF)
#endif

#ifndef rtmSetOdeF
# define rtmSetOdeF(rtm, val)          ((rtm)->ModelData.odeF = (val))
#endif

#ifndef rtmGetOdeY
# define rtmGetOdeY(rtm)               ((rtm)->ModelData.odeY)
#endif

#ifndef rtmSetOdeY
# define rtmSetOdeY(rtm, val)          ((rtm)->ModelData.odeY = (val))
#endif

#ifndef rtmGetOffsetTimeArray
# define rtmGetOffsetTimeArray(rtm)    ((rtm)->Timing.offsetTimesArray)
#endif

#ifndef rtmSetOffsetTimeArray
# define rtmSetOffsetTimeArray(rtm, val) ((rtm)->Timing.offsetTimesArray = (val))
#endif

#ifndef rtmGetOffsetTimePtr
# define rtmGetOffsetTimePtr(rtm)      ((rtm)->Timing.offsetTimes)
#endif

#ifndef rtmSetOffsetTimePtr
# define rtmSetOffsetTimePtr(rtm, val) ((rtm)->Timing.offsetTimes = (val))
#endif

#ifndef rtmGetOptions
# define rtmGetOptions(rtm)            ((rtm)->Sizes.options)
#endif

#ifndef rtmSetOptions
# define rtmSetOptions(rtm, val)       ((rtm)->Sizes.options = (val))
#endif

#ifndef rtmGetParamIsMalloced
# define rtmGetParamIsMalloced(rtm)    ((rtm)->ModelData.paramIsMalloced)
#endif

#ifndef rtmSetParamIsMalloced
# define rtmSetParamIsMalloced(rtm, val) ((rtm)->ModelData.paramIsMalloced = (val))
#endif

#ifndef rtmGetPath
# define rtmGetPath(rtm)               ((rtm)->path)
#endif

#ifndef rtmSetPath
# define rtmSetPath(rtm, val)          ((rtm)->path = (val))
#endif

#ifndef rtmGetPerTaskSampleHits
# define rtmGetPerTaskSampleHits(rtm)  ((rtm)->Timing.RateInteraction)
#endif

#ifndef rtmSetPerTaskSampleHits
# define rtmSetPerTaskSampleHits(rtm, val) ((rtm)->Timing.RateInteraction = (val))
#endif

#ifndef rtmGetPerTaskSampleHitsArray
# define rtmGetPerTaskSampleHitsArray(rtm) ((rtm)->Timing.perTaskSampleHitsArray)
#endif

#ifndef rtmSetPerTaskSampleHitsArray
# define rtmSetPerTaskSampleHitsArray(rtm, val) ((rtm)->Timing.perTaskSampleHitsArray = (val))
#endif

#ifndef rtmGetPerTaskSampleHitsPtr
# define rtmGetPerTaskSampleHitsPtr(rtm) ((rtm)->Timing.perTaskSampleHits)
#endif

#ifndef rtmSetPerTaskSampleHitsPtr
# define rtmSetPerTaskSampleHitsPtr(rtm, val) ((rtm)->Timing.perTaskSampleHits = (val))
#endif

#ifndef rtmGetPrevZCSigState
# define rtmGetPrevZCSigState(rtm)     ((rtm)->ModelData.prevZCSigState)
#endif

#ifndef rtmSetPrevZCSigState
# define rtmSetPrevZCSigState(rtm, val) ((rtm)->ModelData.prevZCSigState = (val))
#endif

#ifndef rtmGetRTWExtModeInfo
# define rtmGetRTWExtModeInfo(rtm)     ((rtm)->extModeInfo)
#endif

#ifndef rtmSetRTWExtModeInfo
# define rtmSetRTWExtModeInfo(rtm, val) ((rtm)->extModeInfo = (val))
#endif

#ifndef rtmGetRTWGeneratedSFcn
# define rtmGetRTWGeneratedSFcn(rtm)   ((rtm)->Sizes.rtwGenSfcn)
#endif

#ifndef rtmSetRTWGeneratedSFcn
# define rtmSetRTWGeneratedSFcn(rtm, val) ((rtm)->Sizes.rtwGenSfcn = (val))
#endif

#ifndef rtmGetRTWLogInfo
# define rtmGetRTWLogInfo(rtm)         ((rtm)->rtwLogInfo)
#endif

#ifndef rtmSetRTWLogInfo
# define rtmSetRTWLogInfo(rtm, val)    ((rtm)->rtwLogInfo = (val))
#endif

#ifndef rtmGetRTWRTModelMethodsInfo
# define rtmGetRTWRTModelMethodsInfo(rtm) ((rtm)->modelMethodsInfo)
#endif

#ifndef rtmSetRTWRTModelMethodsInfo
# define rtmSetRTWRTModelMethodsInfo(rtm, val) ((rtm)->modelMethodsInfo = (val))
#endif

#ifndef rtmGetRTWSfcnInfo
# define rtmGetRTWSfcnInfo(rtm)        ((rtm)->sfcnInfo)
#endif

#ifndef rtmSetRTWSfcnInfo
# define rtmSetRTWSfcnInfo(rtm, val)   ((rtm)->sfcnInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfo
# define rtmGetRTWSolverInfo(rtm)      ((rtm)->solverInfo)
#endif

#ifndef rtmSetRTWSolverInfo
# define rtmSetRTWSolverInfo(rtm, val) ((rtm)->solverInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfoPtr
# define rtmGetRTWSolverInfoPtr(rtm)   ((rtm)->solverInfoPtr)
#endif

#ifndef rtmSetRTWSolverInfoPtr
# define rtmSetRTWSolverInfoPtr(rtm, val) ((rtm)->solverInfoPtr = (val))
#endif

#ifndef rtmGetReservedForXPC
# define rtmGetReservedForXPC(rtm)     ((rtm)->SpecialInfo.xpcData)
#endif

#ifndef rtmSetReservedForXPC
# define rtmSetReservedForXPC(rtm, val) ((rtm)->SpecialInfo.xpcData = (val))
#endif

#ifndef rtmGetRootDWork
# define rtmGetRootDWork(rtm)          ((rtm)->Work.dwork)
#endif

#ifndef rtmSetRootDWork
# define rtmSetRootDWork(rtm, val)     ((rtm)->Work.dwork = (val))
#endif

#ifndef rtmGetSFunctions
# define rtmGetSFunctions(rtm)         ((rtm)->childSfunctions)
#endif

#ifndef rtmSetSFunctions
# define rtmSetSFunctions(rtm, val)    ((rtm)->childSfunctions = (val))
#endif

#ifndef rtmGetSampleHitArray
# define rtmGetSampleHitArray(rtm)     ((rtm)->Timing.sampleHitArray)
#endif

#ifndef rtmSetSampleHitArray
# define rtmSetSampleHitArray(rtm, val) ((rtm)->Timing.sampleHitArray = (val))
#endif

#ifndef rtmGetSampleHitPtr
# define rtmGetSampleHitPtr(rtm)       ((rtm)->Timing.sampleHits)
#endif

#ifndef rtmSetSampleHitPtr
# define rtmSetSampleHitPtr(rtm, val)  ((rtm)->Timing.sampleHits = (val))
#endif

#ifndef rtmGetSampleTimeArray
# define rtmGetSampleTimeArray(rtm)    ((rtm)->Timing.sampleTimesArray)
#endif

#ifndef rtmSetSampleTimeArray
# define rtmSetSampleTimeArray(rtm, val) ((rtm)->Timing.sampleTimesArray = (val))
#endif

#ifndef rtmGetSampleTimePtr
# define rtmGetSampleTimePtr(rtm)      ((rtm)->Timing.sampleTimes)
#endif

#ifndef rtmSetSampleTimePtr
# define rtmSetSampleTimePtr(rtm, val) ((rtm)->Timing.sampleTimes = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDArray
# define rtmGetSampleTimeTaskIDArray(rtm) ((rtm)->Timing.sampleTimeTaskIDArray)
#endif

#ifndef rtmSetSampleTimeTaskIDArray
# define rtmSetSampleTimeTaskIDArray(rtm, val) ((rtm)->Timing.sampleTimeTaskIDArray = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDPtr
# define rtmGetSampleTimeTaskIDPtr(rtm) ((rtm)->Timing.sampleTimeTaskIDPtr)
#endif

#ifndef rtmSetSampleTimeTaskIDPtr
# define rtmSetSampleTimeTaskIDPtr(rtm, val) ((rtm)->Timing.sampleTimeTaskIDPtr = (val))
#endif

#ifndef rtmGetSimMode
# define rtmGetSimMode(rtm)            ((rtm)->simMode)
#endif

#ifndef rtmSetSimMode
# define rtmSetSimMode(rtm, val)       ((rtm)->simMode = (val))
#endif

#ifndef rtmGetSimTimeStep
# define rtmGetSimTimeStep(rtm)        ((rtm)->Timing.simTimeStep)
#endif

#ifndef rtmSetSimTimeStep
# define rtmSetSimTimeStep(rtm, val)   ((rtm)->Timing.simTimeStep = (val))
#endif

#ifndef rtmGetStartTime
# define rtmGetStartTime(rtm)          ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetStartTime
# define rtmSetStartTime(rtm, val)     ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetStepSize
# define rtmGetStepSize(rtm)           ((rtm)->Timing.stepSize)
#endif

#ifndef rtmSetStepSize
# define rtmSetStepSize(rtm, val)      ((rtm)->Timing.stepSize = (val))
#endif

#ifndef rtmGetStopRequestedFlag
# define rtmGetStopRequestedFlag(rtm)  ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequestedFlag
# define rtmSetStopRequestedFlag(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetTaskCounters
# define rtmGetTaskCounters(rtm)       ((rtm)->Timing.TaskCounters)
#endif

#ifndef rtmSetTaskCounters
# define rtmSetTaskCounters(rtm, val)  ((rtm)->Timing.TaskCounters = (val))
#endif

#ifndef rtmGetTaskTimeArray
# define rtmGetTaskTimeArray(rtm)      ((rtm)->Timing.tArray)
#endif

#ifndef rtmSetTaskTimeArray
# define rtmSetTaskTimeArray(rtm, val) ((rtm)->Timing.tArray = (val))
#endif

#ifndef rtmGetTimePtr
# define rtmGetTimePtr(rtm)            ((rtm)->Timing.t)
#endif

#ifndef rtmSetTimePtr
# define rtmSetTimePtr(rtm, val)       ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTimingData
# define rtmGetTimingData(rtm)         ((rtm)->Timing.timingData)
#endif

#ifndef rtmSetTimingData
# define rtmSetTimingData(rtm, val)    ((rtm)->Timing.timingData = (val))
#endif

#ifndef rtmGetU
# define rtmGetU(rtm)                  ((rtm)->ModelData.inputs)
#endif

#ifndef rtmSetU
# define rtmSetU(rtm, val)             ((rtm)->ModelData.inputs = (val))
#endif

#ifndef rtmGetVarNextHitTimesListPtr
# define rtmGetVarNextHitTimesListPtr(rtm) ((rtm)->Timing.varNextHitTimesList)
#endif

#ifndef rtmSetVarNextHitTimesListPtr
# define rtmSetVarNextHitTimesListPtr(rtm, val) ((rtm)->Timing.varNextHitTimesList = (val))
#endif

#ifndef rtmGetY
# define rtmGetY(rtm)                  ((rtm)->ModelData.outputs)
#endif

#ifndef rtmSetY
# define rtmSetY(rtm, val)             ((rtm)->ModelData.outputs = (val))
#endif

#ifndef rtmGetZCCacheNeedsReset
# define rtmGetZCCacheNeedsReset(rtm)  ((rtm)->ModelData.zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
# define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->ModelData.zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetZCSignalValues
# define rtmGetZCSignalValues(rtm)     ((rtm)->ModelData.zcSignalValues)
#endif

#ifndef rtmSetZCSignalValues
# define rtmSetZCSignalValues(rtm, val) ((rtm)->ModelData.zcSignalValues = (val))
#endif

#ifndef rtmGet_TimeOfLastOutput
# define rtmGet_TimeOfLastOutput(rtm)  ((rtm)->Timing.timeOfLastOutput)
#endif

#ifndef rtmSet_TimeOfLastOutput
# define rtmSet_TimeOfLastOutput(rtm, val) ((rtm)->Timing.timeOfLastOutput = (val))
#endif

#ifndef rtmGetdX
# define rtmGetdX(rtm)                 ((rtm)->ModelData.derivs)
#endif

#ifndef rtmSetdX
# define rtmSetdX(rtm, val)            ((rtm)->ModelData.derivs = (val))
#endif

#ifndef rtmGetChecksumVal
# define rtmGetChecksumVal(rtm, idx)   ((rtm)->Sizes.checksums[idx])
#endif

#ifndef rtmSetChecksumVal
# define rtmSetChecksumVal(rtm, idx, val) ((rtm)->Sizes.checksums[idx] = (val))
#endif

#ifndef rtmGetDWork
# define rtmGetDWork(rtm, idx)         ((rtm)->Work.dwork[idx])
#endif

#ifndef rtmSetDWork
# define rtmSetDWork(rtm, idx, val)    ((rtm)->Work.dwork[idx] = (val))
#endif

#ifndef rtmGetOffsetTime
# define rtmGetOffsetTime(rtm, idx)    ((rtm)->Timing.offsetTimes[idx])
#endif

#ifndef rtmSetOffsetTime
# define rtmSetOffsetTime(rtm, idx, val) ((rtm)->Timing.offsetTimes[idx] = (val))
#endif

#ifndef rtmGetSFunction
# define rtmGetSFunction(rtm, idx)     ((rtm)->childSfunctions[idx])
#endif

#ifndef rtmSetSFunction
# define rtmSetSFunction(rtm, idx, val) ((rtm)->childSfunctions[idx] = (val))
#endif

#ifndef rtmGetSampleTime
# define rtmGetSampleTime(rtm, idx)    ((rtm)->Timing.sampleTimes[idx])
#endif

#ifndef rtmSetSampleTime
# define rtmSetSampleTime(rtm, idx, val) ((rtm)->Timing.sampleTimes[idx] = (val))
#endif

#ifndef rtmGetSampleTimeTaskID
# define rtmGetSampleTimeTaskID(rtm, idx) ((rtm)->Timing.sampleTimeTaskIDPtr[idx])
#endif

#ifndef rtmSetSampleTimeTaskID
# define rtmSetSampleTimeTaskID(rtm, idx, val) ((rtm)->Timing.sampleTimeTaskIDPtr[idx] = (val))
#endif

#ifndef rtmGetVarNextHitTime
# define rtmGetVarNextHitTime(rtm, idx) ((rtm)->Timing.varNextHitTimesList[idx])
#endif

#ifndef rtmSetVarNextHitTime
# define rtmSetVarNextHitTime(rtm, idx, val) ((rtm)->Timing.varNextHitTimesList[idx] = (val))
#endif

#ifndef rtmIsContinuousTask
# define rtmIsContinuousTask(rtm, tid) ((tid) == 0)
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmIsMajorTimeStep
# define rtmIsMajorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
# define rtmIsMinorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmIsSampleHit
# define rtmIsSampleHit(rtm, sti, tid) ((rtmIsMajorTimeStep((rtm)) && (rtm)->Timing.sampleHits[(rtm)->Timing.sampleTimeTaskIDPtr[sti]]))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmSetT
# define rtmSetT(rtm, val)                                       /* Do Nothing */
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetTFinal
# define rtmSetTFinal(rtm, val)        ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               ((rtm)->Timing.t)
#endif

#ifndef rtmSetTPtr
# define rtmSetTPtr(rtm, val)          ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTStart
# define rtmGetTStart(rtm)             ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetTStart
# define rtmSetTStart(rtm, val)        ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetTaskTime
# define rtmGetTaskTime(rtm, sti)      (rtmGetTPtr((rtm))[(rtm)->Timing.sampleTimeTaskIDPtr[sti]])
#endif

#ifndef rtmSetTaskTime
# define rtmSetTaskTime(rtm, sti, val) (rtmGetTPtr((rtm))[sti] = (val))
#endif

#ifndef rtmGetTimeOfLastOutput
# define rtmGetTimeOfLastOutput(rtm)   ((rtm)->Timing.timeOfLastOutput)
#endif

#ifdef rtmGetRTWSolverInfo
#undef rtmGetRTWSolverInfo
#endif

#define rtmGetRTWSolverInfo(rtm)       &((rtm)->solverInfo)

/* Definition for use in the target main file */
#define q_sip_lqr_ip02_rtModel         RT_MODEL_q_sip_lqr_ip02

/* Block signals (auto storage) */
typedef struct {
  real_T Conversiontom;                /* '<S5>/Conversion to m' */
  real_T Conversiontord;               /* '<S5>/Conversion to rd' */
  real_T Sum;                          /* '<S5>/Sum' */
  real_T Gain;                         /* '<S12>/Gain' */
  real_T mtomm;                        /* '<S5>/m to mm' */
  real_T gain;                         /* '<Root>/gain' */
  real_T Sum_j;                        /* '<S1>/Sum' */
  real_T DACLimit;                     /* '<S5>/DAC Limit' */
  real_T AmplifierGain;                /* '<S5>/Amplifier Gain' */
  real_T mTomm[3];                     /* '<S2>/m To mm' */
  real_T Gain_d[2];                    /* '<S17>/Gain' */
  real_T mTomm1;                       /* '<S2>/m To mm1' */
  real_T mTomm2;                       /* '<S2>/m To mm2' */
  real_T SimAmplifierVoltageLimit;     /* '<Root>/Sim: Amplifier Voltage Limit' */
  real_T CheckMaximumAllowedPosition;  /* '<S11>/Check Maximum Allowed Position' */
  real_T CheckMinimumAllowedPosition;  /* '<S11>/Check Minimum Allowed Position' */
  real_T Trigger;                      /* '<S4>/Trigger' */
  real_T CheckMaximumAllowedAngle;     /* '<S3>/Check Maximum Allowed Angle' */
  real_T CheckMinimumAllowedAngle;     /* '<S3>/Check Minimum Allowed Angle' */
} BlockIO_q_sip_lqr_ip02;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T HILInitialize_AIMinimums[8];  /* '<S5>/HIL Initialize' */
  real_T HILInitialize_AIMaximums[8];  /* '<S5>/HIL Initialize' */
  real_T HILInitialize_AOMinimums[8];  /* '<S5>/HIL Initialize' */
  real_T HILInitialize_AOMaximums[8];  /* '<S5>/HIL Initialize' */
  real_T HILInitialize_AOVoltages[8];  /* '<S5>/HIL Initialize' */
  real_T HILInitialize_FilterFrequency[8];/* '<S5>/HIL Initialize' */
  real_T HILInitialize_POSortedFreqs[8];/* '<S5>/HIL Initialize' */
  real_T HILInitialize_POValues[8];    /* '<S5>/HIL Initialize' */
  real_T EncoderInput0CartPositionEncode;/* '<S5>/Encoder Input #0: Cart Position Encoder Input #1: Pendulum Angle Analog Input #3 Ball Position' */
  struct {
    void *LoggedData;
  } ToWorkspace_PWORK;                 /* '<S5>/To Workspace' */

  void *AnalogOutput0ToAmplifierDriving;/* '<S5>/Analog Output #0: To Amplifier Driving the Motor' */
  struct {
    void *LoggedData;
  } VCommandV_PWORK;                   /* '<S5>/V Command (V)' */

  void *HILWriteDigital_PWORK;         /* '<S5>/HIL Write Digital' */
  struct {
    void *LoggedData;
  } PendAnglerd_PWORK;                 /* '<S1>/Pend Angle (rd)' */

  struct {
    void *LoggedData;
  } CartPositionmm_PWORK;              /* '<S2>/Cart Position (mm)' */

  struct {
    void *LoggedData;
  } PendAngledeg_PWORK;                /* '<S2>/Pend Angle (deg)' */

  struct {
    void *LoggedData;
  } ToWorkspace_PWORK_a;               /* '<S2>/To Workspace' */

  struct {
    void *LoggedData;
  } ToWorkspace1_PWORK;                /* '<S2>/To Workspace1' */

  struct {
    void *LoggedData;
  } ball_position_PWORK;               /* '<Root>/ball_position' */

  int32_T HILInitialize_ClockModes[3]; /* '<S5>/HIL Initialize' */
  int32_T HILInitialize_DOStates[8];   /* '<S5>/HIL Initialize' */
  int32_T HILInitialize_QuadratureModes[8];/* '<S5>/HIL Initialize' */
  int32_T HILInitialize_InitialEICounts[8];/* '<S5>/HIL Initialize' */
  int32_T HILInitialize_POModeValues[8];/* '<S5>/HIL Initialize' */
  int32_T HILInitialize_POAlignValues[8];/* '<S5>/HIL Initialize' */
  int32_T HILInitialize_POPolarityVals[8];/* '<S5>/HIL Initialize' */
  int32_T EncoderInput0CartPositionEnco_g[2];/* '<S5>/Encoder Input #0: Cart Position Encoder Input #1: Pendulum Angle Analog Input #3 Ball Position' */
  uint32_T HILInitialize_POSortedChans[8];/* '<S5>/HIL Initialize' */
  t_task EncoderInput0CartPositionEnco_p;/* '<S5>/Encoder Input #0: Cart Position Encoder Input #1: Pendulum Angle Analog Input #3 Ball Position' */
  t_card HILInitialize_Card;           /* '<S5>/HIL Initialize' */
  int_T CartPositionWatchdog_MODE;     /* '<S5>/Cart Position Watchdog' */
  int_T Holdsstatesonceenabled_MODE;   /* '<S1>/Holds states once enabled' */
  int_T CartPendulumAngleWatchdog_MODE;/* '<S1>/Cart Pendulum Angle Watchdog' */
  int8_T CartPositionWatchdog_SubsysRanB;/* '<S5>/Cart Position Watchdog' */
  int8_T Holdsstatesonceenabled_SubsysRa;/* '<S1>/Holds states once enabled' */
  int8_T CartPendulumAngleWatchdog_Subsy;/* '<S1>/Cart Pendulum Angle Watchdog' */
  boolean_T HILInitialize_DOBits[8];   /* '<S5>/HIL Initialize' */
  t_boolean HILWriteDigital_Buffer[4]; /* '<S5>/HIL Write Digital' */
} D_Work_q_sip_lqr_ip02;

/* Continuous states (auto storage) */
typedef struct {
  real_T DerivativeFilter_CSTATE[2];   /* '<S1>/Derivative Filter' */
  real_T DerivativeFilter1_CSTATE[2];  /* '<S1>/Derivative Filter1' */
  real_T SIPIP01_2StateSpaceModel_CSTATE[4];/* '<Root>/SIP + IP01_2: State-Space Model' */
} ContinuousStates_q_sip_lqr_ip02;

/* State derivatives (auto storage) */
typedef struct {
  real_T DerivativeFilter_CSTATE[2];   /* '<S1>/Derivative Filter' */
  real_T DerivativeFilter1_CSTATE[2];  /* '<S1>/Derivative Filter1' */
  real_T SIPIP01_2StateSpaceModel_CSTATE[4];/* '<Root>/SIP + IP01_2: State-Space Model' */
} StateDerivatives_q_sip_lqr_ip02;

/* State disabled  */
typedef struct {
  boolean_T DerivativeFilter_CSTATE[2];/* '<S1>/Derivative Filter' */
  boolean_T DerivativeFilter1_CSTATE[2];/* '<S1>/Derivative Filter1' */
  boolean_T SIPIP01_2StateSpaceModel_CSTATE[4];/* '<Root>/SIP + IP01_2: State-Space Model' */
} StateDisabled_q_sip_lqr_ip02;

#ifndef ODE4_INTG
#define ODE4_INTG

/* ODE4 Integration Data */
typedef struct {
  real_T *y;                           /* output */
  real_T *f[4];                        /* derivatives */
} ODE4_IntgData;

#endif

/* Backward compatible GRT Identifiers */
#define rtB                            q_sip_lqr_ip02_B
#define BlockIO                        BlockIO_q_sip_lqr_ip02
#define rtX                            q_sip_lqr_ip02_X
#define ContinuousStates               ContinuousStates_q_sip_lqr_ip02
#define rtP                            q_sip_lqr_ip02_P
#define Parameters                     Parameters_q_sip_lqr_ip02
#define rtDWork                        q_sip_lqr_ip02_DWork
#define D_Work                         D_Work_q_sip_lqr_ip02

/* Parameters (auto storage) */
struct Parameters_q_sip_lqr_ip02_ {
  real_T HILInitialize_OOStart;        /* Expression: set_other_outputs_at_start
                                        * '<S5>/HIL Initialize'
                                        */
  real_T HILInitialize_OOEnter;        /* Expression: set_other_outputs_at_switch_in
                                        * '<S5>/HIL Initialize'
                                        */
  real_T HILInitialize_OOTerminate;    /* Expression: set_other_outputs_at_terminate
                                        * '<S5>/HIL Initialize'
                                        */
  real_T HILInitialize_OOExit;         /* Expression: set_other_outputs_at_switch_out
                                        * '<S5>/HIL Initialize'
                                        */
  real_T HILInitialize_AIHigh;         /* Expression: analog_input_maximums
                                        * '<S5>/HIL Initialize'
                                        */
  real_T HILInitialize_AILow;          /* Expression: analog_input_minimums
                                        * '<S5>/HIL Initialize'
                                        */
  real_T HILInitialize_AOHigh;         /* Expression: analog_output_maximums
                                        * '<S5>/HIL Initialize'
                                        */
  real_T HILInitialize_AOLow;          /* Expression: analog_output_minimums
                                        * '<S5>/HIL Initialize'
                                        */
  real_T HILInitialize_AOInitial;      /* Expression: initial_analog_outputs
                                        * '<S5>/HIL Initialize'
                                        */
  real_T HILInitialize_AOFinal;        /* Expression: final_analog_outputs
                                        * '<S5>/HIL Initialize'
                                        */
  real_T HILInitialize_AOWatchdog;     /* Expression: watchdog_analog_outputs
                                        * '<S5>/HIL Initialize'
                                        */
  real_T HILInitialize_POFrequency;    /* Expression: pwm_frequency
                                        * '<S5>/HIL Initialize'
                                        */
  real_T HILInitialize_POLeading;      /* Expression: pwm_leading_deadband
                                        * '<S5>/HIL Initialize'
                                        */
  real_T HILInitialize_POTrailing;     /* Expression: pwm_trailing_deadband
                                        * '<S5>/HIL Initialize'
                                        */
  real_T HILInitialize_POInitial;      /* Expression: initial_pwm_outputs
                                        * '<S5>/HIL Initialize'
                                        */
  real_T HILInitialize_POFinal;        /* Expression: final_pwm_outputs
                                        * '<S5>/HIL Initialize'
                                        */
  real_T HILInitialize_POWatchdog;     /* Expression: watchdog_pwm_outputs
                                        * '<S5>/HIL Initialize'
                                        */
  real_T Conversiontom_Gain;           /* Expression:  K_EC
                                        * '<S5>/Conversion to m'
                                        */
  real_T Constant_Value;               /* Expression: X_LIM_ENABLE
                                        * '<S5>/Constant'
                                        */
  real_T Conversiontord_Gain;          /* Expression:  K_EP
                                        * '<S5>/Conversion to rd'
                                        */
  real_T pi_Value;                     /* Expression: pi
                                        * '<S5>/pi'
                                        */
  real_T Gain_Gain;                    /* Expression: 180/pi
                                        * '<S12>/Gain'
                                        */
  real_T mtomm_Gain;                   /* Expression:  1e3
                                        * '<S5>/m to mm'
                                        */
  real_T ganho_sentido_Gain;           /* Expression: -1
                                        * '<S5>/ganho_sentido'
                                        */
  real_T Definesinaldeentrada_Value;   /* Expression: 1
                                        * '<Root>/Define sinal de entrada'
                                        */
  real_T Constant_Value_d;             /* Expression: 0
                                        * '<Root>/Constant'
                                        */
  real_T SquareWave_Amplitude;         /* Expression: 1
                                        * '<Root>/Square Wave'
                                        */
  real_T SquareWave_Frequency;         /* Expression: 0.2
                                        * '<Root>/Square Wave'
                                        */
  real_T gain_Gain;                    /* Expression: 1e-1
                                        * '<Root>/gain'
                                        */
  real_T u100_Gain[4];                 /* Expression:  [1; 0; 0; 0]
                                        * '<Root>/[ 1; 1; 0; 0 ]'
                                        */
  real_T pi1_Value;                    /* Expression: 2*pi
                                        * '<S1>/pi1'
                                        */
  real_T pi_Value_e;                   /* Expression: pi
                                        * '<S1>/pi'
                                        */
  real_T DerivativeFilter_A[2];        /* Computed Parameter: A
                                        * '<S1>/Derivative Filter'
                                        */
  real_T DerivativeFilter_C[2];        /* Computed Parameter: C
                                        * '<S1>/Derivative Filter'
                                        */
  real_T DerivativeFilter1_A[2];       /* Computed Parameter: A
                                        * '<S1>/Derivative Filter1'
                                        */
  real_T DerivativeFilter1_C[2];       /* Computed Parameter: C
                                        * '<S1>/Derivative Filter1'
                                        */
  real_T SwitchTriggerValue_Value;     /* Expression: 1
                                        * '<S1>/Switch  Trigger Value'
                                        */
  real_T pi2_Value;                    /* Expression: 0
                                        * '<S1>/pi2'
                                        */
  real_T Vm0_Value;                    /* Expression: 0
                                        * '<S1>/Vm = 0'
                                        */
  real_T Threshold05_Threshold;        /* Expression: 0.5
                                        * '<S1>/Threshold=0.5'
                                        */
  real_T AmplifierGainPreCompensation_Ga;/* Expression:  1 / K_AMP
                                          * '<S5>/Amplifier Gain Pre-Compensation'
                                          */
  real_T DACLimit_UpperSat;            /* Expression: VMAX_DAC
                                        * '<S5>/DAC Limit'
                                        */
  real_T DACLimit_LowerSat;            /* Expression: - VMAX_DAC
                                        * '<S5>/DAC Limit'
                                        */
  real_T AmplifierGain_Gain;           /* Expression:  K_AMP
                                        * '<S5>/Amplifier Gain'
                                        */
  real_T EnableVoltPAQX2X4_Value[4];   /* Expression: [1 1 1 1]
                                        * '<S5>/Enable VoltPAQ-X2,X4'
                                        */
  real_T Constant1_Value;              /* Expression: ALPHA_LIM_ENABLE
                                        * '<S1>/Constant1'
                                        */
  real_T u1005_Gain[4];                /* Expression:  [1 0 0 0]
                                        * '<S2>/[ 1; 1; 0; 0 ]5'
                                        */
  real_T u1001_Gain[4];                /* Expression:  [1 0 0 0]
                                        * '<S2>/[ 1; 1; 0; 0 ]1'
                                        */
  real_T SIPIP01_2StateSpaceModel_A[8];/* Computed Parameter: A
                                        * '<Root>/SIP + IP01_2: State-Space Model'
                                        */
  real_T SIPIP01_2StateSpaceModel_B[2];/* Computed Parameter: B
                                        * '<Root>/SIP + IP01_2: State-Space Model'
                                        */
  real_T SIPIP01_2StateSpaceModel_C[4];/* Computed Parameter: C
                                        * '<Root>/SIP + IP01_2: State-Space Model'
                                        */
  real_T SIPIP01_2StateSpaceModel_X0[4];/* Expression: [ 0; IC_ALPHA0; 0; 0 ]
                                         * '<Root>/SIP + IP01_2: State-Space Model'
                                         */
  real_T u1003_Gain[4];                /* Expression:  [1 0 0 0]
                                        * '<S2>/[ 1; 1; 0; 0 ]3'
                                        */
  real_T mTomm_Gain;                   /* Expression:  1e3
                                        * '<S2>/m To mm'
                                        */
  real_T u1002_Gain[4];                /* Expression:  [0 1 0 0]
                                        * '<S2>/[ 1; 1; 0; 0 ]2'
                                        */
  real_T u1004_Gain[4];                /* Expression:  [0 1 0 0]
                                        * '<S2>/[ 1; 1; 0; 0 ]4'
                                        */
  real_T Gain_Gain_f;                  /* Expression: 180/pi
                                        * '<S17>/Gain'
                                        */
  real_T mTomm1_Gain;                  /* Expression:  1e3
                                        * '<S2>/m To mm1'
                                        */
  real_T mTomm2_Gain;                  /* Expression:  1e3
                                        * '<S2>/m To mm2'
                                        */
  real_T m2_Gain[4];                   /* Expression:  K
                                        * '<Root>/(//m)2'
                                        */
  real_T SimAmplifierVoltageLimit_UpperS;/* Expression: VMAX_AMP
                                          * '<Root>/Sim: Amplifier Voltage Limit'
                                          */
  real_T SimAmplifierVoltageLimit_LowerS;/* Expression: - VMAX_AMP
                                          * '<Root>/Sim: Amplifier Voltage Limit'
                                          */
  real_T StepAmplitude_Gain;           /* Expression: 20e-3
                                        * '<Root>/Step Amplitude'
                                        */
  real_T m1_Gain[4];                   /* Expression:  K
                                        * '<Root>/(//m)1'
                                        */
  real_T AmplifierVoltageLimit_UpperSat;/* Expression: VMAX_AMP
                                         * '<Root>/Amplifier Voltage Limit'
                                         */
  real_T AmplifierVoltageLimit_LowerSat;/* Expression: - VMAX_AMP
                                         * '<Root>/Amplifier Voltage Limit'
                                         */
  real_T XMAX_Value;                   /* Expression: ALPHA_MAX
                                        * '<S3>/X MAX'
                                        */
  real_T Gain_Gain_p;                  /* Expression: 180/pi
                                        * '<S6>/Gain'
                                        */
  real_T XMIN_Value;                   /* Expression: ALPHA_MIN
                                        * '<S3>/X MIN'
                                        */
  real_T SwTrigger_Y0;                 /* Expression: [0]
                                        * '<S4>/Sw Trigger'
                                        */
  real_T XMAX_Value_e;                 /* Expression: X_MAX
                                        * '<S11>/X MAX'
                                        */
  real_T XIN_Value;                    /* Expression: X_MIN
                                        * '<S11>/X IN'
                                        */
  int32_T HILInitialize_CKChannels[3]; /* Computed Parameter: CKChannels
                                        * '<S5>/HIL Initialize'
                                        */
  int32_T HILInitialize_DOWatchdog;    /* Computed Parameter: DOWatchdog
                                        * '<S5>/HIL Initialize'
                                        */
  int32_T HILInitialize_EIInitial;     /* Computed Parameter: EIInitial
                                        * '<S5>/HIL Initialize'
                                        */
  int32_T HILInitialize_POModes;       /* Computed Parameter: POModes
                                        * '<S5>/HIL Initialize'
                                        */
  int32_T HILInitialize_POConfiguration;/* Computed Parameter: POConfiguration
                                         * '<S5>/HIL Initialize'
                                         */
  int32_T HILInitialize_POAlignment;   /* Computed Parameter: POAlignment
                                        * '<S5>/HIL Initialize'
                                        */
  int32_T HILInitialize_POPolarity;    /* Computed Parameter: POPolarity
                                        * '<S5>/HIL Initialize'
                                        */
  int32_T EncoderInput0CartPositionEncode;/* Computed Parameter: Clock
                                           * '<S5>/Encoder Input #0: Cart Position Encoder Input #1: Pendulum Angle Analog Input #3 Ball Position'
                                           */
  uint32_T HILInitialize_AIChannels[8];/* Computed Parameter: AIChannels
                                        * '<S5>/HIL Initialize'
                                        */
  uint32_T HILInitialize_AOChannels[8];/* Computed Parameter: AOChannels
                                        * '<S5>/HIL Initialize'
                                        */
  uint32_T HILInitialize_DOChannels[8];/* Computed Parameter: DOChannels
                                        * '<S5>/HIL Initialize'
                                        */
  uint32_T HILInitialize_EIChannels[8];/* Computed Parameter: EIChannels
                                        * '<S5>/HIL Initialize'
                                        */
  uint32_T HILInitialize_EIQuadrature; /* Computed Parameter: EIQuadrature
                                        * '<S5>/HIL Initialize'
                                        */
  uint32_T HILInitialize_POChannels[8];/* Computed Parameter: POChannels
                                        * '<S5>/HIL Initialize'
                                        */
  uint32_T EncoderInput0CartPositionEnco_a;/* Computed Parameter: SamplesInBuffer
                                            * '<S5>/Encoder Input #0: Cart Position Encoder Input #1: Pendulum Angle Analog Input #3 Ball Position'
                                            */
  uint32_T EncoderInput0CartPositionEnco_o;/* Computed Parameter: AnalogChannels
                                            * '<S5>/Encoder Input #0: Cart Position Encoder Input #1: Pendulum Angle Analog Input #3 Ball Position'
                                            */
  uint32_T EncoderInput0CartPositionEnco_n[2];/* Computed Parameter: EncoderChannels
                                               * '<S5>/Encoder Input #0: Cart Position Encoder Input #1: Pendulum Angle Analog Input #3 Ball Position'
                                               */
  uint32_T AnalogOutput0ToAmplifierDriving;/* Computed Parameter: Channels
                                            * '<S5>/Analog Output #0: To Amplifier Driving the Motor'
                                            */
  uint32_T HILWriteDigital_Channels[4];/* Computed Parameter: Channels
                                        * '<S5>/HIL Write Digital'
                                        */
  int8_T ShowMessageonHost_MsgIcon;    /* Computed Parameter: MsgIcon
                                        * '<S7>/Show Message on Host'
                                        */
  int8_T ShowMessageonHost_MsgIcon_l;  /* Computed Parameter: MsgIcon
                                        * '<S8>/Show Message on Host'
                                        */
  int8_T ShowMessageonHost_MsgIcon_e;  /* Computed Parameter: MsgIcon
                                        * '<S13>/Show Message on Host'
                                        */
  int8_T ShowMessageonHost_MsgIcon_c;  /* Computed Parameter: MsgIcon
                                        * '<S14>/Show Message on Host'
                                        */
  boolean_T HILInitialize_Active;      /* Computed Parameter: Active
                                        * '<S5>/HIL Initialize'
                                        */
  boolean_T HILInitialize_CKPStart;    /* Computed Parameter: CKPStart
                                        * '<S5>/HIL Initialize'
                                        */
  boolean_T HILInitialize_CKPEnter;    /* Computed Parameter: CKPEnter
                                        * '<S5>/HIL Initialize'
                                        */
  boolean_T HILInitialize_AIPStart;    /* Computed Parameter: AIPStart
                                        * '<S5>/HIL Initialize'
                                        */
  boolean_T HILInitialize_AIPEnter;    /* Computed Parameter: AIPEnter
                                        * '<S5>/HIL Initialize'
                                        */
  boolean_T HILInitialize_AOPStart;    /* Computed Parameter: AOPStart
                                        * '<S5>/HIL Initialize'
                                        */
  boolean_T HILInitialize_AOPEnter;    /* Computed Parameter: AOPEnter
                                        * '<S5>/HIL Initialize'
                                        */
  boolean_T HILInitialize_AOStart;     /* Computed Parameter: AOStart
                                        * '<S5>/HIL Initialize'
                                        */
  boolean_T HILInitialize_AOEnter;     /* Computed Parameter: AOEnter
                                        * '<S5>/HIL Initialize'
                                        */
  boolean_T HILInitialize_AOTerminate; /* Computed Parameter: AOTerminate
                                        * '<S5>/HIL Initialize'
                                        */
  boolean_T HILInitialize_AOExit;      /* Computed Parameter: AOExit
                                        * '<S5>/HIL Initialize'
                                        */
  boolean_T HILInitialize_AOReset;     /* Computed Parameter: AOReset
                                        * '<S5>/HIL Initialize'
                                        */
  boolean_T HILInitialize_DOPStart;    /* Computed Parameter: DOPStart
                                        * '<S5>/HIL Initialize'
                                        */
  boolean_T HILInitialize_DOPEnter;    /* Computed Parameter: DOPEnter
                                        * '<S5>/HIL Initialize'
                                        */
  boolean_T HILInitialize_DOStart;     /* Computed Parameter: DOStart
                                        * '<S5>/HIL Initialize'
                                        */
  boolean_T HILInitialize_DOEnter;     /* Computed Parameter: DOEnter
                                        * '<S5>/HIL Initialize'
                                        */
  boolean_T HILInitialize_DOTerminate; /* Computed Parameter: DOTerminate
                                        * '<S5>/HIL Initialize'
                                        */
  boolean_T HILInitialize_DOExit;      /* Computed Parameter: DOExit
                                        * '<S5>/HIL Initialize'
                                        */
  boolean_T HILInitialize_DOReset;     /* Computed Parameter: DOReset
                                        * '<S5>/HIL Initialize'
                                        */
  boolean_T HILInitialize_EIPStart;    /* Computed Parameter: EIPStart
                                        * '<S5>/HIL Initialize'
                                        */
  boolean_T HILInitialize_EIPEnter;    /* Computed Parameter: EIPEnter
                                        * '<S5>/HIL Initialize'
                                        */
  boolean_T HILInitialize_EIStart;     /* Computed Parameter: EIStart
                                        * '<S5>/HIL Initialize'
                                        */
  boolean_T HILInitialize_EIEnter;     /* Computed Parameter: EIEnter
                                        * '<S5>/HIL Initialize'
                                        */
  boolean_T HILInitialize_POPStart;    /* Computed Parameter: POPStart
                                        * '<S5>/HIL Initialize'
                                        */
  boolean_T HILInitialize_POPEnter;    /* Computed Parameter: POPEnter
                                        * '<S5>/HIL Initialize'
                                        */
  boolean_T HILInitialize_POStart;     /* Computed Parameter: POStart
                                        * '<S5>/HIL Initialize'
                                        */
  boolean_T HILInitialize_POEnter;     /* Computed Parameter: POEnter
                                        * '<S5>/HIL Initialize'
                                        */
  boolean_T HILInitialize_POTerminate; /* Computed Parameter: POTerminate
                                        * '<S5>/HIL Initialize'
                                        */
  boolean_T HILInitialize_POExit;      /* Computed Parameter: POExit
                                        * '<S5>/HIL Initialize'
                                        */
  boolean_T HILInitialize_POReset;     /* Computed Parameter: POReset
                                        * '<S5>/HIL Initialize'
                                        */
  boolean_T HILInitialize_OOReset;     /* Computed Parameter: OOReset
                                        * '<S5>/HIL Initialize'
                                        */
  boolean_T HILInitialize_DOInitial;   /* Computed Parameter: DOInitial
                                        * '<S5>/HIL Initialize'
                                        */
  boolean_T HILInitialize_DOFinal;     /* Computed Parameter: DOFinal
                                        * '<S5>/HIL Initialize'
                                        */
  boolean_T EncoderInput0CartPositionEnco_f;/* Computed Parameter: Active
                                             * '<S5>/Encoder Input #0: Cart Position Encoder Input #1: Pendulum Angle Analog Input #3 Ball Position'
                                             */
  boolean_T AnalogOutput0ToAmplifierDrivi_n;/* Computed Parameter: Active
                                             * '<S5>/Analog Output #0: To Amplifier Driving the Motor'
                                             */
  boolean_T HILWriteDigital_Active;    /* Computed Parameter: Active
                                        * '<S5>/HIL Write Digital'
                                        */
};

/* Real-time Model Data Structure */
struct RT_MODEL_q_sip_lqr_ip02 {
  const char_T *path;
  const char_T *modelName;
  struct SimStruct_tag * *childSfunctions;
  const char_T *errorStatus;
  SS_SimMode simMode;
  RTWExtModeInfo *extModeInfo;
  RTWSolverInfo solverInfo;
  RTWSolverInfo *solverInfoPtr;
  void *sfcnInfo;

  /*
   * ModelData:
   * The following substructure contains information regarding
   * the data used in the model.
   */
  struct {
    void *blockIO;
    const void *constBlockIO;
    real_T *defaultParam;
    ZCSigState *prevZCSigState;
    real_T *contStates;
    real_T *derivs;
    real_T *zcSignalValues;
    void *inputs;
    void *outputs;
    boolean_T *contStateDisabled;
    boolean_T zCCacheNeedsReset;
    boolean_T derivCacheNeedsReset;
    boolean_T blkStateChange;
    real_T odeY[8];
    real_T odeF[4][8];
    ODE4_IntgData intgData;
  } ModelData;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
    uint32_T options;
    int_T numContStates;
    int_T numU;
    int_T numY;
    int_T numSampTimes;
    int_T numBlocks;
    int_T numBlockIO;
    int_T numBlockPrms;
    int_T numDwork;
    int_T numSFcnPrms;
    int_T numSFcns;
    int_T numIports;
    int_T numOports;
    int_T numNonSampZCs;
    int_T sysDirFeedThru;
    int_T rtwGenSfcn;
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
    void *xpcData;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T stepSize;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    time_T stepSize1;
    struct {
      uint8_T TID[2];
    } TaskCounters;

    time_T tStart;
    time_T tFinal;
    time_T timeOfLastOutput;
    void *timingData;
    real_T *varNextHitTimesList;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *sampleTimes;
    time_T *offsetTimes;
    int_T *sampleTimeTaskIDPtr;
    int_T *sampleHits;
    int_T *perTaskSampleHits;
    time_T *t;
    time_T sampleTimesArray[2];
    time_T offsetTimesArray[2];
    int_T sampleTimeTaskIDArray[2];
    int_T sampleHitArray[2];
    int_T perTaskSampleHitsArray[4];
    time_T tArray[2];
  } Timing;

  /*
   * Work:
   * The following substructure contains information regarding
   * the work vectors in the model.
   */
  struct {
    void *dwork;
  } Work;
};

/* Block parameters (auto storage) */
extern Parameters_q_sip_lqr_ip02 q_sip_lqr_ip02_P;

/* Block signals (auto storage) */
extern BlockIO_q_sip_lqr_ip02 q_sip_lqr_ip02_B;

/* Continuous states (auto storage) */
extern ContinuousStates_q_sip_lqr_ip02 q_sip_lqr_ip02_X;

/* Block states (auto storage) */
extern D_Work_q_sip_lqr_ip02 q_sip_lqr_ip02_DWork;

/* Model entry point functions */
extern void q_sip_lqr_ip02_initialize(boolean_T firstTime);
extern void q_sip_lqr_ip02_output(int_T tid);
extern void q_sip_lqr_ip02_update(int_T tid);
extern void q_sip_lqr_ip02_terminate(void);

/* Real-time Model object */
extern RT_MODEL_q_sip_lqr_ip02 *q_sip_lqr_ip02_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : q_sip_lqr_ip02
 * '<S1>'   : q_sip_lqr_ip02/SIP + IP02: Actual Plant
 * '<S2>'   : q_sip_lqr_ip02/Scopes
 * '<S3>'   : q_sip_lqr_ip02/SIP + IP02: Actual Plant/Cart Pendulum Angle Watchdog
 * '<S4>'   : q_sip_lqr_ip02/SIP + IP02: Actual Plant/Holds states once enabled
 * '<S5>'   : q_sip_lqr_ip02/SIP + IP02: Actual Plant/IP02
 * '<S6>'   : q_sip_lqr_ip02/SIP + IP02: Actual Plant/Cart Pendulum Angle Watchdog/Radians to Degrees
 * '<S7>'   : q_sip_lqr_ip02/SIP + IP02: Actual Plant/Cart Pendulum Angle Watchdog/Stop with Message
 * '<S8>'   : q_sip_lqr_ip02/SIP + IP02: Actual Plant/Cart Pendulum Angle Watchdog/Stop with Message1
 * '<S9>'   : q_sip_lqr_ip02/SIP + IP02: Actual Plant/Cart Pendulum Angle Watchdog/Stop with Message/Compare
 * '<S10>'  : q_sip_lqr_ip02/SIP + IP02: Actual Plant/Cart Pendulum Angle Watchdog/Stop with Message1/Compare
 * '<S11>'  : q_sip_lqr_ip02/SIP + IP02: Actual Plant/IP02 /Cart Position Watchdog
 * '<S12>'  : q_sip_lqr_ip02/SIP + IP02: Actual Plant/IP02 /Radians to Degrees
 * '<S13>'  : q_sip_lqr_ip02/SIP + IP02: Actual Plant/IP02 /Cart Position Watchdog/Stop with Message
 * '<S14>'  : q_sip_lqr_ip02/SIP + IP02: Actual Plant/IP02 /Cart Position Watchdog/Stop with Message1
 * '<S15>'  : q_sip_lqr_ip02/SIP + IP02: Actual Plant/IP02 /Cart Position Watchdog/Stop with Message/Compare
 * '<S16>'  : q_sip_lqr_ip02/SIP + IP02: Actual Plant/IP02 /Cart Position Watchdog/Stop with Message1/Compare
 * '<S17>'  : q_sip_lqr_ip02/Scopes/Radians to Degrees
 */
#endif                                 /* RTW_HEADER_q_sip_lqr_ip02_h_ */
