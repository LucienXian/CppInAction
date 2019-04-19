# CppInAction

这是一个C++特性实战的项目。

## 平台

所有代码都经过以下编译器检验：

> Apple LLVM version 10.0.1 (clang-1001.0.46.3)
> Target: x86_64-apple-darwin18.2.0
> Thread model: posix

## 允许
```shell
clang++ -Wall -g -std=c++11  xxx.cpp -o xxx (-lpthread)
```

## C++11

### C++11 Utilities

* [Deleting Functions using ‘delete’ keyword](<http://www.lucienxian.top/2019/04/10/C-11-%E2%80%98delete%E2%80%99-keyword-and-deleted-functions/>), [[Code](<https://github.com/LucienXian/CppInAction/blob/master/cpp11/Utilities/delete.cpp>)];
* [std::bind](<http://www.lucienxian.top/2019/04/11/std-bind/>), [[Code](<https://github.com/LucienXian/CppInAction/blob/master/cpp11/Utilities/bind.cpp>)];
* [std::auto specifier](<http://www.lucienxian.top/2019/04/12/auto-specifier/>), [[Code](<https://github.com/LucienXian/CppInAction/blob/master/cpp11/Utilities/auto.cpp>)];
* [Variadic Templates](<http://www.lucienxian.top/2019/04/14/Variadic-Templates/>), [[Code](<https://github.com/LucienXian/CppInAction/blob/master/cpp11/Utilities/variadic_template.cpp>)];

### C++11 Lambdas

* [C++11 Lambda Function : Example & Tutorial](<http://www.lucienxian.top/2019/04/15/C-11-Lambda-Function/>), [[Code](<https://github.com/LucienXian/CppInAction/blob/master/cpp11/Lambdas/lambda1.cpp>)];
* [C++11 Lambda : Capturing local variables](<http://www.lucienxian.top/2019/04/16/C-11-Lambda-Capturing-local-variables/>), [[Code1](<https://github.com/LucienXian/CppInAction/blob/master/cpp11/Lambdas/lambda2_1.cpp>)]-[[Code2](<https://github.com/LucienXian/CppInAction/blob/master/cpp11/Lambdas/lambda2_2.cpp>)]-[[Code3](<https://github.com/LucienXian/CppInAction/blob/master/cpp11/Lambdas/lambda2_3.cpp>)];
* [C++11 Lambda : Capturing Member Variables](<http://www.lucienxian.top/2019/04/17/C-11-Lambda-Capturing-Member-Variables//>), [[Code](<https://github.com/LucienXian/CppInAction/blob/master/cpp11/Lambdas/lambda3.cpp>)];

### C++11 Multithreading

* [C++11 Multithreading : Part 1: Three Ways to Create Threads](<http://www.lucienxian.top/2019/04/18/Multithreading-Three-Ways-to-Create-Threads/>), [[Code](<https://github.com/LucienXian/CppInAction/blob/master/cpp11/MultiThreading/part1.cpp>)];

* [Part 2: Joining and Detaching Threads](<http://www.lucienxian.top/2019/04/19/Joining-and-Detaching-Threads/>), [[Code](<https://github.com/LucienXian/CppInAction/blob/master/cpp11/MultiThreading/part2.cpp>)];