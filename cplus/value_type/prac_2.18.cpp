#include <iostream>

int prac_218()
{
	int ival = 1024;
	int *pi = &ival;
	*pi = 1024 + 1024; //����ָ����ָ��Ķ����ֵ
	std::cout << "*pi" << *pi << std::endl;
	std::cout << "pi" << pi << std::endl;
	pi = 0;   //����ָ���ֵ
	

	system("pause");
	return 0;
}