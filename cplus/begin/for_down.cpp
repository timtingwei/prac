#include <iostream>
int for_down()
{
	int i = 0;
	for (i = 10; i >= 0; --i)
		std::cout << i << std::endl;
	system("pause");
	return 0;
}