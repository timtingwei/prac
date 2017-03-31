#include <iostream>
using std::cin; using std::cout; using std::endl;

//T是某种类型的名字，说明 void f(T)和 void f(&T)的区别

//f(T)直接拷贝大的类类型对象或者容器对象比较低效，有的甚至不支持这样的拷贝操作 
//f(T)无法对函数外部的变量进行操作，局部变量的声明周期只在函数体中有效
//无法作为函数额外的返回信息