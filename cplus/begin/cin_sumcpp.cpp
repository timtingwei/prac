#include <iostream>

int cin_sumcpp()
{
	int sum = 0, value = 0;
	while (std::cin >> value)
		sum += value;
	std::cout << "Sum is :" << sum << std::endl;
	return 0;
}