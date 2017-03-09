#include <iostream>

int prac_237()
{
	//如果i是int,则表达式i = x的类型是int&
	int a = 3, b = 4;
	decltype(a) c = a;
	decltype(a = b)d = a;  //a=b意味着d的类型是int&,且d与a绑定

	std::cout << a << " " << b << " " << c << " " << d << std::endl;  // 3 4 3 3

	system("pause");
	return 0;
}