#include <iostream>

int prac221()
{
	int i = 0;
	//double* dp = &i;  //错误：指针类型和指向对象的类型不匹配
	//int *ip = i;      //错误：变量直接赋值给指针是错误操作，即使int变量的值恰好为0也不行
	int *p = &i;        //正确：指针p指向i，存有i的地址

	system("pause");
	return 0;
}