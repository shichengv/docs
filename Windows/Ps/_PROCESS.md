```
0: kd> !process 0 0 notepad.exe
PROCESS ffffa90e57b28080
    SessionId: 1  Cid: 0428    Peb: 0035b000  ParentCid: 13b4
    DirBase: a9334000  ObjectTable: ffffd2812aa9c380  HandleCount: 611.
    Image: Notepad.exe
```

# _KPROCESS
```
0: kd> dt _KPROCESS ffffa90e57b28080
nt!_KPROCESS

// 分发器对象
   +0x000 Header           : _DISPATCHER_HEADER

// 用于当前进程参与性能分析时作为一个节点加入到全局性能分析列表
   +0x018 ProfileListHead  : _LIST_ENTRY [ 0xffffa90e`57b28098 - 0xffffa90e`57b28098 ]

// 进程页目录表地址
   +0x028 DirectoryTableBase : 0xa9334000

// 指向一个链表头，包含了该进程的所有当前线程
   +0x030 ThreadListHead   : _LIST_ENTRY [ 0xffffa90e`57b24378 - 0xffffa90e`57c50378 ]

// 自旋锁对象，保护进程中的数据成员
   +0x040 ProcessLock      : 0

   +0x044 ProcessTimerDelay : 0
   +0x048 DeepFreezeStartTime : 0x42bf9360

// 指定了该进程的线程可以在哪些处理器上运行
   +0x050 Affinity         : _KAFFINITY_EX

// 双向链表表头，记录了这个进程中处于就绪状态但尚未被加入到全局就绪链表的线程
   +0x158 ReadyListHead    : _LIST_ENTRY [ 0xffffa90e`57b281d8 - 0xffffa90e`57b281d8 ]

   +0x168 SwapListEntry    : _SINGLE_LIST_ENTRY

// 记录当前进程正在哪些处理器上运行
   +0x170 ActiveProcessors : _KAFFINITY_EX


   +0x278 AutoAlignment    : 0y0
   +0x278 DisableBoost     : 0y0
   +0x278 DisableQuantum   : 0y0
   +0x278 DeepFreeze       : 0y0
   +0x278 TimerVirtualization : 0y1
   +0x278 CheckStackExtents : 0y0
   +0x278 CacheIsolationEnabled : 0y0
   +0x278 PpmPolicy        : 0y0111
   +0x278 VaSpaceDeleted   : 0y0
   +0x278 MultiGroup       : 0y0
   +0x278 ReservedFlags    : 0y0000000000000000000 (0)

// 包含了进程中的几个标志 AutoAlignment DisableBoost DisableQuantum
   +0x278 ProcessFlags     : 0n912

   +0x27c ActiveGroupsMask : 1

// 该进程中线程的调度参数，用于指定一个进程中线程的基本优先级
// 所有线程在启动时都会继承进程的BasePriority  
   +0x280 BasePriority     : 8 ''

// 一个进程中线程的基本时限重置值
   +0x281 QuantumReset     : 18 ''
   +0x282 Visited          : 0 ''

// 设置一个内存执行选项，提供NX（内存不可执行）支持
   +0x283 Flags            : _KEXECUTE_OPTIONS

// 为该进程的线程选择适当的理想处理器，每个线程被初始化的时候，都指定此进程的 ThreadSeed值作为它的
// 理想处理器，然后ThreadSeed域又被设置为一个新的值
   +0x284 ThreadSeed       : [32] 3

   +0x2c4 IdealProcessor   : [32] 0
   +0x304 IdealNode        : [32] 0
   +0x344 IdealGlobalNode  : 0
   +0x346 Spare1           : 0

// 当前进程中有多少个线程的栈位于内存中
   +0x348 StackCount       : _KSTACK_COUNT

// 用于将当前系统中所有具有活动线程的进程串成一个链表，链表头为 KiProcessListHead
   +0x350 ProcessListEntry : _LIST_ENTRY [ 0xffffa90e`57b2c3d0 - 0xffffa90e`57b323d0 ]
   +0x360 CycleTime        : 0x3f4af35
   +0x368 ContextSwitches  : 0x3e
   +0x370 SchedulingGroup  : (null) 
   +0x378 FreezeCount      : 0
   +0x37c KernelTime       : 2
   +0x380 UserTime         : 0
   +0x384 ReadyTime        : 0
   +0x388 UserDirectoryTableBase : 0
   +0x390 AddressPolicy    : 0 ''
   +0x391 Spare2           : [71]  ""
   +0x3d8 InstrumentationCallback : (null) 
   +0x3e0 SecureState      : <unnamed-tag>
   +0x3e8 KernelWaitTime   : 0
   +0x3f0 UserWaitTime     : 0
   +0x3f8 LastRebalanceQpc : 0x00000001`a734ed49
   +0x400 PerProcessorCycleTimes : 0x00000000`00009640 Void
   +0x408 ExtendedFeatureDisableMask : 0
   +0x410 PrimaryGroup     : 0
   +0x412 Spare3           : [3] 0
   +0x418 UserCetLogging   : (null) 
   +0x420 CpuPartitionList : _LIST_ENTRY [ 0xffffa90e`57b284a0 - 0xffffa90e`57b284a0 ]
   +0x430 EndPadding       : [1] 0

```


