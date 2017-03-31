#include <iostream>
using std::cin; using std::cout; using std::endl;

void myReset(int &ir)
{
	//编写并验证reset函数，使其作用于引用类型的参数
	ir = 7;                //对引用的对象赋值
}

int main_myReset()
{
	int i = 0;             //定义一个整型为0
	myReset(i);            //调用myReset函数
	cout << i << endl;     //输出 7

	system("pause");
	return 0;
}