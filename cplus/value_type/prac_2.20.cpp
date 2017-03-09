#include <iostream>

int prac_220()
{
	int i = 42;
	int *pl = &i;      //pl指向对象i，存了i的地址
	*pl = *pl * *pl;   //pl指向对象赋值为 i*i = 42*42
	std::cout << "*pl=    " << *pl << std::endl;   //输出1764
	std::cout << "i=      " << i << std::endl;     //输出1764

	system("pause");
	return 0;
}