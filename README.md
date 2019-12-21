# CppInAction

这是一个C++特性实战的项目。

## 平台

所有代码都经过以下编译器检验：

> Apple LLVM version 10.0.1 (clang-1001.0.46.3) <br>
> Target: x86_64-apple-darwin18.2.0 <br>
> Thread model: posix 

## 运行
```shell
clang++ -Wall -g -std=c++11  xxx.cpp -o xxx (-lpthread)
```

## C++11

### C++11 Utilities

* [Deleting Functions using ‘delete’ keyword](<http://www.lucienxian.top/2019/04/10/C-11-%E2%80%98delete%E2%80%99-keyword-and-deleted-functions/>), [[Code](<https://github.com/LucienXian/CppInAction/blob/master/cpp11/Utilities/delete.cpp>)];
* [std::bind](<http://www.lucienxian.top/2019/04/11/std-bind/>), [[Code](<https://github.com/LucienXian/CppInAction/blob/master/cpp11/Utilities/bind.cpp>)];
* [std::auto specifier](<http://www.lucienxian.top/2019/04/12/auto-specifier/>), [[Code](<https://github.com/LucienXian/CppInAction/blob/master/cpp11/Utilities/auto.cpp>)];
* [decltype](<http://www.lucienxian.top/2019/12/20/decltype-in-c-11/>), [[Code](<https://github.com/LucienXian/CppInAction/blob/master/cpp11/Utilities/decltype.cpp>)];
* [Variadic Templates](<http://www.lucienxian.top/2019/04/14/Variadic-Templates/>), [[Code1](<https://github.com/LucienXian/CppInAction/blob/master/cpp11/Utilities/variadic_template.cpp>)]
* [Variadic Tuples](<http://www.lucienxian.top/2019/06/02/Variadic-templates-in-C/>), [[Code2](<https://github.com/LucienXian/CppInAction/blob/master/cpp11/Utilities/variadic_tuple.cpp>)];


### C++11 Lambdas

* [C++11 Lambda Function : Example & Tutorial](<http://www.lucienxian.top/2019/04/15/C-11-Lambda-Function/>), [[Code](<https://github.com/LucienXian/CppInAction/blob/master/cpp11/Lambdas/lambda1.cpp>)];
* [C++11 Lambda : Capturing local variables](<http://www.lucienxian.top/2019/04/16/C-11-Lambda-Capturing-local-variables/>), [[Code1](<https://github.com/LucienXian/CppInAction/blob/master/cpp11/Lambdas/lambda2_1.cpp>)]-[[Code2](<https://github.com/LucienXian/CppInAction/blob/master/cpp11/Lambdas/lambda2_2.cpp>)]-[[Code3](<https://github.com/LucienXian/CppInAction/blob/master/cpp11/Lambdas/lambda2_3.cpp>)];
* [C++11 Lambda : Capturing Member Variables](<http://www.lucienxian.top/2019/04/17/C-11-Lambda-Capturing-Member-Variables//>), [[Code](<https://github.com/LucienXian/CppInAction/blob/master/cpp11/Lambdas/lambda3.cpp>)];

### C++11 Multithreading

* [C++11 Multithreading : Part 1: Three Ways to Create Threads](<http://www.lucienxian.top/2019/04/18/Multithreading-Three-Ways-to-Create-Threads/>), [[Code](<https://github.com/LucienXian/CppInAction/blob/master/cpp11/MultiThreading/part1.cpp>)];
* [C++11 Multithreading : Part 2: Joining and Detaching Threads](<http://www.lucienxian.top/2019/04/19/Joining-and-Detaching-Threads/>), [[Code](<https://github.com/LucienXian/CppInAction/blob/master/cpp11/MultiThreading/part2.cpp>)];
* [C++11 Multithreading : Part 3: Carefully Pass Arguments to Threads](<http://www.lucienxian.top/2019/04/20/Passing-Arguments-to-Threads/>), [[Code](<https://github.com/LucienXian/CppInAction/blob/master/cpp11/MultiThreading/part3.cpp>)];
* [C++11 Multithreading : Part 4: Sharing Data & Race Conditions](<http://www.lucienxian.top/2019/04/21/Sharing-Data-Race-Conditions/>), [[Code](<https://github.com/LucienXian/CppInAction/blob/master/cpp11/MultiThreading/part4.cpp>)];
* [C++11 Multithreading : Part 5: Using mutex to fix Race Conditions](<http://www.lucienxian.top/2019/04/22/Using-mutex-to-fix-Race-Conditions/>), [[Code](<https://github.com/LucienXian/CppInAction/blob/master/cpp11/MultiThreading/part5.cpp>)];
* [C++11 Multithreading : Part 6: Need of Event Handling](<http://www.lucienxian.top/2019/04/23/Need-of-Event-Handling/>), [[Code](<https://github.com/LucienXian/CppInAction/blob/master/cpp11/MultiThreading/part6.cpp>)];
* [C++11 Multithreading : Part 7: Condition Variables Explained](<http://www.lucienxian.top/2019/04/29/Condition-Variables-Explained/>), [[Code](<https://github.com/LucienXian/CppInAction/blob/master/cpp11/MultiThreading/part7.cpp>)];
* [C++11 Multithreading : Part 8: std::future, std::promise and Returning values from Thread](<http://www.lucienxian.top/2019/04/30/std-future-std-promise-and-Returning-values-from-Thread/>), [[Code](<https://github.com/LucienXian/CppInAction/blob/master/cpp11/MultiThreading/part8.cpp>)];
* [C++11 Multithreading : Part 9: std::async Tutorial & Example](<http://www.lucienxian.top/2019/05/01/std-async-Tutorial-Example/>), [[Code](<https://github.com/LucienXian/CppInAction/blob/master/cpp11/MultiThreading/part9.cpp>)];
* [C++11 Multithreading : Part 10: std::async Tutorial & Example](<http://www.lucienxian.top/2019/05/02/packaged-task-Example-and-Tutorial/>), [[Code](<https://github.com/LucienXian/CppInAction/blob/master/cpp11/MultiThreading/part10.cpp>)];

### C++11 Rvalue References

* [C++11 : Rvalue](<http://www.lucienxian.top/2019/05/03/Rvalue-in-C/>), [[Code](<https://github.com/LucienXian/CppInAction/blob/master/cpp11/RvalueReferences/rvalue.cpp>)];
* [C++11 : Move Contsructor & rvalue References](<http://www.lucienxian.top/2019/05/04/Move-Contsructor-rvalue-References/>), [[Code](<https://github.com/LucienXian/CppInAction/blob/master/cpp11/RvalueReferences/move_con.cpp>)];

### C++11 std::initializer_list

* [C++11 : Initializer_list](<http://www.lucienxian.top/2019/05/05/std-initializer-list/>), [[Code](<https://github.com/LucienXian/CppInAction/blob/master/cpp11/Initialzer_list/initialzer_list.cpp>)];

### C++11 Tuples

* [C++11 : std::tuples](<http://www.lucienxian.top/2019/05/08/C-11-std-tuples/>), [[Code](<https://github.com/LucienXian/CppInAction/blob/master/cpp11/Tuples/tuples.cpp>)];

### C++11 std::unordered_map

* [C++11 : std::unordered_map](<http://www.lucienxian.top/2019/05/19/C-11-unordered-map/>), [[Code](<https://github.com/LucienXian/CppInAction/blob/master/cpp11/Unordered_map/unordered_map.cpp>)];

### C++11 Callbacks

* [C++11 : Callbacks](<http://www.lucienxian.top/2019/05/21/Designing-Callbacks-in-C/>), [[Code](<https://github.com/LucienXian/CppInAction/blob/master/cpp11/Callbacks/callbacks.cpp>)];

### C++11 Smart Pointer

* [C++11 Smart ptr : shared_ptr](<http://www.lucienxian.top/2019/05/27/shared-ptr-in-C-11/>), [[Code](<https://github.com/LucienXian/CppInAction/blob/master/cpp11/Smart_Ptr/shared_ptr.cpp>)];
* [C++11 Smart ptr : weak_ptr&unique_ptr](<http://www.lucienxian.top/2019/05/28/weak-ptr-unique-ptr/>), [[weak_ptr](<https://github.com/LucienXian/CppInAction/blob/master/cpp11/Smart_Ptr/weak_ptr.cpp>)]-[[unique_ptr](<https://github.com/LucienXian/CppInAction/blob/master/cpp11/Smart_Ptr/unique_ptr.cpp>)];

### C++11 std::array

* [C++11 std::array](<http://www.lucienxian.top/2019/05/30/std-array/>), [[Code](<https://github.com/LucienXian/CppInAction/blob/master/cpp11/Array/array.cpp>)];

