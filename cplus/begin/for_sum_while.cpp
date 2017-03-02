#include <iostream>

int for_sum_while()
{
	int sum = 0;
	for (int i = 50; i <= 100; ++i)
		sum += i;
	std::cout << "Sum of 50 to 100 is:" << sum << std::endl;
	system("pause");
	return 0;
}

/*int main()
{
	int i = 50, sum = 0;
	while (i <= 100){
		sum += i;
		++i;
	}
	std::cout << "Sum of 50 to 100 inclusive is" << sum << std::endl;
	system("pause");
	return 0;
}*/