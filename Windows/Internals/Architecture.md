# Windows Overview

操作系统本身属于软件的范畴，但是它需要紧密地跟硬件打交道，它为上层应用软件或应用系统提供了一层抽象，专门负责硬件资源的管理和分配。应用软件不需要直接跟硬件打交道，它们利用操作系统提供的功能来实现各种应用任务，如果它们要访问硬件，则必须通过操作系统提供的抽象接口来完成。

现代操作系统拥有两种特权级模式：内核模式(Privilege 0, 数字越低级别越高，运行在Ring 0环境下)和用户模式(Privilege 3, 运行在Ring 3环境下)。虽然x86_64架构提供了4种特权等级，初衷是为了让部分驱动程序或者应用程序运行在 Ring 1 和 Ring 2环境下，这样的好处是即使驱动程序崩溃，内核并不受牵连仍然可以正常的运行。但这种设计大大增加了操作系统的复杂度，Windows和Linux都只有两种特权级。操作系统核心运行在内核模式下，用户程序运行在用户模式。


下图展示了Windows内核结构的简化版本

![A Simplified Version of Windows Architecture](./img/simplified_architecture.png)

第一条红色的横线划分Windows的用户模式和内核模式两部分，上面代表用户层，用户进程在上面执行，下面是内核层，内核管理着计算机资源，并为用户层程序提供API供上层程序使用。

第二条红色的横线划分内核和虚拟机。严格来讲，虚拟机仍然运行在与内核相同的特权级，但是不同在于它使用了专用的CPU指令集(Intel的 VT-x, AMD的SVM)。它们将自身与内核隔离，与此同时，它也监视着内核和应用程序。关于该层还有一个不准确的叫法"ring -1"。

用户模式下的进程可以被描述为下面4种基本类型：

- 用户进程(User processes)  该类型又可以分为两类，Classic Apps，如使用CreateProcess API创建的进程。另一种是现代应用程序(Modern Apps，或称 UWP apps 或者 immersive Proceses)。

- 服务进程(Service processes)  这些进程承载Windows服务。比如Tash Scheduler。Windows管理工具组件提供了 服务 程序，该程序可以查看当前系统中所有的服务进程。

- 系统进程(System processes)  它们是固有的进程，例如登录进程或者会话管理器。它们并不是Windows服务。即，它们并不通过服务控制管理器启动。

- 环境子系统服务进程(Environment subsystem server processes)   它们为用户和程序员们提供了对其他操作系统环境或特性的部分支持。Windows NT原本支持三种子系统环境：Win32，POSIX和OS/2。然而现代Windows已经不提供除了Win32子系统之外的其他两个子系统环境。但是包含了一个新的子系统 Windows Subsystem for Linux (WSL)。然而它并不算是上述的子系统。

内核组件包含以下部分：

- 硬件抽象层(Hardware Abstraction Layer)    该层直接与硬件打交道。这一层的用意是把所有与硬件相关联的代码逻辑隔离到一个专门的模块中，从而使上面的层次尽可能做到独立于硬件平台。

- 内核(Kernel)  由低级的操作系统功能组成，比如线程调度，中断，异常分发和多处理器同步。它也提供了一组例程和基本对象供执行体层使用它们来完成更高层的构造。内核层既与硬件抽象层打交道，又与执行体层打交道。它将HAL提供的功能进行"封装"，供执行体层使用。

- 设备驱动(Device drivers)  它既包含硬件设备驱动，也包含非硬件设备驱动。前者用来传输用户的I/O函数调用到特定的硬件设备。后者是一些文件系统驱动或网络驱动等一些不需要非硬件的操作系统重要组件。

- 执行体(Executive) Windows的执行体包含基本的操作系统服务，比如内存管理，进程线程管理等。执行体利用内核提供的基本例程去构造更高级的例程，一些例程作为系统的API。上层的用户调用NTDLL.DLL提供的API，而NTDLL.DLL的函数才真正地调用系统API。

- 窗口和图形系统(The windowing and graphics system)  它实现了图形用户界面（GUI）功能（更广为人知的是Windows user和GDI功能），例如处理窗口、用户界面控件和绘图。 

- 虚拟机层(The hypervisor layer) 它仅由一个组件组成：虚拟机本身。此环境中没有驱动程序或其他模块。也就是说，虚拟机本身就是由多个内部层和服务组成，如其自己的内存管理器、虚拟处理器调度器、中断和定时器管理、同步例程等。


# References

1. **Windows Internals Seventh Edition Part 1**
2. **Windows内核原理与实现**