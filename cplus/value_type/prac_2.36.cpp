#include <iostream>

int prac_236()
{
	int a = 3, b = 4;
	decltype (a) c = a;
	decltype ((b)) d = a;  //����((b))������ֻ��˵��d��������int&��������d��b�󶨣����� int &d = a,d��a��
	++c;
	++d;
	std::cout << a << " " << b << " " << c << " " << d << std::endl;  // 4 4 4 4

	system("pause");
	return 0;
}