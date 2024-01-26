# CreateProcess

Windows应用支持创建两种进程，一种是常见的经典进程，如使用CreateProcess API创建的进程。另一种是 现代应用程序(Modern Apps --- UWP apps 或者 immersive Proceses)。而后者的创建比前者要更复杂一些，这里不做讲解。

除了上面这两种，Windows 执行体层也支持一些其他的其他种类的进程，这些进程的启动需要绕过Windows API。例如 Native Processes，Minimal Processes 和 Pico Processes。


一个进程在创建的时候同时也会创建一个线程，进程为线程提供执行环境。

## CreateProcess参数

0. 对于由 CreateProcessAsUser 和 CreateProcessWithTokenW 两个函数创建出进程，新进程必须在指定令牌的安全上下文中运行。而 CreateProcessWithTokenW 还可以选择性地加载指定用户的用户配置文件。
1. 可执行文件的路径和命令行参数。
2. 新进程和线程对象创建时需要的安全属性。
3. 


# References

**The Birth Of A Windows Process** https://fourcore.io/blogs/how-a-windows-process-is-created-part-1

