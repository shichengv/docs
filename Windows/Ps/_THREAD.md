# _KTHREAD

```
0: kd> dt _KTHREAD
nt!_KTHREAD
   +0x000 Header           : _DISPATCHER_HEADER
   +0x018 SListFaultAddress : Ptr64 Void
   +0x020 QuantumTarget    : Uint8B
   +0x028 InitialStack     : Ptr64 Void
   +0x030 StackLimit       : Ptr64 Void
   +0x038 StackBase        : Ptr64 Void
   +0x040 ThreadLock       : Uint8B
   +0x048 CycleTime        : Uint8B
   +0x050 CurrentRunTime   : Uint4B
   +0x054 ExpectedRunTime  : Uint4B
   +0x058 KernelStack      : Ptr64 Void
   +0x060 StateSaveArea    : Ptr64 _XSAVE_FORMAT
   +0x068 SchedulingGroup  : Ptr64 _KSCHEDULING_GROUP
   +0x070 WaitRegister     : _KWAIT_STATUS_REGISTER
   +0x071 Running          : UChar
   +0x072 Alerted          : [2] UChar
   +0x074 AutoBoostActive  : Pos 0, 1 Bit
   +0x074 ReadyTransition  : Pos 1, 1 Bit
   +0x074 WaitNext         : Pos 2, 1 Bit
   +0x074 SystemAffinityActive : Pos 3, 1 Bit
   +0x074 Alertable        : Pos 4, 1 Bit
   +0x074 UserStackWalkActive : Pos 5, 1 Bit
   +0x074 ApcInterruptRequest : Pos 6, 1 Bit
   +0x074 QuantumEndMigrate : Pos 7, 1 Bit
   +0x074 SecureThread     : Pos 8, 1 Bit
   +0x074 TimerActive      : Pos 9, 1 Bit
   +0x074 SystemThread     : Pos 10, 1 Bit
   +0x074 ProcessDetachActive : Pos 11, 1 Bit
   +0x074 CalloutActive    : Pos 12, 1 Bit
   +0x074 ScbReadyQueue    : Pos 13, 1 Bit
   +0x074 ApcQueueable     : Pos 14, 1 Bit
   +0x074 ReservedStackInUse : Pos 15, 1 Bit
   +0x074 Spare            : Pos 16, 1 Bit
   +0x074 TimerSuspended   : Pos 17, 1 Bit
   +0x074 SuspendedWaitMode : Pos 18, 1 Bit
   +0x074 SuspendSchedulerApcWait : Pos 19, 1 Bit
   +0x074 CetUserShadowStack : Pos 20, 1 Bit
   +0x074 BypassProcessFreeze : Pos 21, 1 Bit
   +0x074 CetKernelShadowStack : Pos 22, 1 Bit
   +0x074 StateSaveAreaDecoupled : Pos 23, 1 Bit
   +0x074 Reserved         : Pos 24, 8 Bits
   +0x074 MiscFlags        : Int4B
   +0x078 UserIdealProcessorFixed : Pos 0, 1 Bit
   +0x078 IsolationWidth   : Pos 1, 1 Bit
   +0x078 AutoAlignment    : Pos 2, 1 Bit
   +0x078 DisableBoost     : Pos 3, 1 Bit
   +0x078 AlertedByThreadId : Pos 4, 1 Bit
   +0x078 QuantumDonation  : Pos 5, 1 Bit
   +0x078 EnableStackSwap  : Pos 6, 1 Bit
   +0x078 GuiThread        : Pos 7, 1 Bit
   +0x078 DisableQuantum   : Pos 8, 1 Bit
   +0x078 ChargeOnlySchedulingGroup : Pos 9, 1 Bit
   +0x078 DeferPreemption  : Pos 10, 1 Bit
   +0x078 QueueDeferPreemption : Pos 11, 1 Bit
   +0x078 ForceDeferSchedule : Pos 12, 1 Bit
   +0x078 SharedReadyQueueAffinity : Pos 13, 1 Bit
   +0x078 FreezeCount      : Pos 14, 1 Bit
   +0x078 TerminationApcRequest : Pos 15, 1 Bit
   +0x078 AutoBoostEntriesExhausted : Pos 16, 1 Bit
   +0x078 KernelStackResident : Pos 17, 1 Bit
   +0x078 TerminateRequestReason : Pos 18, 2 Bits
   +0x078 ProcessStackCountDecremented : Pos 20, 1 Bit
   +0x078 RestrictedGuiThread : Pos 21, 1 Bit
   +0x078 VpBackingThread  : Pos 22, 1 Bit
   +0x078 EtwStackTraceCrimsonApcDisabled : Pos 23, 1 Bit
   +0x078 EtwStackTraceApcInserted : Pos 24, 8 Bits
   +0x078 ThreadFlags      : Int4B
   +0x07c Tag              : UChar
   +0x07d SystemHeteroCpuPolicy : UChar
   +0x07e UserHeteroCpuPolicy : Pos 0, 7 Bits
   +0x07e ExplicitSystemHeteroCpuPolicy : Pos 7, 1 Bit
   +0x07f RunningNonRetpolineCode : Pos 0, 1 Bit
   +0x07f SpecCtrlSpare    : Pos 1, 7 Bits
   +0x07f SpecCtrl         : UChar
   +0x080 SystemCallNumber : Uint4B
   +0x084 ReadyTime        : Uint4B
   +0x088 FirstArgument    : Ptr64 Void
   +0x090 TrapFrame        : Ptr64 _KTRAP_FRAME
   +0x098 ApcState         : _KAPC_STATE
   +0x098 ApcStateFill     : [43] UChar
   +0x0c3 Priority         : Char
   +0x0c4 UserIdealProcessor : Uint4B
   +0x0c8 WaitStatus       : Int8B
   +0x0d0 WaitBlockList    : Ptr64 _KWAIT_BLOCK
   +0x0d8 WaitListEntry    : _LIST_ENTRY
   +0x0d8 SwapListEntry    : _SINGLE_LIST_ENTRY
   +0x0e8 Queue            : Ptr64 _DISPATCHER_HEADER
   +0x0f0 Teb              : Ptr64 Void
   +0x0f8 RelativeTimerBias : Uint8B
   +0x100 Timer            : _KTIMER
   +0x140 WaitBlock        : [4] _KWAIT_BLOCK
   +0x140 WaitBlockFill4   : [20] UChar
   +0x154 ContextSwitches  : Uint4B
   +0x140 WaitBlockFill5   : [68] UChar
   +0x184 State            : UChar
   +0x185 Spare13          : Char
   +0x186 WaitIrql         : UChar
   +0x187 WaitMode         : Char
   +0x140 WaitBlockFill6   : [116] UChar
   +0x1b4 WaitTime         : Uint4B
   +0x140 WaitBlockFill7   : [164] UChar
   +0x1e4 KernelApcDisable : Int2B
   +0x1e6 SpecialApcDisable : Int2B
   +0x1e4 CombinedApcDisable : Uint4B
   +0x140 WaitBlockFill8   : [40] UChar
   +0x168 ThreadCounters   : Ptr64 _KTHREAD_COUNTERS
   +0x140 WaitBlockFill9   : [88] UChar
   +0x198 XStateSave       : Ptr64 _XSTATE_SAVE
   +0x140 WaitBlockFill10  : [136] UChar

# 域指针，指向由Windows子系统管理的区域。
   +0x1c8 Win32Thread      : Ptr64 Void

   +0x140 WaitBlockFill11  : [176] UChar
   +0x1f0 Spare18          : Uint8B
   +0x1f8 Spare19          : Uint8B
   +0x200 ThreadFlags2     : Int4B
   +0x200 BamQosLevel      : Pos 0, 8 Bits
   +0x200 ThreadFlags2Reserved : Pos 8, 24 Bits
   +0x204 HgsFeedbackClass : UChar
   +0x205 Spare23          : [3] UChar
   +0x208 QueueListEntry   : _LIST_ENTRY
   +0x218 NextProcessor    : Uint4B
   +0x218 NextProcessorNumber : Pos 0, 31 Bits
   +0x218 SharedReadyQueue : Pos 31, 1 Bit
   +0x21c QueuePriority    : Int4B
   +0x220 Process          : Ptr64 _KPROCESS
   +0x228 UserAffinity     : Ptr64 _KAFFINITY_EX
   +0x230 UserAffinityPrimaryGroup : Uint2B
   +0x232 PreviousMode     : Char
   +0x233 BasePriority     : Char
   +0x234 PriorityDecrement : Char
   +0x234 ForegroundBoost  : Pos 0, 4 Bits
   +0x234 UnusualBoost     : Pos 4, 4 Bits
   +0x235 Preempted        : UChar
   +0x236 AdjustReason     : UChar
   +0x237 AdjustIncrement  : Char
   +0x238 AffinityVersion  : Uint8B
   +0x240 Affinity         : Ptr64 _KAFFINITY_EX
   +0x248 AffinityPrimaryGroup : Uint2B
   +0x24a ApcStateIndex    : UChar
   +0x24b WaitBlockCount   : UChar
   +0x24c IdealProcessor   : Uint4B
   +0x250 NpxState         : Uint8B
   +0x258 SavedApcState    : _KAPC_STATE
   +0x258 SavedApcStateFill : [43] UChar
   +0x283 WaitReason       : UChar
   +0x284 SuspendCount     : Char
   +0x285 Saturation       : Char
   +0x286 SListFaultCount  : Uint2B
   +0x288 SchedulerApc     : _KAPC
   +0x288 SchedulerApcFill1 : [3] UChar
   +0x28b QuantumReset     : UChar
   +0x288 SchedulerApcFill2 : [4] UChar
   +0x28c KernelTime       : Uint4B
   +0x288 SchedulerApcFill3 : [64] UChar
   +0x2c8 WaitPrcb         : Ptr64 _KPRCB
   +0x288 SchedulerApcFill4 : [72] UChar
   +0x2d0 LegoData         : Ptr64 Void
   +0x288 SchedulerApcFill5 : [83] UChar
   +0x2db CallbackNestingLevel : UChar
   +0x2dc UserTime         : Uint4B
   +0x2e0 SuspendEvent     : _KEVENT
   +0x2f8 ThreadListEntry  : _LIST_ENTRY
   +0x308 MutantListHead   : _LIST_ENTRY
   +0x318 AbEntrySummary   : UChar
   +0x319 AbWaitEntryCount : UChar
   +0x31a FreezeFlags      : UChar
   +0x31a FreezeCount2     : Pos 0, 1 Bit
   +0x31a FreezeNormal     : Pos 1, 1 Bit
   +0x31a FreezeDeep       : Pos 2, 1 Bit
   +0x31b SystemPriority   : Char
   +0x31c SecureThreadCookie : Uint4B
   +0x320 Spare22          : Ptr64 Void
   +0x328 PropagateBoostsEntry : _SINGLE_LIST_ENTRY
   +0x330 IoSelfBoostsEntry : _SINGLE_LIST_ENTRY
   +0x338 PriorityFloorCounts : [32] UChar
   +0x358 PriorityFloorSummary : Uint4B
   +0x35c AbCompletedIoBoostCount : Int4B
   +0x360 AbCompletedIoQoSBoostCount : Int4B
   +0x364 KeReferenceCount : Int2B
   +0x366 AbOrphanedEntrySummary : UChar
   +0x367 AbOwnedEntryCount : UChar
   +0x368 ForegroundLossTime : Uint4B
   +0x370 GlobalForegroundListEntry : _LIST_ENTRY
   +0x370 ForegroundDpcStackListEntry : _SINGLE_LIST_ENTRY
   +0x378 InGlobalForegroundList : Uint8B
   +0x380 ReadOperationCount : Int8B
   +0x388 WriteOperationCount : Int8B
   +0x390 OtherOperationCount : Int8B
   +0x398 ReadTransferCount : Int8B
   +0x3a0 WriteTransferCount : Int8B
   +0x3a8 OtherTransferCount : Int8B
   +0x3b0 QueuedScb        : Ptr64 _KSCB
   +0x3b8 ThreadTimerDelay : Uint4B
   +0x3bc ThreadFlags3     : Int4B
   +0x3bc ThreadFlags3Reserved : Pos 0, 8 Bits
   +0x3bc PpmPolicy        : Pos 8, 3 Bits
   +0x3bc ThreadFlags3Reserved2 : Pos 11, 21 Bits
   +0x3c0 TracingPrivate   : [1] Uint8B
   +0x3c8 SchedulerAssist  : Ptr64 Void
   +0x3d0 AbWaitObject     : Ptr64 Void
   +0x3d8 ReservedPreviousReadyTimeValue : Uint4B
   +0x3e0 KernelWaitTime   : Uint8B
   +0x3e8 UserWaitTime     : Uint8B
   +0x3f0 GlobalUpdateVpThreadPriorityListEntry : _LIST_ENTRY
   +0x3f0 UpdateVpThreadPriorityDpcStackListEntry : _SINGLE_LIST_ENTRY
   +0x3f8 InGlobalUpdateVpThreadPriorityList : Uint8B
   +0x400 SchedulerAssistPriorityFloor : Int4B
   +0x404 RealtimePriorityFloor : Int4B
   +0x408 KernelShadowStack : Ptr64 Void
   +0x410 KernelShadowStackInitial : Ptr64 Void
   +0x418 KernelShadowStackBase : Ptr64 Void
   +0x420 KernelShadowStackLimit : _KERNEL_SHADOW_STACK_LIMIT
   +0x428 ExtendedFeatureDisableMask : Uint8B
   +0x430 HgsFeedbackStartTime : Uint8B
   +0x438 HgsFeedbackCycles : Uint8B
   +0x440 HgsInvalidFeedbackCount : Uint4B
   +0x444 HgsLowerPerfClassFeedbackCount : Uint4B
   +0x448 HgsHigherPerfClassFeedbackCount : Uint4B
   +0x44c Spare27          : Uint4B
   +0x450 SystemAffinityTokenListHead : _SINGLE_LIST_ENTRY
   +0x458 IptSaveArea      : Ptr64 Void
   +0x460 ResourceIndex    : UChar
   +0x461 CoreIsolationReasons : UChar
   +0x462 BamQosLevelFromAssistPage : UChar
   +0x463 Spare31          : [1] UChar
   +0x464 Spare32          : Uint4B
   +0x468 EndPadding       : [3] Uint8B
```


