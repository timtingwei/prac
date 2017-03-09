#include <iostream>

int valueType()
{
	/*int i = 0, &r1 = i;
	double d = 0, &r2 = d;
	r2 = 3.14159;
	r2 = r1;  //r2是一个int  并不是引用
	std::cout << r2 << std::endl;
	i = r2;
	r1 = d;*/
	int i, &ri = i;   //ri与i绑定，引用必须初始化
	i = 5; ri = 10;
	std::cout << i << " " <<ri << std::endl;   //ri与i绑定后，ri = 10操作实际上是 i = 10 
	system("pause");
	return 0;
}