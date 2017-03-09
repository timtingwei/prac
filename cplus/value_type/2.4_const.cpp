#include <iostream>

int const0_24()
{
	/*
	//用于定义一种变量，他的值不能被改变
	const int bufSize = 512;     //输入缓冲区大小
	//bufSize = 512                //错误:bufSize:试图向const对象写值

	//const对象必须初始化
	const int i = 42;         //正确：编译时初始化
	//const int k;              //错误：k是一个未经初始化的变量
	*/
	//初始化和const
	//如果利用一个值去初始化另外一个对象，则他们是不是const都无关紧要
	int i = 42;
	const int ci = i;        //正确:i的值被拷贝给了ci
	int j = ci;              //正确:ci的值被拷贝给了j
    //拷贝一个对象的值，并不会改变它，一旦拷贝完成，新的对象就和原来的对象没有什么关系
	return 0;
}