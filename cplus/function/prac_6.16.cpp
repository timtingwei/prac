#include <iostream>
using std::cin; using std::cout; using std::endl;

//bool is_empty(std::string &s) { return s.empty(); }           
//和头文件声明的区别在于头文件分号在花括号外,没有函数体

bool is_empty(const std::string &s) { return s.empty(); }

int main_is_empty()
{
	//is_empty("hello");   //错误：字面值常量无法作为成字符串引用
	std::string s = "Hello";
	is_empty(s);           //函数is_empty只能接受string对象
	is_empty("hello");     //修改后的函数，可接受字符串字面值
	is_empty("");

	return 0;
}