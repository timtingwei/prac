#include <iostream>
#include <string>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::string; using std::vector;

int prac_513()
{
	//c
	unsigned evenCnt = 0, oddCnt = 0;
	int digit = 5;
	switch (digit) {
		//case 5,3,1,7,9: //无法多个值一起选择
		case 5:
			oddCnt++;
			break;
		case 2:
			evenCnt++;
			break;
	}
	cout << "cout of even:\t" << evenCnt << "\n"
		<< "cout of odd:\t" << oddCnt << endl;


	//switch语句中 根据逻辑添加break
	//在作用域内部带有初值的变量，又出现在作用域外部，用switch case跳转时不合法
	//case一次只能选择一个
	//case后面跟的只能是常量表达式，不是变量名
	system("pause");
	return 0;
}