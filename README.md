# Docs

一些笔记和介绍文档。这些东西会当做讲义在课程上讲解(随缘直播课)。本仓库提供了图层源文件，它们存放在`excalidraw`文件夹中。您可以下载这些源文件进行任意修改。

学生，喜欢计算机安全的操作系统安全和网络安全。目前还在学习计算机基础课程：
- [x] 操作系统
- [ ] 计算机网络
- [ ] 算法设计与分析
- [ ] 编译原理

**水平有限，如果我的理解有误，希望您能快速与我取得联系**。

***

## Windows 
***
- [x] [Windows Architecture Overview](./Windows/Internals/Architecture.md)
  在阅读其他关于Windows内核的文章之前，您应该先阅读本篇。本篇简单介绍了Windows系统的结构，以及Windows内部的构成，以及它们的作用。随便写了一点东西，需要详细了解的话推荐看《Windows Internals》

- [x] [Windows 对象管理](./Windows/ObjectManagement/ObjectManagement.md)
  分析Windows内核的对象管理机制，其中参考了《Windows内核原理与实现》。

- [x] [深入解析Windows句柄](./Windows/Handle/Handle.md)
  解析Windows的句柄(HANDLE)机制，以及Windows内核是如何管理，使用句柄。(建议您先阅读Windows对象管理)

- [x] [Windows APC机制分析](./Windows/APC/apc.md)
  分析Windows APC(异步过程调用)机制，其中参考了《Windows内核原理与实现》。

## Linux

***
[链接与加载](./Linux/linking/linking.md)
介绍链接器与加载器。从传统的静态链接到加载时的共享库的动态链接，以及到运行时的共享库的动态链接。深入探讨了操作系统是如何管理一个程序所需要使用各个库。对可执行目标文件也进行了一些讨论，介绍了ELF文件与Windows PE文件。一些章节会有对 `Glibc` 库源码的分析，更深入的分析操作系统的工作。虽然大部分以Linux系统为例子，不过一些思想在Windows也同样适用。

**基础部分**
- [x] 编译过程
- [x] 二进制文件
- [ ] 符号解析
- [ ] 重定位

**进阶部分**
- [x] dlopen源码分析
- [ ] dlsym源码分析

**高阶部分**
- [x] PIC(位置无关代码)与延迟绑定

## 处理器架构

***
- [ ] [Intel Processor Trace 简单介绍](./x86_64/IntelPT/main.md)
  介绍Intel Processor Trace技术。

