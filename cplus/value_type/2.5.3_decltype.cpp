#include <iostream>

int decltype_253()
{
	//如果decltype使用的表达式是一个变量，则decltype返回该变量的类型

	const int ci = 0, &cj = ci;
	decltype(ci) x = 0;        //x的类型是const int 
	decltype(cj) y = x;        //y的类型是const int&, y绑定到x
	//decltype(cj) z;            //z的类型是const int&,则引用必须被初始化

	//decltype和引用
	//decltype 的结果可以是引用类型
	int i = 42, *p = &i, &r = i;
	decltype (r + 0) b;         //b是一个未经初始化的int  r+0等同 i+0
	//decltype (r) b;             //错误:r如果不加0的话意味着，b的类型是int&,一定需要被初始化
	//decltype (*p) c;            //错误:c是一个int&  *p代表解引用操作 *p得到 &i 所以 c是int&,一定需要初始化
	decltype (p) c;               //正确：p为整数指针，那么c的类型是整数指针
	//c = 24;

	//decltype双层括号的用法
	//双层括号永远都是引用，单括号只有当本身是引用时才是引用
	//decltype ((i)) d;    //错误：d的类型是int&必须被初始化
	decltype ((i)) d = r;    //正确
	decltype (i) e;          //正确:单层括号说明是原本的int类型

	return 0;
}