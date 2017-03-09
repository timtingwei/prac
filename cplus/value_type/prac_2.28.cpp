#include <iostream>

int prac_228()
{
	//int i, *const cp;  //常量指针一旦初始化完成，它的值就不再改变
	//int i, *const cp = &i //正确的写法

	//int *p1, *const p2;   //常量指针必须被初始化
	//const int ic, &r = ic;  //必须初始化常量对象
	//const int *const p3;   //必须初始化常量对象
	const int  *p;  //p指向一个常量

	system("pause");
	return 0; 
}