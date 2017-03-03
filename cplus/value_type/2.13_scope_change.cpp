#include <iostream>

int i = 42;
int scope_change()
{
	int i = 100;
	int j = i;
	std::cout << j << std::endl;   //value of j is 100
	system("pause");
	return 0;   
}