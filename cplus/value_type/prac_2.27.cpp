#include <iostream>

int prac_227()
{
	//int i = -1, &r = 0;  //引用某初始值必须是对象
	int i2 = 3;
	int *const p2 = &i2;
	const int i = -1, &r = 1;
	std::cout << r << std::endl;
	// r = 3;    //不能给常量赋值..

	const int *const p3 = &i2;     //指向常量对象i2的常量指针p3
	const int *p1 = &i2;   //指向常量对象的指针 p1
	//const int *const r2;   //如果不是外部的，则必须初始化常量对象
	const int i3 = i, &r32 = i;

	system("pause");
	return 0;
}