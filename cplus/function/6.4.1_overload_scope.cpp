#include <iostream>
#include <string>
#include <vector>
using std::begin; using std::end;
using std::cin; using std::cout; using std::endl;
using std::string;
using std::vector;

/*string read();
void print(const string&);
void print(double);        //重载print函数
void fooBar(int ival)
{
bool read = false;    //新作用域：隐藏外层作用域
//string s = read();    //错误：read是一个布尔值，而非函数
//不好习惯：通常来说，不会在局部作用域中声明函数
void print(int);        //新作用域：隐藏之前的print
//print("Value: ");       //void print(const string&)被隐藏
print(ival);            //正确：当前print(int)可见
print(3.14);            //调用print(int)
}*/

/*
//print函数放在同一个作用域中
void print1(const string&);
void print1(double);   //另外两种重载的形式
void print1(int);
void fooBar2(int ival)
{
	print1("Value:");
	print1(3.14);
	print1(3);
}*/

int main_overload_scope_641()
{
	//fooBar2(5);
	//system("pause");
	return 0;
}