#include <iostream>

int prac_238()
{
	//decltype与auto指定的类型一样
	int a = 0;
	decltype (a) b = a;
	auto c = a;

	b = 1, c = 2;   // that's right


	//decltype与auto指定的类型不同
	decltype ((a)) d = a;   //d的类型是int&与a绑定
	auto e = a;

	d = 2, e = 5;
	std::cout << a << std::endl;  //2  说明d和a绑定
	system("pause");
	return 0;

}