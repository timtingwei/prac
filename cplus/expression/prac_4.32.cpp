#include <iostream>
#include <vector>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

int prac_432()
{
	//解释下面循环含义
	constexpr int size = 5;
	int ia[size] = { 1,2,3,4,5 };
	//初始化 指针ptr指向数组ia的首元素，ix初始化为0；当ix值和size相等或 ptr指向尾元素的后一位，循环停止；每进行一次循环，ix+1,ptr+1，表达式返回+1后的ptr
	for (int *ptr = ia, ix = 0; ix != size && ptr != ia + size; ++ix, ++ptr)
		cout << ix << " " << (*ptr) << endl;
	/*
	输出:
	0 1
	1 2
	2 3
	3 4
	4 5

	*/
	

	system("pause");
	return 0;

}