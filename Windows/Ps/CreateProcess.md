```c
NTSTATUS
NtCreateProcess(
    __out PHANDLE ProcessHandle,
    __in ACCESS_MASK DesiredAccess,
    __in_opt POBJECT_ATTRIBUTES ObjectAttributes,
    __in HANDLE ParentProcess,
    __in BOOLEAN InheritObjectTable,
    __in_opt HANDLE SectionHandle,
    __in_opt HANDLE DebugPort,
    __in_opt HANDLE ExceptionPort
    )
```

`DesiredAccess` 包含了对新进程的访问权限。

真正的创建工作由PspCreateProcess函数来完成。如果之前的模式不为内核模式就对ProcessHandle进行可写检查。然后调用PspCreateProcess，