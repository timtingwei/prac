#include<iostream>
#include<string>
#include<vector>
#include"cassert"
using std::begin; using std::endl;
using std::cin; using std::cout; using std::endl;
using std::string;
using std::vector;

void print_d(const int ia[], size_t size)
{
#ifndef NDEBUG   //如果NDEBUG未定义，执行#ifnef和#endif之间的代码
	//_ _func_ _ 是编译器定义的一个局部静态变量，用于存放函数的名字
	cout << __func__ << ":array size is" << size << endl;
#endif
	const string word = "tim";
	size_t threshold = 5;
	if (word.size() < threshold)
		cout << "Error:" << __FILE__         //存放文件名的字符串字面值
		<< " : in function " << __func__
		<< " at line " << __LINE__ << endl   //当前行号的整型字面值
		<< "    Compiled on " << __DATE__    //存放文件编译日期的字符串字面值
		<< " at " << __TIME__ << endl        //存放编译时间的字符串字面值
		<< "    Word read was \"" << word
		<< "\": Length too short" << endl;
}


int main_assert653()
{
	//assert(expr)表达式为0,输出信息并终止程序；表达式为1,assert什么也不做
	int a = 12, threshold = 10;
	assert(a > threshold);
	cout << "skip assert..." << endl;
	//assert仅仅用于验证确实不可能发生的事情。
	//只能用作一种辅助手段。但是不能用它代替真正的运行逻辑检查，也不能代替程序本身应该包含的错误检查。
	//assert定义在cassert头文件中，不要为了其他目的使用assert
	const int ia[5] = {};
	print_d(ia, 5);

	system("pause");
	return 0;

}