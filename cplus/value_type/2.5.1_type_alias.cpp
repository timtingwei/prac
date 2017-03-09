#include <iostream>
//#include "Sales_item.h"
int type_alias()
{
	//两种方法定义类型别名
	//传统方法 typedef  声明语句定义的不再是变量而是别名
	typedef double wages;     //wages是double的同义词
	typedef wages base, *p;   //base是double的同义词，p是double*的同义词
	//新标准 别名声明(alias declaration)
	//using SI = Sales_item;    //把等号左侧的名字规定成右侧的别名

	//wages hourly, weekly;   //等价double hourly, weekly;
	//SI item;                //等价 Sales_item item;

	typedef char *pstring;     //pstring 其基本数据类型是指针，可是用char*重写声明语句后，数据类型变成char
	const pstring cstr = 0;    //cstr是指向char的指针
	//const pstring *ps;         //ps是一个指针，他的对象是指向char的常量指针
	
	//const char *cstr = 0;      //错误：不能将上述语句理解成这样
	return 0;
}