# _EPROCESS
```

0: kd> dt _EPROCESS ffffa90e57b28080
nt!_EPROCESS

// KPROCESS 内嵌结构体
   +0x000 Pcb              : _KPROCESS

// 推锁(push lock)对象，保护 EPROCESS 中的数据成员
   +0x438 ProcessLock      : _EX_PUSH_LOCK

// 进程的唯一编号，创建时设定
   +0x440 UniqueProcessId  : 0x00000000`00000428 Void

// 双链表节点，所有活动的进程都被连接在一起
// 当进程被创建，就将该成员作为节点加入到全局链表PsActiveProcessHead当中。
      // 可以使用这种方法来查看该全局变量的信息
      0: kd> ? PsActiveProcessHead
      Evaluate expression: -8785820942496 = fffff802`64437f60
      0: kd> dt _LIST_ENTRY fffff802`64437f60
      nt!_LIST_ENTRY
      [ 0xffffa90e`506ee488 - 0xffffa90e`57c494c8 ]
         +0x000 Flink            : 0xffffa90e`506ee488 _LIST_ENTRY [ 0xffffa90e`5068f4c8 - 0xfffff802`64437f60 ]
         +0x008 Blink            : 0xffffa90e`57c494c8 _LIST_ENTRY [ 0xfffff802`64437f60 - 0xffffa90e`57b2c4c8 ]

   +0x448 ActiveProcessLinks : _LIST_ENTRY [ 0xffffa90e`57b2c4c8 - 0xffffa90e`57b324c8 ]

