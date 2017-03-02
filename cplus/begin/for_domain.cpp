#include <iostream>
int for_domain()
{
	int v1 = 0, v2 = 0;
	std::cout << "Enter two numbers :" << std::endl;
	std::cin >> v1 >> v2;
	for (int i = v1; i <= v2; ++i)
		std::cout << i << std::endl;
	system("pause");
	return 0;																														
}