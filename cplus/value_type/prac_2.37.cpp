#include <iostream>

int prac_237()
{
	//���i��int,����ʽi = x��������int&
	int a = 3, b = 4;
	decltype(a) c = a;
	decltype(a = b)d = a;  //a=b��ζ��d��������int&,��d��a��

	std::cout << a << " " << b << " " << c << " " << d << std::endl;  // 3 4 3 3

	system("pause");
	return 0;
}