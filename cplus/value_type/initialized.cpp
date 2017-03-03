#include <iostream>

int initialized()
{
	//正确：price先被定义并赋值，随后被用于初始化discout
	double price = 109.99, discout = price * 0.6;
	//也可以用函数的返回值初始化

	//等号=来初始化变量的方式，但是初始化不是赋值。在c++中有区别，在其他语言中二者的区别可以忽略不计
	//初始化不是赋值，是创建变量是赋予其一个初始值，而赋值的含义是把对象的当前值擦除，而以一个新值来代替
	//列表初始化 
	//定义一个名为units_sold的int变量并初始化为0
	int units_sold = 0;
	//int units_sold = { 0 };
	//int units_sold{ 0 };
	//int units_sold(0);
	return 0;
}