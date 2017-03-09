#include <iostream>

int const04_243()
{
	//顶层const表示 指针本身是一个常量,底层const表示指针所指的对象是一个常量
	int i = 0;
	int *const p1 = &i;  //不能改变p1，顶层const
	const int ci = 42;   //不能改变ci,顶层const
	const int *p2 = &ci; //允许改变p2，底层const
	const int *const p3 = p2;   //靠左是底层const，靠右是顶层const
	const int &r = ci;    //用于声明引用的const都是底层const

	//执行对象拷贝时，顶层const不受什么影响
	i = ci;
	p2 = p3; //p3顶层const部分不受影响 

	//底层const的限制不能忽视
	//int *p = p3;        //错误:p3包含底层const的定义，而p没有
	p2 = p3;              //正确:p2是底层，p3包含底层的部分
	p2 = &i;              //正确:int*能转换成const int*
	//int &i = ci;          //错误:普通的int&不能绑定到int常量上
	const int &r2 = i;    //正确：const int& 可以绑定到一个普通的int上

	return 0;

}