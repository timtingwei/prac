#include <iostream>
int myWhile()
{
	int sum = 0, val = 1;
	// when value val <= 10,while continue do
	while (val <= 10){  // condition  if condition is True do statement 
        // statement 
		// this is a block 
		sum += val;     //sum + val to sum  ,equal to sum = sum + val;   val is assignment 
		++val;           // val + 1 ,equal to val = val + 1; 
	}
	std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;
	system("pause");
	return 0;
}