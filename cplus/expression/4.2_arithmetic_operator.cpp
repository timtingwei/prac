#include <iostream>

using std::cin; using std::cout; using std::endl;

//int main()
int arithmetic_operator_42()
{
	//算术运算符（满足左结合律）
	//优先级 +- (正负号) > */% > +- （加减）
	//优先级规律：一元运算符优先级最高，接下来是除法和乘法，优先级最低的是加法和减法。

	int ival = 5;
	bool ib = true;
	cout << ival + ib << endl;  //ival + ib 运算符的运算对象和结果都是 右值？？

	//当一元运算符作用于一个指针或者算术值时，返回运算对象值的一个提升后的副本
	int ia = 1024;
	int ia2 = -ia;                  //ib是-1024,是一个提升后的副本
	int &p1 = ia;
	cout << (-p1) << endl;
	int b = true;
	int b2 = -b;          
	//布尔值变量b的值是真，参与运算时被提升成整数值1。//对他求负后的结果-1，将-1转回布尔值作为b2的初始值//这个初始值不为0,得到true

	//某个机器的short类型占16位
	short short_value = 32767;   //如果short类型占16位，这已是最大
	short_value += 1;
	cout << short_value << endl;     
	//short_value: -32768
	//该值发生"环绕"，符号位本来是0，由于溢出被改成1，于是结果变成了一个负值。程序可能会崩溃
	
	//整数相除的结果还是整数
	int ival1 = 21 / 6;   //ival1是3，余数直接被抛弃了
	int ival2 = 21 / 7;   //ival2是3，没有余数，结果是整数值

	int ival3 = 42;
	double dval3 = 3.14;
	//ival3 % 12;
	//ival % dval;    //错误:运算对象是浮点类型

	//商一律向0取整,直接切除小数部分
	cout << "5 / 4 " << 5 / 4 << endl;

	//取余运算 
	//如果m和n是整数，且n非0，则表达式(m/n)*n+m%n求值结果等于m  ?????
	int m = 5, n = 4;
	cout << m << "  " << (m / n)*n + (m%n) << endl;
	cout << (m / n)*n << endl;  //(m / n)*n结果比m小了m/n忽略小数部分
	cout << (m%n) << endl;
	//m % (-n)等于m % n; (-m) % n 等于 -(m % n)



	system("pause");
	return 0;
}
