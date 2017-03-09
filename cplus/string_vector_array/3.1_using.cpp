#include <iostream>
//用using声明，当我们使用名字cin时，从命名空间std中取它
using std::cin;

int using01()
{
	int i = 0;
	cin >> i;          //正确：和std::cout >> i;含义相同
	//cout << i;       //错误：没有对应的using声明，必须显式使用
	std::cout << i;    //正确：显式地从std中使用cout

	system("pause");
	return 0;

}