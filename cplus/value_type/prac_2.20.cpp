#include <iostream>

int prac_220()
{
	int i = 42;
	int *pl = &i;      //plָ�����i������i�ĵ�ַ
	*pl = *pl * *pl;   //plָ�����ֵΪ i*i = 42*42
	std::cout << "*pl=    " << *pl << std::endl;   //���1764
	std::cout << "i=      " << i << std::endl;     //���1764

	system("pause");
	return 0;
}