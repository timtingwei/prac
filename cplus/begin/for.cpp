#include <iostream>
int myFor()
{
	int sum = 0;
	for (int val = 1; val <= 10; ++val)   //init_statement;condition;expression
		sum += val; //equal to sum = sum + val
	std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;
	system("pause");
	return 0;
}