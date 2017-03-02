#include <iostream>
int while_cin()
{
	int sum = 0, value = 0;
	while (std::cin >> value){
		sum += value;
	}
	std::cout << "Sum of value is " << sum << std::endl;
	system("pause");
	return 0;
}