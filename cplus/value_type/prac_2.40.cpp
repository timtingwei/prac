#include <iostream>

struct myClass {
	int number{ 0 };
	double money = 0;
};
int prac_240()
{
	myClass c1;
	double m = 0;
	m = c1.money;
	std::cout << m << std::endl;

	system("pause");
	return 0;
}