// 进程的停止保护锁，当进行跨进程访问该进程的句柄表、进程会话和地址空间，需要使用该锁
// 在进程跨进程引用进程句柄表、进程会话和地址空间需要获取rundown protection。
// 如果该进程需要被销毁，它要等到所有的其他进程和线程已经释放了此锁，才可以继续进行。
   +0x458 RundownProtect   : _EX_RUNDOWN_REF

   +0x460 Flags2           : 0xd014
   +0x460 JobNotReallyActive : 0y0
   +0x460 AccountingFolded : 0y0
   +0x460 NewProcessReported : 0y1
   +0x460 ExitProcessReported : 0y0
   +0x460 ReportCommitChanges : 0y1
   +0x460 LastReportMemory : 0y0
   +0x460 ForceWakeCharge  : 0y0
   +0x460 CrossSessionCreate : 0y0
   +0x460 NeedsHandleRundown : 0y0
   +0x460 RefTraceEnabled  : 0y0
   +0x460 PicoCreated      : 0y0
   +0x460 EmptyJobEvaluated : 0y0
   +0x460 DefaultPagePriority : 0y101
   +0x460 PrimaryTokenFrozen : 0y1
   +0x460 ProcessVerifierTarget : 0y0
   +0x460 RestrictSetThreadContext : 0y0
   +0x460 AffinityPermanent : 0y0
   +0x460 AffinityUpdateEnable : 0y0
   +0x460 PropagateNode    : 0y0
   +0x460 ExplicitAffinity : 0y0
   +0x460 ProcessExecutionState : 0y00
   +0x460 EnableReadVmLogging : 0y0
   +0x460 EnableWriteVmLogging : 0y0
   +0x460 FatalAccessTerminationRequested : 0y0
   +0x460 DisableSystemAllowedCpuSet : 0y0
   +0x460 ProcessStateChangeRequest : 0y00
   +0x460 ProcessStateChangeInProgress : 0y0
   +0x460 InPrivate        : 0y0
   +0x464 Flags            : 0x144d0c01
   +0x464 CreateReported   : 0y1
   +0x464 NoDebugInherit   : 0y0
   +0x464 ProcessExiting   : 0y0
   +0x464 ProcessDelete    : 0y0
   +0x464 ManageExecutableMemoryWrites : 0y0
   +0x464 VmDeleted        : 0y0
   +0x464 OutswapEnabled   : 0y0
   +0x464 Outswapped       : 0y0
   +0x464 FailFastOnCommitFail : 0y0
   +0x464 Wow64VaSpace4Gb  : 0y0
   +0x464 AddressSpaceInitialized : 0y11
   +0x464 SetTimerResolution : 0y0
   +0x464 BreakOnTermination : 0y0
   +0x464 DeprioritizeViews : 0y0
   +0x464 WriteWatch       : 0y0
   +0x464 ProcessInSession : 0y1
   +0x464 OverrideAddressSpace : 0y0
   +0x464 HasAddressSpace  : 0y1
   +0x464 LaunchPrefetched : 0y1
   +0x464 Reserved         : 0y0
   +0x464 VmTopDown        : 0y0
   +0x464 ImageNotifyDone  : 0y1
   +0x464 PdeUpdateNeeded  : 0y0
   +0x464 VdmAllowed       : 0y0
   +0x464 ProcessRundown   : 0y0
   +0x464 ProcessInserted  : 0y1
   +0x464 DefaultIoPriority : 0y010
   +0x464 ProcessSelfDelete : 0y0
   +0x464 SetTimerResolutionLink : 0y0

// 进程的创建时间
   +0x468 CreateTime       : _LARGE_INTEGER 0x01da413b`2a8fcaaf

// 进程的内存使用量
   +0x470 ProcessQuotaUsage : [2] 0x8358

// 进程的尖峰使用量
   +0x480 ProcessQuotaPeak : [2] 0x83e0

// 进程的虚拟内存大小的尖峰值
   +0x490 PeakVirtualSize  : 0x00000001`17aeb000

// 进程的虚拟内存大小
   +0x498 VirtualSize      : 0x00000001`17aea000

// 双链表节点，当进程加入到一个系统会话中时，该成员作为一个节点加入到会话的进程链表中
   +0x4a0 SessionProcessLinks : _LIST_ENTRY [ 0xffffa90e`57c49520 - 0xffffa90e`57b32520 ]

// 异常调试端口
   +0x4b0 ExceptionPortData : 0xffffa90e`53dddd30 Void
   +0x4b0 ExceptionPortValue : 0xffffa90e`53dddd30
   +0x4b0 ExceptionPortState : 0y000

// 访问令牌
   +0x4b8 Token            : _EX_FAST_REF
   +0x4c0 MmReserved       : 0
   +0x4c8 AddressCreationLock : _EX_PUSH_LOCK
   +0x4d0 PageTableCommitmentLock : _EX_PUSH_LOCK
   +0x4d8 RotateInProgress : (null) 

// 指向正在复制地址空间的那个线程
   +0x4e0 ForkInProgress   : (null) 

   +0x4e8 CommitChargeJob  : 0xffffa90e`57b26060 _EJOB
   +0x4f0 CloneRoot        : _RTL_AVL_TREE
   +0x4f8 NumberOfPrivatePages : 0xf6f
   +0x500 NumberOfLockedPages : 0xb1f
   +0x508 Win32Process     : 0xffffd281`2a9da8a0 Void
   +0x510 Job              : 0xffffa90e`57b26060 _EJOB

