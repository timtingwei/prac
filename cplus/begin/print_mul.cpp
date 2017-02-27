#include <iostream>

int print_mul()
{
	std::cout << "please write two numbers :" << std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;
	std::cout << "the multiply of " << v1 << " and " << v2 << " is " << v1*v2 << std::endl;
	system("pause");
	return 0;
}