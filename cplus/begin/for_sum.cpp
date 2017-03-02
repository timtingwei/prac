#include <iostream>
int for_sum()
{
	int sum = 0;
	for (int i = -100; i <= 100; ++i)
		sum += i;
	std::cout << "Sum of -100 to 101" << sum << std::endl;
	system("pause");
	return 0;
}