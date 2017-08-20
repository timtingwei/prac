#include <iostream>
#include <string>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::string;
using std::vector;

//编写一个函数声明，返回数组引用并且该数组包含10个string对象。
string(&func636())[10];

//类型别名
using arrS = string[10];
typedef string arrS[10];
arrS &func();

//decltype关键字
string sarr[10];
decltype(sarr) &func636();

//尾置返回类型
auto func636()->string(&)[10];
