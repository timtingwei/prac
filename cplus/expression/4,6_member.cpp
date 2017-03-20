#include <iostream>
#include <vector>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

int member_46()
{
	//成员访问运算符 
	// ptr->mem  等价于  (*ptr).mem
	//访问指针所值对象的成员
	string s = "some thing";
	auto *ptr = &s;
	auto n = s.size();
	auto n1 = (*ptr).size();
	auto n2 = ptr->size();
	cout << n << n1 << n2 << endl;

	//解引用*的优先级低于.点运算符
	//n = *ptr.size();   //错误：ptr是指针 没有size成员

	//箭头运算符作用于一个指针的运算对象，结果是一个左值。
	//点运算符分成两种情况：
	//如果成员所属的对象是左值，那结果是左值；对象是右值，那结果是右值;


	system("pause");
	return 0;

}