```
0: kd> dt _KPRCB
nt!_KPRCB
   +0x000 MxCsr            : Uint4B
   +0x004 LegacyNumber     : UChar
   +0x005 ReservedMustBeZero : UChar
   +0x006 InterruptRequest : UChar
   +0x007 IdleHalt         : UChar

// 当前该处理器上正在运行的线程（运行状态）
   +0x008 CurrentThread    : Ptr64 _KTHREAD

// 下一个要运行的线程（备用状态）
   +0x010 NextThread       : Ptr64 _KTHREAD

// 空闲线程
   +0x018 IdleThread       : Ptr64 _KTHREAD


   +0x020 NestingLevel     : UChar
   +0x021 ClockOwner       : UChar
   +0x022 PendingTickFlags : UChar
   +0x022 PendingTick      : Pos 0, 1 Bit
   +0x022 PendingBackupTick : Pos 1, 1 Bit
   +0x023 IdleState        : UChar
   +0x024 Number           : Uint4B
   +0x028 RspBase          : Uint8B
   +0x030 PrcbLock         : Uint8B
   +0x038 PriorityState    : Ptr64 _KPRIORITY_STATE
   +0x040 CpuType          : Char
   +0x041 CpuID            : Char
   +0x042 CpuStep          : Uint2B
   +0x042 CpuStepping      : UChar
   +0x043 CpuModel         : UChar
   +0x044 MHz              : Uint4B
   +0x048 HalReserved      : [8] Uint8B
   +0x088 MinorVersion     : Uint2B
   +0x08a MajorVersion     : Uint2B
   +0x08c BuildType        : UChar
   +0x08d CpuVendor        : UChar
   +0x08e LegacyCoresPerPhysicalProcessor : UChar
   +0x08f LegacyLogicalProcessorsPerCore : UChar
   +0x090 TscFrequency     : Uint8B
   +0x098 TracepointLog    : Ptr64 _KPRCB_TRACEPOINT_LOG
   +0x0a0 CoresPerPhysicalProcessor : Uint4B
   +0x0a4 LogicalProcessorsPerCore : Uint4B
   +0x0a8 PrcbPad04        : [3] Uint8B
   +0x0c0 SchedulerSubNode : Ptr64 _KSCHEDULER_SUBNODE
   +0x0c8 GroupSetMember   : Uint8B
   +0x0d0 Group            : UChar
   +0x0d1 GroupIndex       : UChar
   +0x0d2 PrcbPad05        : [2] UChar
   +0x0d4 InitialApicId    : Uint4B
   +0x0d8 ScbOffset        : Uint4B
   +0x0dc ApicMask         : Uint4B
   +0x0e0 AcpiReserved     : Ptr64 Void
   +0x0e8 CFlushSize       : Uint4B
   +0x0ec PrcbFlags        : _KPRCBFLAG
   +0x0f0 TrappedSecurityDomain : Uint8B
   +0x0f8 BpbState         : UChar
   +0x0f8 BpbCpuIdle       : Pos 0, 1 Bit
   +0x0f8 BpbFlushRsbOnTrap : Pos 1, 1 Bit
   +0x0f8 BpbIbpbOnReturn  : Pos 2, 1 Bit
   +0x0f8 BpbIbpbOnTrap    : Pos 3, 1 Bit
   +0x0f8 BpbIbpbOnRetpolineExit : Pos 4, 1 Bit
   +0x0f8 BpbFlushRsbOnReturn : Pos 5, 1 Bit
   +0x0f8 BpbFlushRsbOnRetpolineExit : Pos 6, 1 Bit
   +0x0f8 BpbDivideOnReturn : Pos 7, 1 Bit
   +0x0f9 BpbFeatures      : UChar
   +0x0f9 BpbClearOnIdle   : Pos 0, 1 Bit
   +0x0f9 BpbEnabled       : Pos 1, 1 Bit
   +0x0f9 BpbSmep          : Pos 2, 1 Bit
   +0x0f9 BpbKCet          : Pos 3, 1 Bit
   +0x0f9 BpbFeaturesReserved : Pos 4, 4 Bits
   +0x0fa BpbCurrentSpecCtrl : UChar
   +0x0fb BpbKernelSpecCtrl : UChar
   +0x0fc BpbNmiSpecCtrl   : UChar
   +0x0fd BpbUserSpecCtrl  : UChar
   +0x0fe PairRegister     : Int2B
   +0x0f0 PrcbPad11        : [2] Uint8B
   +0x100 ProcessorState   : _KPROCESSOR_STATE
   +0x6c0 ExtendedSupervisorState : Ptr64 _XSAVE_AREA_HEADER
   +0x6c8 ProcessorSignature : Uint4B
   +0x6cc ProcessorFlags   : Uint4B
   +0x6d0 BpbRetpolineExitSpecCtrl : UChar
   +0x6d1 BpbTrappedRetpolineExitSpecCtrl : UChar
   +0x6d2 BpbTrappedBpbState : UChar
   +0x6d2 BpbTrappedCpuIdle : Pos 0, 1 Bit
   +0x6d2 BpbTrappedFlushRsbOnTrap : Pos 1, 1 Bit
   +0x6d2 BpbTrappedIbpbOnReturn : Pos 2, 1 Bit
   +0x6d2 BpbTrappedIbpbOnTrap : Pos 3, 1 Bit
   +0x6d2 BpbTrappedIbpbOnRetpolineExit : Pos 4, 1 Bit
   +0x6d2 BpbTrappedFlushRsbOnReturn : Pos 5, 1 Bit
   +0x6d2 BpbTrappedFlushRsbOnRetpolineExit : Pos 6, 1 Bit
   +0x6d2 BpbTrappedBpbStateReserved : Pos 7, 1 Bit
   +0x6d3 BpbRetpolineState : UChar
   +0x6d3 BpbRunningNonRetpolineCode : Pos 0, 1 Bit
   +0x6d3 BpbIndirectCallsSafe : Pos 1, 1 Bit
   +0x6d3 BpbRetpolineEnabled : Pos 2, 1 Bit
   +0x6d3 BpbRetpolineStateReserved : Pos 3, 5 Bits
   +0x6d4 PrcbPad12b       : Uint4B
   +0x6d0 PrcbPad12a       : Uint8B
   +0x6d8 PrcbPad12        : [3] Uint8B
   +0x6f0 LockQueue        : [17] _KSPIN_LOCK_QUEUE
   +0x800 PPLookasideList  : [16] _PP_LOOKASIDE_LIST
   +0x900 PPNxPagedLookasideList : [32] _GENERAL_LOOKASIDE_POOL
   +0x1500 PPNPagedLookasideList : [32] _GENERAL_LOOKASIDE_POOL
   +0x2100 PPPagedLookasideList : [32] _GENERAL_LOOKASIDE_POOL
   +0x2d00 MsrIa32TsxCtrl   : Uint8B


// 记录了那些在该处理器上处于延迟就绪状态的线程
   +0x2d08 DeferredReadyListHead : _SINGLE_LIST_ENTRY



   +0x2d10 MmPageFaultCount : Int4B
   +0x2d14 MmCopyOnWriteCount : Int4B
   +0x2d18 MmTransitionCount : Int4B
   +0x2d1c MmDemandZeroCount : Int4B
   +0x2d20 MmPageReadCount  : Int4B
   +0x2d24 MmPageReadIoCount : Int4B
   +0x2d28 MmDirtyPagesWriteCount : Int4B
   +0x2d2c MmDirtyWriteIoCount : Int4B
   +0x2d30 MmMappedPagesWriteCount : Int4B
   +0x2d34 MmMappedWriteIoCount : Int4B
   +0x2d38 KeSystemCalls    : Uint4B
   +0x2d3c KeContextSwitches : Uint4B
   +0x2d40 PrcbPad40        : Uint4B
   +0x2d44 CcFastReadNoWait : Uint4B
   +0x2d48 CcFastReadWait   : Uint4B
   +0x2d4c CcFastReadNotPossible : Uint4B
   +0x2d50 CcCopyReadNoWait : Uint4B
   +0x2d54 CcCopyReadWait   : Uint4B
   +0x2d58 CcCopyReadNoWaitMiss : Uint4B
   +0x2d5c IoReadOperationCount : Int4B
   +0x2d60 IoWriteOperationCount : Int4B
   +0x2d64 IoOtherOperationCount : Int4B
   +0x2d68 IoReadTransferCount : _LARGE_INTEGER
   +0x2d70 IoWriteTransferCount : _LARGE_INTEGER
   +0x2d78 IoOtherTransferCount : _LARGE_INTEGER
   +0x2d80 PacketBarrier    : Int4B
   +0x2d84 TargetCount      : Int4B
   +0x2d88 IpiFrozen        : Uint4B
   +0x2d8c PrcbPad30        : Uint4B
   +0x2d90 IsrDpcStats      : Ptr64 Void
   +0x2d98 DeviceInterrupts : Uint4B
   +0x2d9c LookasideIrpFloat : Int4B
   +0x2da0 InterruptLastCount : Uint4B
   +0x2da4 InterruptRate    : Uint4B
   +0x2da8 PrcbPad31        : Uint8B
   +0x2db0 PairPrcb         : Ptr64 _KPRCB
   +0x2db8 StaticAffinity   : _KSTATIC_AFFINITY_BLOCK
   +0x31d8 DeferredDispatchInterrupts : _KSOFTWARE_INTERRUPT_BATCH
   +0x32e8 PrcbPad35        : [3] Uint8B
   +0x3300 InterruptObjectPool : _SLIST_HEADER
   +0x3310 DpcRuntimeHistoryHashTable : Ptr64 _RTL_HASH_TABLE
   +0x3318 DpcRuntimeHistoryHashTableCleanupDpc : Ptr64 _KDPC
   +0x3320 CurrentDpcRoutine : Ptr64     void 
   +0x3328 CurrentDpcRuntimeHistoryCached : Uint8B
   +0x3330 CurrentDpcStartTime : Uint8B
   +0x3338 DpcDelegateThread : Ptr64 _KTHREAD
   +0x3340 DpcData          : [2] _KDPC_DATA
   +0x33a0 DpcStack         : Ptr64 Void
   +0x33a8 MaximumDpcQueueDepth : Int4B
   +0x33ac DpcRequestRate   : Uint4B
   +0x33b0 MinimumDpcRate   : Uint4B
   +0x33b4 DpcLastCount     : Uint4B
   +0x33b8 ThreadDpcEnable  : UChar
   +0x33b9 QuantumEnd       : UChar
   +0x33ba DpcRoutineActive : UChar
   +0x33bb IdleSchedule     : UChar
   +0x33bc DpcRequestSummary : Int4B
   +0x33bc DpcRequestSlot   : [2] Int2B
   +0x33bc NormalDpcState   : Int2B
   +0x33be ThreadDpcState   : Int2B
   +0x33bc DpcNormalProcessingActive : Pos 0, 1 Bit
   +0x33bc DpcNormalProcessingRequested : Pos 1, 1 Bit
   +0x33bc DpcNormalThreadSignal : Pos 2, 1 Bit
   +0x33bc DpcNormalTimerExpiration : Pos 3, 1 Bit
   +0x33bc DpcNormalDpcPresent : Pos 4, 1 Bit
   +0x33bc DpcNormalLocalInterrupt : Pos 5, 1 Bit
   +0x33bc DpcNormalPriorityAntiStarvation : Pos 6, 1 Bit
   +0x33bc DpcNormalSwapToDpcDelegate : Pos 7, 1 Bit
   +0x33bc DpcNormalSpare   : Pos 8, 8 Bits
   +0x33bc DpcThreadActive  : Pos 16, 1 Bit
   +0x33bc DpcThreadRequested : Pos 17, 1 Bit
   +0x33bc DpcThreadSpare   : Pos 18, 14 Bits
   +0x33c0 LastTick         : Uint4B
   +0x33c4 ClockInterrupts  : Uint4B
   +0x33c8 ReadyScanTick    : Uint4B
   +0x33cc SingleDpcSoftTimeLimitTicks : Uint4B
   +0x33d0 SingleDpcSoftTimeoutEventInfo : Ptr64 _KSINGLE_DPC_SOFT_TIMEOUT_EVENT_INFO
   +0x33d8 CumulativeDpcSoftTimeLimitTicks : Uint4B
   +0x33dc DpcWatchdogProfileBufferSize : Uint4B
   +0x33e0 PrcbPad93        : [8] Uint4B
   +0x3400 InterruptObject  : [256] Ptr64 Void
   +0x3c00 TimerTable       : _KTIMER_TABLE
   +0x7e18 PrcbPad92        : [10] Uint4B
   +0x7e40 DpcGate          : _KGATE
   +0x7e58 PrcbPad52        : Ptr64 Void
   +0x7e60 CallDpc          : _KDPC
   +0x7ea0 ClockKeepAlive   : Int4B
   +0x7ea4 PrcbPad60        : [2] UChar
   +0x7ea6 NmiActive        : UChar
   +0x7ea7 MceActive        : UChar
   +0x7ea6 CombinedNmiMceActive : Uint2B
   +0x7ea8 DpcWatchdogPeriodTicks : Int4B
   +0x7eac DpcWatchdogCount : Int4B
   +0x7eb0 KeSpinLockOrdering : Int4B
   +0x7eb4 DpcWatchdogProfileCumulativeDpcThresholdTicks : Uint4B
   +0x7eb8 CachedPtes       : Ptr64 Void
   +0x7ec0 WaitListHead     : _LIST_ENTRY
   +0x7ed0 WaitLock         : Uint8B

// 记录了DispatcherReadyList 哪些优先级的链表非空
   +0x7ed8 ReadySummary     : Uint4B

   +0x7edc AffinitizedSelectionMask : Int4B
   +0x7ee0 QueueIndex       : Uint4B
   +0x7ee4 NormalPriorityQueueIndex : Uint4B
   +0x7ee8 NormalPriorityReadyScanTick : Uint4B
   +0x7eec DpcWatchdogSequenceNumber : Uint4B
   +0x7ef0 TimerExpirationDpc : _KDPC
   +0x7f30 ScbQueue         : _RTL_RB_TREE


// 链表数组，其中每一个成员链表都对应于特定优先级的就绪线程
   +0x7f40 DispatcherReadyListHead : [32] _LIST_ENTRY



   +0x8140 InterruptCount   : Uint4B
   +0x8144 KernelTime       : Uint4B
   +0x8148 UserTime         : Uint4B
   +0x814c DpcTime          : Uint4B
   +0x8150 InterruptTime    : Uint4B
   +0x8154 AdjustDpcThreshold : Uint4B
   +0x8158 DebuggerSavedIRQL : UChar
   +0x8159 GroupSchedulingOverQuota : UChar
   +0x815a DeepSleep        : UChar
   +0x815b PrcbPad80        : UChar
   +0x815c DpcTimeCount     : Uint4B
   +0x8160 DpcTimeLimitTicks : Uint4B
   +0x8164 PeriodicCount    : Uint4B
   +0x8168 PeriodicBias     : Uint4B
   +0x816c AvailableTime    : Uint4B
   +0x8170 KeExceptionDispatchCount : Uint4B
   +0x8174 ReadyThreadCount : Uint4B
   +0x8178 ReadyQueueExpectedRunTime : Uint8B
   +0x8180 StartCycles      : Uint8B
   +0x8188 TaggedCycles     : [4] Uint8B
   +0x81a8 AffinitizedCycles : Uint8B
   +0x81b0 CyclesByThreadType : Ptr64 Uint8B
   +0x81b8 CpuCycleScalingFactor : Uint4B
   +0x81bc PerformanceScoreByClass : [8] Uint2B
   +0x81cc EfficiencyScoreByClass : [8] Uint2B
   +0x81dc PrcbPad83        : [25] Uint4B
   +0x8240 DpcWatchdogProfileSingleDpcThresholdTicks : Uint4B
   +0x8244 PrcbPad82        : Int4B
   +0x8248 CachedStack      : Ptr64 Void
   +0x8250 PageColor        : Uint4B
   +0x8254 NodeColor        : Uint4B
   +0x8258 NodeShiftedColor : Uint4B
   +0x825c SecondaryColorMask : Uint4B
   +0x8260 PrcbPad81        : [5] UChar
   +0x8265 SystemWorkKickInProgress : UChar
   +0x8266 ExceptionStackActive : UChar
   +0x8267 TbFlushListActive : UChar
   +0x8268 ExceptionStack   : Ptr64 Void
   +0x8270 MmSpinLockOrdering : Int8B
   +0x8278 CycleTime        : Uint8B
   +0x8280 Cycles           : [4] [2] Uint8B
   +0x82c0 CcFastMdlReadNoWait : Uint4B
   +0x82c4 CcFastMdlReadWait : Uint4B
   +0x82c8 CcFastMdlReadNotPossible : Uint4B
   +0x82cc CcMapDataNoWait  : Uint4B
   +0x82d0 CcMapDataWait    : Uint4B
   +0x82d4 CcPinMappedDataCount : Uint4B
   +0x82d8 CcPinReadNoWait  : Uint4B
   +0x82dc CcPinReadWait    : Uint4B
   +0x82e0 CcMdlReadNoWait  : Uint4B
   +0x82e4 CcMdlReadWait    : Uint4B
   +0x82e8 CcLazyWriteHotSpots : Uint4B
   +0x82ec CcLazyWriteIos   : Uint4B
   +0x82f0 CcLazyWritePages : Uint4B
   +0x82f4 CcDataFlushes    : Uint4B
   +0x82f8 CcDataPages      : Uint4B
   +0x82fc CcLostDelayedWrites : Uint4B
   +0x8300 CcFastReadResourceMiss : Uint4B
   +0x8304 CcCopyReadWaitMiss : Uint4B
   +0x8308 CcFastMdlReadResourceMiss : Uint4B
   +0x830c CcMapDataNoWaitMiss : Uint4B
   +0x8310 CcMapDataWaitMiss : Uint4B
   +0x8314 CcPinReadNoWaitMiss : Uint4B
   +0x8318 CcPinReadWaitMiss : Uint4B
   +0x831c CcMdlReadNoWaitMiss : Uint4B
   +0x8320 CcMdlReadWaitMiss : Uint4B
   +0x8324 CcReadAheadIos   : Uint4B
   +0x8328 MmCacheTransitionCount : Int4B
   +0x832c MmCacheReadCount : Int4B
   +0x8330 MmCacheIoCount   : Int4B
   +0x8334 PrcbPad91        : Uint4B
   +0x8338 MmInternal       : Ptr64 Void
   +0x8340 PowerState       : _PROCESSOR_POWER_STATE
   +0x8578 PrcbPad96        : [1] Uint8B
   +0x8580 PrcbPad90        : Ptr64 Void
   +0x8588 ScbList          : _LIST_ENTRY
   +0x8598 ForceIdleDpc     : _KDPC
   +0x85d8 DpcWatchdogDpc   : _KDPC
   +0x8618 PrcbPad98        : [8] Uint8B
   +0x8658 Cache            : [5] _CACHE_DESCRIPTOR
   +0x8694 CacheCount       : Uint4B
   +0x8698 CachedCommit     : Uint4B
   +0x869c CachedResidentAvailable : Uint4B
   +0x86a0 WheaInfo         : Ptr64 Void
   +0x86a8 EtwSupport       : Ptr64 Void
   +0x86b0 ExSaPageArray    : Ptr64 Void
   +0x86b8 KeAlignmentFixupCount : Uint4B
   +0x86bc PrcbPad95        : Uint4B
   +0x86c0 HypercallPageList : _SLIST_HEADER
   +0x86d0 StatisticsPage   : Ptr64 Uint8B
   +0x86d8 GenerationTarget : Uint8B
   +0x86e0 PrcbPad85        : [4] Uint8B
   +0x8700 HypercallCachedPages : Ptr64 Void
   +0x8708 VirtualApicAssist : Ptr64 Void
   +0x8710 PackageProcessorSet : _KAFFINITY_EX
   +0x8818 ProcessorId      : Uint4B
   +0x881c CoreId           : Uint4B
   +0x8820 ModuleId         : Uint4B
   +0x8824 DieId            : Uint4B
   +0x8828 PackageId        : Uint4B
   +0x8818 TopologyId       : [5] Uint4B
   +0x882c NodeRelativeTopologyIndex : [5] Uint4B
   +0x8840 SharedReadyQueueMask : Uint8B
   +0x8848 SharedReadyQueue : Ptr64 _KSHARED_READY_QUEUE
   +0x8850 SharedQueueScanOwner : Uint4B
   +0x8854 ScanSiblingIndex : Uint4B
   +0x8858 CoreControlBlock : Ptr64 _KCORE_CONTROL_BLOCK
   +0x8860 CoreProcessorSet : Uint8B
   +0x8868 ScanSiblingMask  : Uint8B
   +0x8870 LLCMask          : Uint8B
   +0x8878 GroupModuleProcessorSet : Uint8B
   +0x8880 SmtIsolationThread : Ptr64 _KTHREAD
   +0x8888 PrcbPad97        : [2] Uint8B
   +0x8898 ProcessorProfileControlArea : Ptr64 _PROCESSOR_PROFILE_CONTROL_AREA
   +0x88a0 ProfileEventIndexAddress : Ptr64 Void
   +0x88a8 DpcWatchdogProfile : Ptr64 Ptr64 Void
   +0x88b0 DpcWatchdogProfileCurrentEmptyCapture : Ptr64 Ptr64 Void
   +0x88b8 SchedulerAssist  : Ptr64 Void
   +0x88c0 SynchCounters    : _SYNCH_COUNTERS
   +0x8978 PrcbPad94        : Uint8B
   +0x8980 FsCounters       : _FILESYSTEM_DISK_COUNTERS
   +0x8990 VendorString     : [13] UChar
   +0x899d PrcbPad100       : [3] UChar
   +0x89a0 FeatureBits      : Uint8B
   +0x89a8 UpdateSignature  : _LARGE_INTEGER
   +0x89b0 PteBitCache      : Uint8B
   +0x89b8 PteBitOffset     : Uint4B
   +0x89bc PrcbPad105       : Uint4B
   +0x89c0 Context          : Ptr64 _CONTEXT
   +0x89c8 ContextFlagsInit : Uint4B
   +0x89cc PrcbPad115       : Uint4B
   +0x89d0 ExtendedState    : Ptr64 _XSAVE_AREA
   +0x89d8 IsrStack         : Ptr64 Void
   +0x89e0 EntropyTimingState : _KENTROPY_TIMING_STATE
   +0x8b38 StibpPairingTrace : <unnamed-tag>
   +0x8b70 AbSelfIoBoostsList : _SINGLE_LIST_ENTRY
   +0x8b78 AbPropagateBoostsList : _SINGLE_LIST_ENTRY
   +0x8b80 AbDpc            : _KDPC
   +0x8bc0 IoIrpStackProfilerCurrent : _IOP_IRP_STACK_PROFILER
   +0x8c14 IoIrpStackProfilerPrevious : _IOP_IRP_STACK_PROFILER
   +0x8c68 SecureFault      : _KSECURE_FAULT_INFORMATION
   +0x8c80 LocalSharedReadyQueue : Ptr64 _KSHARED_READY_QUEUE
   +0x8c88 PrcbPad125       : [7] Uint8B
   +0x8cc0 TimerExpirationTraceCount : Uint4B
   +0x8cc4 PrcbPad127       : Uint4B
   +0x8cc8 TimerExpirationTrace : [16] _KTIMER_EXPIRATION_TRACE
   +0x8dc8 PrcbPad128       : [7] Uint8B
   +0x8e00 ClockTimerState  : _KCLOCK_TIMER_STATE
   +0x9318 PrcbPad129       : [40] UChar
   +0x9340 Mailbox          : Ptr64 _REQUEST_MAILBOX
   +0x9348 PrcbPad130       : [7] Uint8B
   +0x9380 McheckContext    : [2] _MACHINE_CHECK_CONTEXT
   +0x9420 TransitionShadowStack : Uint8B
   +0x9428 KernelShadowStackInitial : Uint8B
   +0x9430 IstShadowStacksTable : Ptr64 Uint8B
   +0x9438 CachedShadowStack : Ptr64 Void
   +0x9440 SelfmapLockHandle : [4] _KLOCK_QUEUE_HANDLE
   +0x94a0 PrcbPad134a      : [4] Uint8B
   +0x94c0 DieProcessorSet  : _KAFFINITY_EX
   +0x95c8 CoresPerPhysicalDie : Uint4B
   +0x95cc LogicalProcessorsPerModule : Uint4B
   +0x95d0 FreezeForRecoveryDpc : _KDPC
   +0x9610 ModuleProcessorSet : _KAFFINITY_EX
   +0x9718 LocalCoreControlBlock : _KCORE_CONTROL_BLOCK
   +0x9760 PrcbPad138       : [1824] UChar
   +0x9e80 KernelDirectoryTableBase : Uint8B
   +0x9e88 RspBaseShadow    : Uint8B
   +0x9e90 UserRspShadow    : Uint8B
   +0x9e98 ShadowFlags      : Uint4B
   +0x9e9c PrcbPad138b      : Uint4B
   +0x9ea0 PrcbPad138c      : Uint8B
   +0x9ea8 PrcbPad138d      : Uint2B
   +0x9eaa VerwSelector     : Uint2B
   +0x9eac DbgMceNestingLevel : Uint4B
   +0x9eb0 DbgMceFlags      : Uint4B
   +0x9eb4 PrcbPad139b      : Uint4B
   +0x9eb8 CacheProcessorSet : [5] _KAFFINITY_EX
   +0xa3e0 PrcbPad140       : [340] Uint8B
   +0xae80 PrcbPad140a      : [8] Uint8B
   +0xaec0 PrcbPad141       : [512] Uint8B
   +0xbec0 RequestMailbox   : [1] _REQUEST_MAILBOX
```