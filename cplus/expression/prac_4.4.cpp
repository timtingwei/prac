#include <iostream>

using std::cin; using std::cout; using std::endl;

int prac_44()
{
	//对下列表达式添加括号，并输出结果 
	//12 / 3 * 4 + 5 * 15 + 24 % 4 / 2;

	cout << 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2 << endl;
	cout << ((12 / 3) * 4) + (5 * 15) + ((24 % 4) / 2) << endl;

	system("pause");
	return 0;

}