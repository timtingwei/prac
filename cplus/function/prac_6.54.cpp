#include<iostream>
#include<string>
#include<vector>
using std::begin; using std::endl;
using std::cin; using std::cout; using std::endl;
using std::string;
using std::vector;

int ifunc(int, int) { return 0; };

int prac654()
{
	
	//编写函数声明，接受两个int形参，返回类型是int。再声明一个vector对象，令其元素指向该函数的指针.
	int(*pf)(int, int) = ifunc;
	vector<int(*)(int, int)> ivec = { pf };

	return 0;
}