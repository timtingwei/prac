#include <iostream>
using std::cin; using std::cout; using std::endl;

int call_back()
{
	//第一次被调用时候返回0，以后每次调用返回值加1
	static int i = 10;
	return i++;
}

int prac_67()
{
	for (int i = 0; i != 10; ++i)    //循环调用函数
		cout << call_back() << endl;

	system("pause");
	return 0;
}