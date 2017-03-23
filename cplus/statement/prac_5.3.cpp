#include <iostream>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::string;

int prac_53()
{
	//使用逗号运算符，重写1.4.1while循环从1加到10,不再需要块
	int i = 0, sum = 0;
	while (++i, i <= 10)
		sum += i;
	//代码的可读性会降低

	cout << sum << endl;
	system("pause");
	return 0;
}