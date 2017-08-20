#include <iostream>
#include <string>
#include <vector>
using std::begin; using std::end;
using std::cin; using std::cout; using std::endl;
using std::string;
using std::vector;

//下面哪个声明是错误的，为什么？
int ff(int a, int b = 0, int c = 0);
//char *init(int ht = 24, int wd, char bckgrnd);  //错误:默认形参不在列表结尾
