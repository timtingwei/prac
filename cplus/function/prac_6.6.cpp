#include <iostream>
using std::cin; using std::cout; using std::endl;

//形参，局部变量以及局部静态变量
int f1(int i) //i是形参
{
	int j=5 ;    //j显示初始化为5，j是局部变量
	cout << " j: " << j << " i: " << i << endl;
	static int k = i;  //k是局部静态变量
	return k++;
}
//局部变量除了形参还有函数内部定义的变量，一旦函数终止销毁
//局部静态变量 的声明周期贯穿调用之后的时间。在第一个经过对象定义语句时初始化，并且知道程序终止才被销毁
//局部变量没显式初始化，那么未定义
//局部静态变量没有显示的初始值，也将被初始化为0 or ''


int prac_66()
{
	//cout << f1(5) << endl;
	for (int i = 0; i != 10; ++i)
		cout << f1(2) << endl;

	system("pause");
	return 0;
}