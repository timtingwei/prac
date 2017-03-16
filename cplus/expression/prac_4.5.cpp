#include <iostream>

using std::cin; using std::cout; using std::endl;

int prac_45()
{
	//下列表达式的求值结果
	cout << -30 * 3 + 21 / 5 << " " 
		<< -30 + 3 * 21 / 5 << " " 
		<< 30 / 3 * 21 % 5 << " "
		<< -30 / 3 * 21 % 4 << " " << endl;

	//左结合律：优先级相同时，按照从左向右
	system("pause");
	return 0;
}