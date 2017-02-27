#include <iostream>
int while_sum()
{
	int sum = 50, val = 51;
	while (val <= 100){
		sum += val;
		++val;
	}
	std::cout << "Sum of 50 to 100 inclusive is " << sum << std::endl;
	system("pause");
	return 0;
}