// 代表进程的内存区对象
   +0x518 SectionObject    : 0xffffd281`2a910590 Void
// 该内存区对象的基地址，也就是该可执行文件被复制到内存中的起始位置
   +0x520 SectionBaseAddress : 0x00007ff7`f74f0000 Void

   +0x528 Cookie           : 0x84804574
   +0x530 WorkingSetWatch  : (null) 
   +0x538 Win32WindowStation : 0x00000000`000000e8 Void
   +0x540 InheritedFromUniqueProcessId : 0x00000000`000013b4 Void
   +0x548 OwnerProcessId   : 0x13b6
   +0x550 Peb              : 0x00000000`0035b000 _PEB
   +0x558 Session          : 0xffffa90e`53d11cb0 _MM_SESSION_SPACE
   +0x560 Spare1           : (null) 
   +0x568 QuotaBlock       : 0xffffa90e`53f37cc0 _EPROCESS_QUOTA_BLOCK

// 进程的句柄表
   +0x570 ObjectTable      : 0xffffd281`2aa9c380 _HANDLE_TABLE

// 调试端口
   +0x578 DebugPort        : (null) 
   +0x580 WoW64Process     : (null) 
   +0x588 DeviceMap        : _EX_FAST_REF
   +0x590 EtwDataSource    : 0xffffa90e`56ad9dd0 Void
   +0x598 PageDirectoryPte : 0
   +0x5a0 ImageFilePointer : 0xffffa90e`577cf7d0 _FILE_OBJECT
   +0x5a8 ImageFileName    : [15]  "Notepad.exe"
   +0x5b7 PriorityClass    : 0x2 ''
   +0x5b8 SecurityPort     : (null) 
   +0x5c0 SeAuditProcessCreationInfo : _SE_AUDIT_PROCESS_CREATION_INFO
   +0x5c8 JobLinks         : _LIST_ENTRY [ 0xffffa90e`57b26088 - 0xffffa90e`57b26088 ]
   +0x5d8 HighestUserAddress : 0x00007fff`ffff0000 Void
   +0x5e0 ThreadListHead   : _LIST_ENTRY [ 0xffffa90e`57b245b8 - 0xffffa90e`57c505b8 ]
   +0x5f0 ActiveThreads    : 0x13
   +0x5f4 ImagePathHash    : 0x85d3d5f7
   +0x5f8 DefaultHardErrorProcessing : 1
   +0x5fc LastThreadExitStatus : 0n0
   +0x600 PrefetchTrace    : _EX_FAST_REF
   +0x608 LockedPagesList  : (null) 
   +0x610 ReadOperationCount : _LARGE_INTEGER 0x0
   +0x618 WriteOperationCount : _LARGE_INTEGER 0x0
   +0x620 OtherOperationCount : _LARGE_INTEGER 0x6f
   +0x628 ReadTransferCount : _LARGE_INTEGER 0x0
   +0x630 WriteTransferCount : _LARGE_INTEGER 0x0
   +0x638 OtherTransferCount : _LARGE_INTEGER 0xd46
   +0x640 CommitChargeLimit : 0
   +0x648 CommitCharge     : 0x17e0
   +0x650 CommitChargePeak : 0x187a
   +0x680 Vm               : _MMSUPPORT_FULL
   +0x7c0 MmProcessLinks   : _LIST_ENTRY [ 0xffffa90e`57b2c840 - 0xffffa90e`57b32840 ]
   +0x7d0 ModifiedPageCount : 0x3e5
   +0x7d4 ExitStatus       : 0n259

// 物理VAD树的根
   +0x7d8 VadRoot          : _RTL_AVL_TREE

   +0x7e0 VadHint          : 0xffffa90e`5799ac30 Void
   +0x7e8 VadCount         : 0xf2
   +0x7f0 VadPhysicalPages : 0
   +0x7f8 VadPhysicalPagesLimit : 0
   +0x800 AlpcContext      : _ALPC_PROCESS_CONTEXT
   +0x820 TimerResolutionLink : _LIST_ENTRY [ 0x00000000`00000000 - 0x00000000`00000000 ]
   +0x830 TimerResolutionStackRecord : (null) 
   +0x838 RequestedTimerResolution : 0
   +0x83c SmallestTimerResolution : 0

