#include <iostream>
#include <string>
#include <iterator>
using std::cin; using std::cout; using std::endl;
using std::string;
using std::begin; using std::end;

void compare_iptr(const int i, const int *iptr)
{
	//传入两个参数 一个是int型的数，另一个是int指针，函数比较int的值和指针所指的值，返回较大的那个
	cout << (i < *iptr ? *iptr: i) << endl;  //条件运算符输出较大的那个
	//函数中 指针的类型是常量整型指针。
}

int main_compare_iptr()
{
	//测试函数
	int i = 5, j=8, *iptr = &j;   //i和j是整型,，iptr是指向j的指针
	compare_iptr(i, iptr);

	system("pause");
	return 0;
}