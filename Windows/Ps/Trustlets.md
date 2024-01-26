# Trustlets (先鸽了)

现代Windows增加了一些新的安全机制virtualization-based security (VBS)，例如 Device Guard 和 Credential Guard，它们利用虚拟机技术(Hypervisor)增强了操作系统和用户数据的安全性。Credential Guard 运行在一个隔离的用户模式环境(ring 3特权级)，伴随着一个Virtual Trust Level of 1 (VTL 1)。

Trustlets 是一个常规的 Windows PE 文件，它也包含了一些 IUM-specific 属性：
- 对于Trustlets，它们仅能使用一部分的系统调用，因为它们仅能导入一个被限制过的Windows system Dlls集合(C/C++ Runtime, KernelBase, Advapi, RPC Runtime, CNG Base Crypto, and NTDLL)。需要注意的是一些只操作数据结构但不执行系统调用的库是可以用，例如 mathematical DLLs。