// 进程的退出时间
   +0x840 ExitTime         : _LARGE_INTEGER 0x0

   +0x848 InvertedFunctionTable : (null) 
   +0x850 InvertedFunctionTableLock : _EX_PUSH_LOCK
   +0x858 ActiveThreadsHighWatermark : 0x13
   +0x85c LargePrivateVadCount : 0
   +0x860 ThreadListLock   : _EX_PUSH_LOCK
   +0x868 WnfContext       : 0xffffd281`2a911120 Void
   +0x870 ServerSilo       : (null) 
   +0x878 SignatureLevel   : 0x2 ''
   +0x879 SectionSignatureLevel : 0x2 ''
   +0x87a Protection       : _PS_PROTECTION
   +0x87b HangCount        : 0y000
   +0x87b GhostCount       : 0y000
   +0x87b PrefilterException : 0y0
   +0x87c Flags3           : 0x3061c008
   +0x87c Minimal          : 0y0
   +0x87c ReplacingPageRoot : 0y0
   +0x87c Crashed          : 0y0
   +0x87c JobVadsAreTracked : 0y1
   +0x87c VadTrackingDisabled : 0y0
   +0x87c AuxiliaryProcess : 0y0
   +0x87c SubsystemProcess : 0y0
   +0x87c IndirectCpuSets  : 0y0
   +0x87c RelinquishedCommit : 0y0
   +0x87c HighGraphicsPriority : 0y0
   +0x87c CommitFailLogged : 0y0
   +0x87c ReserveFailLogged : 0y0
   +0x87c SystemProcess    : 0y0
   +0x87c HideImageBaseAddresses : 0y0
   +0x87c AddressPolicyFrozen : 0y1
   +0x87c ProcessFirstResume : 0y1
   +0x87c ForegroundExternal : 0y1
   +0x87c ForegroundSystem : 0y0
   +0x87c HighMemoryPriority : 0y0
   +0x87c EnableProcessSuspendResumeLogging : 0y0
   +0x87c EnableThreadSuspendResumeLogging : 0y0
   +0x87c SecurityDomainChanged : 0y1
   +0x87c SecurityFreezeComplete : 0y1
   +0x87c VmProcessorHost  : 0y0
   +0x87c VmProcessorHostTransition : 0y0
   +0x87c AltSyscall       : 0y0
   +0x87c TimerResolutionIgnore : 0y0
   +0x87c DisallowUserTerminate : 0y0
   +0x87c EnableProcessRemoteExecProtectVmLogging : 0y1
   +0x87c EnableProcessLocalExecProtectVmLogging : 0y1
   +0x87c MemoryCompressionProcess : 0y0
   +0x880 DeviceAsid       : 0n0
   +0x888 SvmData          : (null) 
   +0x890 SvmProcessLock   : _EX_PUSH_LOCK
   +0x898 SvmLock          : 0
   +0x8a0 SvmProcessDeviceListHead : _LIST_ENTRY [ 0xffffa90e`57b28920 - 0xffffa90e`57b28920 ]
   +0x8b0 LastFreezeInterruptTime : 0
   +0x8b8 DiskCounters     : 0xffffa90e`57b28c00 _PROCESS_DISK_COUNTERS
   +0x8c0 PicoContext      : (null) 
   +0x8c8 EnclaveTable     : (null) 
   +0x8d0 EnclaveNumber    : 0
   +0x8d8 EnclaveLock      : _EX_PUSH_LOCK
   +0x8e0 HighPriorityFaultsAllowed : 0
   +0x8e8 EnergyContext    : 0xffffa90e`57b28c28 _PO_PROCESS_ENERGY_CONTEXT
   +0x8f0 VmContext        : (null) 
   +0x8f8 SequenceNumber   : 0xb4
   +0x900 CreateInterruptTime : 0x42ba6294
   +0x908 CreateUnbiasedInterruptTime : 0x42ba6294
   +0x910 TotalUnbiasedFrozenTime : 0x4de8
   +0x918 LastAppStateUpdateTime : 0x42bfe148
   +0x920 LastAppStateUptime : 0y0000000000000000000000000000000000000000001010011000011001100 (0x530cc)
   +0x920 LastAppState     : 0y010
   +0x928 SharedCommitCharge : 0xd50
   +0x930 SharedCommitLock : _EX_PUSH_LOCK
   +0x938 SharedCommitLinks : _LIST_ENTRY [ 0xffffd281`29e14968 - 0xffffd281`2acbe6b8 ]
   +0x948 AllowedCpuSets   : 0
   +0x950 DefaultCpuSets   : 0
   +0x948 AllowedCpuSetsIndirect : (null) 
   +0x950 DefaultCpuSetsIndirect : (null) 
   +0x958 DiskIoAttribution : (null) 
   +0x960 DxgProcess       : 0xffffd281`2aab2760 Void
   +0x968 Win32KFilterSet  : 0
   +0x96c Machine          : 0x8664
   +0x96e Spare0           : 0
   +0x970 ProcessTimerDelay : _PS_INTERLOCKED_TIMER_DELAY_VALUES
   +0x978 KTimerSets       : 0x228
   +0x97c KTimer2Sets      : 0
   +0x980 ThreadTimerSets  : 0x1f
   +0x988 VirtualTimerListLock : 0
   +0x990 VirtualTimerListHead : _LIST_ENTRY [ 0xffffa90e`53dae8b0 - 0xffffa90e`53dacc00 ]
   +0x9a0 WakeChannel      : _WNF_STATE_NAME
   +0x9a0 WakeInfo         : _PS_PROCESS_WAKE_INFORMATION
   +0x9d0 MitigationFlags  : 0x40
   +0x9d0 MitigationFlagsValues : <unnamed-tag>
   +0x9d4 MitigationFlags2 : 0x40000000
   +0x9d4 MitigationFlags2Values : <unnamed-tag>
   +0x9d8 PartitionObject  : 0xffffa90e`506d7910 Void
   +0x9e0 SecurityDomain   : 0x00000001`00000031
   +0x9e8 ParentSecurityDomain : 0x00000001`00000031
   +0x9f0 CoverageSamplerContext : (null) 
   +0x9f8 MmHotPatchContext : (null) 
   +0xa00 IdealProcessorAssignmentBlock : _KE_IDEAL_PROCESSOR_ASSIGNMENT_BLOCK
   +0xb18 DynamicEHContinuationTargetsTree : _RTL_AVL_TREE
   +0xb20 DynamicEHContinuationTargetsLock : _EX_PUSH_LOCK
   +0xb28 DynamicEnforcedCetCompatibleRanges : _PS_DYNAMIC_ENFORCED_ADDRESS_RANGES
   +0xb38 DisabledComponentFlags : 0
   +0xb3c PageCombineSequence : 0n1
   +0xb40 EnableOptionalXStateFeaturesLock : _EX_PUSH_LOCK
   +0xb48 PathRedirectionHashes : (null) 
   +0xb50 SyscallProvider  : (null) 
   +0xb58 SyscallProviderProcessLinks : _LIST_ENTRY [ 0x00000000`00000000 - 0x00000000`00000000 ]
   +0xb68 SyscallProviderDispatchContext : _PSP_SYSCALL_PROVIDER_DISPATCH_CONTEXT
   +0xb70 MitigationFlags3 : 0
   +0xb70 MitigationFlags3Values : <unnamed-tag>
```