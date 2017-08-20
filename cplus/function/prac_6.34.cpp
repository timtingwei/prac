#include <iostream>
#include <string>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::string;
using std::vector;

int factorial_634(int val)
{
	//停止条件改变后，发生什么情况
	if (val != 0) 
		return factorial_634(val - 1) *val;
	return 1;
	//多进行一次运算
}

int factorial_val1(int val)
{
	//传入val--，发生什么情况
	if (val > 1 )
		return factorial_val1(val--) *val;
	return 1;
	
}

int main_factorial_val1()
{
	cout << factorial_634(5) << endl;
	cout << factorial_val1(5) << endl;
	system("pause");
	return 0; 
}