#include <iostream>

int print_1by1()
{
	std::cout << "Enter two numbers :";
	std::cout << std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1;
	std::cin >> v2;
	std::cout << "The sum of " << std::endl;
	std::cout << v1 << std::endl;
	std::cout << " and " << std::endl;
	std::cout << v2 << std::endl;
	std::cout << " is " << std::endl;
	std::cout << v1+v2 << std::endl;

	system("pause");
	return 0;
}