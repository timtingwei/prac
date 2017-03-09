#include <iostream>

int const02_241()
{
	//const int i = 24;
	//const int &r1 = i;     //常量r是对常量i的引用
	//r1 = 2;                //错误：r是对常量的引用
	//int &r2 = i;             //错误：试图让一个非常量引用指向一个常量对象
	//“常量引用”事实上是const引用。因为引用本身不是一个对象，不存在常量还是非常量这一说。

	/*
	//初始化对const的引用
	int i = 42;
	const int &r1 = i;      //允许将const int&绑定倒一个普通的int对象上
	const int &r2 = 42;
	const int &r3 = r1 * 2;
	//int &r4 = r1 * 2;      //错误:r4是一个普通的非常量引用
	*/


	/*
	//当一个常量引用被绑定到另外一种类型上
	double dval = 3.14;
	const int &ri = dval;        //ri = 3
	std::cout << ri << std::endl;

	//编译器内部的转化
	const int temp = dval;   //由双精度浮点数生成一个临时的整型变量
	const int &ri = temp;    //常量引用ri绑定了 temp这个临时量(temporary)

	//当ri不再是常量时候
	double dval = 3.14;
	int &ri = dval; 
	//在这种情况下，一定是想通过ri和dval绑定，来改变dval的值。
	//但是由上述原理可知，ri实际上和临时量绑定了,因此无法达到程序员最初的目的，所以非常量引用不匹配的初始化会报错。
	*/

	//对const的引用可能引用一个并非const的对象
	int i = 42; 
	int &r1 = i;    //引用ri绑定对象i
	const int &r2 = i;  //r2应绑定对象i,但是无法通过r2修改i的值
	r1 = 0;         //通过r1修改i为0
	//r2 = 0;         //错误:r2是一个常量引用


	system("pause");
	return 0;

}