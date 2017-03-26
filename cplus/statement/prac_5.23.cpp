#include <iostream>
using std::cin; using std::cout; using std::endl;

int prac_523()
{
	//从标准输入读取两个整数，输出第一个数除以第二个数的结果
	int ival1, ival2;
	cout << "Please enter two numbers: " << endl;
	cin >> ival1 >> ival2;
	cout << "ival1 divide ival2 equal: " << ival1 / ival2 << endl;

	system("pause");
	return 0;
}