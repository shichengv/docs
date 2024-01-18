# 随笔

一些笔记和介绍文档。这些东西会当做讲义在课程上讲解(随缘直播课)。

普通大学生，喜欢计算机安全的操作系统安全和网络安全。目前还在学习计算机基础课程：
- [x] 操作系统
- [ ] 计算机网络
- [ ] 算法设计与分析
- [ ] 编译原理

**水平有限，有不足之处还请多多指正**。

***

## Windows 
***
- [x] [Windows 对象管理](./Windows/ObjectManagement/ObjectManagement.md)
  分析Windows内核的对象管理机制，其中参考了《Windows内核原理与实现》。

- [x] [Windows APC机制分析](./Windows/APC/apc.md)
  分析Windows APC(异步过程调用)机制，其中参考了《Windows内核原理与实现》。

- [x] [深入解析Windows句柄](./Windows/Handle/Handle.md)
  解析Windows的句柄(HANDLE)机制，以及Windows内核是如何管理，使用句柄。

## Linux

***
[链接与加载](./Linux/linking/linking.md)
介绍链接器与加载器。从传统的静态链接到加载时的共享库的动态链接，以及到运行时的共享库的动态链接。深入探讨了操作系统是如何管理一个程序所需要使用各个库。对可执行目标文件也进行了一些讨论，介绍了ELF文件与Windows PE文件。一些章节会有对 `Glibc` 库源码的分析，更深入的分析操作系统的工作。虽然大部分以Linux系统为例子，不过一些思想在Windows也同样适用。

**基础部分**
- [x] 编译过程
- [ ] 二进制文件
- [ ] 静态链接
- [ ] 动态链接

**进阶部分**
- [x] dlopen源码分析
- [ ] dlsym源码分析

**高阶部分**
- [ ] PIC(位置无关代码)与延迟绑定

## 处理器架构

***
- [ ] [Intel Processor Trace 简单介绍](./x86_64/IntelPT/main.md)
  介绍Intel Processor Trace技术。

