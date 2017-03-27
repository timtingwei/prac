#include <iostream>
using std::cin; using std::cout; using std::endl;

int fact1(int n) {
	int ret = 1;   //定义一个局部变量记录结果
	while (n > 1)
		ret *= n--; //把ret和n的乘积赋给ret,然后将n减1
	return ret;    //返回结果
}

int prac_63()
{
	int val = 5;
	int j = fact1(val);
	cout << "5! is: " << j << endl;

	system("pause");
	return 0;
}