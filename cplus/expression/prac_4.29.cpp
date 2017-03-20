#include <iostream>
#include <vector>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

int prac_429()
{
	//推断下面的代码
	int x[10]; int *p = x; //指针p指向数组的首元素
	cout << sizeof(x) / sizeof(*x) << endl;   //10  //sizeof中 x不会转换成指针
	cout << sizeof(p) / sizeof(*p) << endl;   //1   //*p返回数组的首元素，指针类型占用空间大小4，int也为4

	system("pause");
	return 0;

}