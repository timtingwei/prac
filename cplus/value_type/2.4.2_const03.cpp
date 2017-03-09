#include <iostream>

int const03_242()
{
	//指向常量的指针(pointer to const)不能用于改变其所指对象的值 
	//想要存放常量对象，只能用指向常量的指针
	const double pi = 3.14;
	//double *ptr = &pi;      //存放常量对象，只能用指向常量的指针
	const double *ptr = &pi;  //成功
	// *ptr = 24;                //错误: 无法给常量赋值;
	//指向向量的指针并不是说指向的对象是一个常量，而是不能通过该指针改变对象的值

	//指针是对象，允许把本身定为常量,一旦初始化完成，它的值（存放的地址）不再改变 
	// 把*放在const关键字之前用于说明指针是一个常量
	int errNumb = 0;
	int *const curErr = &errNumb;   //curErr将一直指向errNumb,这里的errNumb并不是一个常量对象
	const double pi1 = 3.1415926;
	const double *const pip1 = &pi1;  //pip是一个指向常量对象的常量指针

	//*pip1 = 2.72;   //错误:pip是一个指向常量的指针
	//如果curErr所指向的对象的值不为0
	if (*curErr){
		//errorHandle();
		*curErr = 0;   //把curErr所指的对象的值重置
	}
	
	return 0;
}