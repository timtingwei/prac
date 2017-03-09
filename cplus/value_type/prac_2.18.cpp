#include <iostream>

int prac_218()
{
	int ival = 1024;
	int *pi = &ival;
	*pi = 1024 + 1024; //更改指针所指向的对象的值
	std::cout << "*pi" << *pi << std::endl;
	std::cout << "pi" << pi << std::endl;
	pi = 0;   //更改指针的值
	

	system("pause");
	return 0;
}