# _ETHREAD

```
0: kd> dt _ETHREAD
nt!_ETHREAD
   +0x000 Tcb              : _KTHREAD
   +0x480 CreateTime       : _LARGE_INTEGER
   +0x488 ExitTime         : _LARGE_INTEGER
   +0x488 KeyedWaitChain   : _LIST_ENTRY
   +0x498 PostBlockList    : _LIST_ENTRY
   +0x498 ForwardLinkShadow : Ptr64 Void
   +0x4a0 StartAddress     : Ptr64 Void
   +0x4a8 TerminationPort  : Ptr64 _TERMINATION_PORT
   +0x4a8 ReaperLink       : Ptr64 _ETHREAD
   +0x4a8 KeyedWaitValue   : Ptr64 Void
   +0x4b0 ActiveTimerListLock : Uint8B
   +0x4b8 ActiveTimerListHead : _LIST_ENTRY
   +0x4c8 Cid              : _CLIENT_ID
   +0x4d8 KeyedWaitSemaphore : _KSEMAPHORE
   +0x4d8 AlpcWaitSemaphore : _KSEMAPHORE
   +0x4f8 ClientSecurity   : _PS_CLIENT_SECURITY_CONTEXT
   +0x500 IrpList          : _LIST_ENTRY
   +0x510 TopLevelIrp      : Uint8B
   +0x518 DeviceToVerify   : Ptr64 _DEVICE_OBJECT
   +0x520 Win32StartAddress : Ptr64 Void
   +0x528 ChargeOnlySession : Ptr64 Void
   +0x530 LegacyPowerObject : Ptr64 Void
   +0x538 ThreadListEntry  : _LIST_ENTRY
   +0x548 RundownProtect   : _EX_RUNDOWN_REF
   +0x550 ThreadLock       : _EX_PUSH_LOCK
   +0x558 ReadClusterSize  : Uint4B
   +0x55c MmLockOrdering   : Int4B
   +0x560 CrossThreadFlags : Uint4B
   +0x560 Terminated       : Pos 0, 1 Bit
   +0x560 ThreadInserted   : Pos 1, 1 Bit
   +0x560 HideFromDebugger : Pos 2, 1 Bit
   +0x560 ActiveImpersonationInfo : Pos 3, 1 Bit
   +0x560 HardErrorsAreDisabled : Pos 4, 1 Bit
   +0x560 BreakOnTermination : Pos 5, 1 Bit
   +0x560 SkipCreationMsg  : Pos 6, 1 Bit
   +0x560 SkipTerminationMsg : Pos 7, 1 Bit
   +0x560 CopyTokenOnOpen  : Pos 8, 1 Bit
   +0x560 ThreadIoPriority : Pos 9, 3 Bits
   +0x560 ThreadPagePriority : Pos 12, 3 Bits
   +0x560 RundownFail      : Pos 15, 1 Bit
   +0x560 UmsForceQueueTermination : Pos 16, 1 Bit
   +0x560 IndirectCpuSets  : Pos 17, 1 Bit
   +0x560 DisableDynamicCodeOptOut : Pos 18, 1 Bit
   +0x560 ExplicitCaseSensitivity : Pos 19, 1 Bit
   +0x560 PicoNotifyExit   : Pos 20, 1 Bit
   +0x560 DbgWerUserReportActive : Pos 21, 1 Bit
   +0x560 ForcedSelfTrimActive : Pos 22, 1 Bit
   +0x560 SamplingCoverage : Pos 23, 1 Bit
   +0x560 ReservedCrossThreadFlags : Pos 24, 8 Bits
   +0x564 SameThreadPassiveFlags : Uint4B
   +0x564 ActiveExWorker   : Pos 0, 1 Bit
   +0x564 MemoryMaker      : Pos 1, 1 Bit
   +0x564 StoreLockThread  : Pos 2, 2 Bits
   +0x564 ClonedThread     : Pos 4, 1 Bit
   +0x564 KeyedEventInUse  : Pos 5, 1 Bit
   +0x564 SelfTerminate    : Pos 6, 1 Bit
   +0x564 RespectIoPriority : Pos 7, 1 Bit
   +0x564 ActivePageLists  : Pos 8, 1 Bit
   +0x564 SecureContext    : Pos 9, 1 Bit
   +0x564 ZeroPageThread   : Pos 10, 1 Bit
   +0x564 WorkloadClass    : Pos 11, 1 Bit
   +0x564 GenerateDumpOnBadHandleAccess : Pos 12, 1 Bit
   +0x564 ReservedSameThreadPassiveFlags : Pos 13, 19 Bits
   +0x568 SameThreadApcFlags : Uint4B
   +0x568 OwnsProcessAddressSpaceExclusive : Pos 0, 1 Bit
   +0x568 OwnsProcessAddressSpaceShared : Pos 1, 1 Bit
   +0x568 HardFaultBehavior : Pos 2, 1 Bit
   +0x568 StartAddressInvalid : Pos 3, 1 Bit
   +0x568 EtwCalloutActive : Pos 4, 1 Bit
   +0x568 SuppressSymbolLoad : Pos 5, 1 Bit
   +0x568 Prefetching      : Pos 6, 1 Bit
   +0x568 OwnsVadExclusive : Pos 7, 1 Bit
   +0x569 SystemPagePriorityActive : Pos 0, 1 Bit
   +0x569 SystemPagePriority : Pos 1, 3 Bits
   +0x569 AllowUserWritesToExecutableMemory : Pos 4, 1 Bit
   +0x569 AllowKernelWritesToExecutableMemory : Pos 5, 1 Bit
   +0x569 OwnsVadShared    : Pos 6, 1 Bit
   +0x569 SessionAttachActive : Pos 7, 1 Bit
   +0x56a PasidMsrValid    : Pos 0, 1 Bit
   +0x56c CacheManagerActive : UChar
   +0x56d DisablePageFaultClustering : UChar
   +0x56e ActiveFaultCount : UChar
   +0x56f LockOrderState   : UChar
   +0x570 PerformanceCountLowReserved : Uint4B
   +0x574 PerformanceCountHighReserved : Int4B
   +0x578 AlpcMessageId    : Uint8B
   +0x580 AlpcMessage      : Ptr64 Void
   +0x580 AlpcReceiveAttributeSet : Uint4B
   +0x588 AlpcWaitListEntry : _LIST_ENTRY
   +0x598 ExitStatus       : Int4B
   +0x59c CacheManagerCount : Uint4B
   +0x5a0 IoBoostCount     : Uint4B
   +0x5a4 IoQoSBoostCount  : Uint4B
   +0x5a8 IoQoSThrottleCount : Uint4B
   +0x5ac KernelStackReference : Uint4B
   +0x5b0 BoostList        : _LIST_ENTRY
   +0x5c0 DeboostList      : _LIST_ENTRY
   +0x5d0 BoostListLock    : Uint8B
   +0x5d8 IrpListLock      : Uint8B
   +0x5e0 ReservedForSynchTracking : Ptr64 Void
   +0x5e8 CmCallbackListHead : _SINGLE_LIST_ENTRY
   +0x5f0 ActivityId       : Ptr64 _GUID
   +0x5f8 SeLearningModeListHead : _SINGLE_LIST_ENTRY
   +0x600 VerifierContext  : Ptr64 Void
   +0x608 AdjustedClientToken : Ptr64 Void
   +0x610 WorkOnBehalfThread : Ptr64 Void
   +0x618 PropertySet      : _PS_PROPERTY_SET
   +0x630 PicoContext      : Ptr64 Void
   +0x638 UserFsBase       : Uint8B
   +0x640 UserGsBase       : Uint8B
   +0x648 EnergyValues     : Ptr64 _THREAD_ENERGY_VALUES
   +0x650 SelectedCpuSets  : Uint8B
   +0x650 SelectedCpuSetsIndirect : Ptr64 Uint8B
   +0x658 Silo             : Ptr64 _EJOB
   +0x660 ThreadName       : Ptr64 _UNICODE_STRING
   +0x668 SetContextState  : Ptr64 _CONTEXT
   +0x670 LastSoftParkElectionQos : UChar
   +0x671 LastSoftParkElectionWorkloadType : UChar
   +0x672 LastSoftParkElectionRunningType : UChar
   +0x673 Spare1           : UChar
   +0x674 HeapData         : Uint4B
   +0x678 OwnerEntryListHead : _LIST_ENTRY
   +0x688 DisownedOwnerEntryListLock : Uint8B
   +0x690 DisownedOwnerEntryListHead : _LIST_ENTRY
   +0x6a0 LockEntries      : [6] _KLOCK_ENTRY
   +0x8e0 CmThreadInfo     : Ptr64 Void
   +0x8e8 FlsData          : Ptr64 Void
   +0x8f0 LastExpectedRunTime : Uint4B
   +0x8f4 LastSoftParkElectionRunTime : Uint4B
   +0x8f8 LastSoftParkElectionGeneration : Uint8B
   +0x900 LastSoftParkElectionGroupAffinity : _GROUP_AFFINITY
```