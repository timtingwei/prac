#include <iostream>

int pointer02()
{
	//int zero = 0;
	//int *pi = &zero;
	
	//赋值和指针
	//给指针赋值，就是让它存放一个新的地址，指向新的对象
	int i = 42;
	int *pi = 0;       //pi被初始化，但没有指向任何对象
	int *pi2 = &i;     //pi2被初始化，存有i的地址
	int *pi3;

	pi3 = pi2;         //pi3和pi2一起指向同一个对象，i
	pi2 = 0;           //现在pi2不指向任何对象

	//判断赋值语句改变了指针的值还是改变了指针所指向对象的值
	//赋值永远改变的是等号左侧的对象
	int ival = 5;
	pi = &ival;     //pi的值被改变现在pi指向ival
	*pi = 0;        //ival的值被改变
	std::cout << ival << std::endl;     //输出0

	system("pause");
	return 0;
}