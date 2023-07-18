# 分析延迟绑定与动态链接的过程

在开始阅读前，您需要一点关于elf文件格式的基础知识，本篇将不会将文笔浪费到讲解这些基础知识上。本篇是对 《CS:APP》第七章动态链接的深入探讨，本篇并不会很难（因为我水平也不咋滴）。

在阅读开始前，您最好跟着示例一起一步一步的来执行程序，看看这个过程在真正的机器上运行是什么样子，您会对这个过程有着更加清晰和深入的认识。您得到的结果可能（或者说一定）与我示例上的结果不同，这些差异主要是地址的不同，它们的过程仍然是一样的。对于示例代码，本篇其实并没有完全使用到，只分析了第一个函数，其他的函数的过程与之类似。如果您有兴趣，您可以继续执行并验证。

`src`文件夹里面存放了本篇的示例的源代码。您可以使用以下命令来编译这些代码。

> linux> gcc -shared -fpic -o libvector.so addvec.c multvec.c

> linux> gcc -Og -z lazy -z fstack-protector -o prog2l main2.c ./libvector.so

`-fpic`：指示编译器生成与位置无关的目标代码。

`-z lazy` ：强行启用延迟绑定。

`-z fstack-protector` ：禁用栈保护，能让我们忽略无关的函数，来把精力放在我们需要研究的地方。

[延迟绑定的简单分析](./doc/Lazy_Binding.md)

[动态链接过程的简单分析](./doc/_dl_fixup.md)
