#include <iostream>

using std::cout; using std::cin; using std::endl;

int conversion_411()
{
	//类型转换
	//如果两种类型能够互相转换，那么它们就是关联的
	int ival = 3.541 + 3;    //编译器警告损失精度
	/*
	加法的两个运算对象不同，一个是double，一个是int。
	很多时候，表达式既有浮点型又有整型运算对象，int会转换成浮点型运算。
	很多类型转换是自动执行的，无需程序员介入，被成为 隐式转换 (implicit conversion)

	上述，3转换成double型，与3.541相加得到double型

	初始化时，初始化对象的类型不同改变，初始值被转换成对象的类型
	加法运算得到的double型被转换成int类型的值，这个值被用来初始化ival
	double向int转换忽略掉小数部分 得到6
	*/
	cout << ival << endl;

	system("pause");
	return 0;
}