#include <iostream>

using std::cin; using std::cout; using std::endl;

int prac_47()
{
	//解释溢出的含义，三种导致溢出的表达式 
	//short类型占16位，最大值是 2**(16-1) - 1 = 32767
	const int i = 2;
	short is = 32767;
	cout << ++is << endl;     //is : -32768

	bool b1 = true;
	++b1;                  //没有溢出，仍旧被转换成1
	cout << ++b1 << endl;

	//char mc = '123' * 127;
	//cout << mc << endl;

	int ival = 32767000;
	cout << ++ival << endl;

	system("pause");
	return 0;
}