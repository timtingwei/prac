#include <iostream>

int prac_238()
{
	//decltype��autoָ��������һ��
	int a = 0;
	decltype (a) b = a;
	auto c = a;

	b = 1, c = 2;   // that's right


	//decltype��autoָ�������Ͳ�ͬ
	decltype ((a)) d = a;   //d��������int&��a��
	auto e = a;

	d = 2, e = 5;
	std::cout << a << std::endl;  //2  ˵��d��a��
	system("pause");
	return 0;

}