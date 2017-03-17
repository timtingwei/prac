#include <iostream>
#include <string>
#include <vector>

using std::cin; using std::cout; using std::endl;
using std::string;
using std::vector;

int prac_49()
{
	//解释if语句中条件部分的判断过程
	const char *cp = "Hello world";
	if (cp && *cp) { cout << "true" << endl; };
	// 先判断cp是否为真，cp是一个指向字符常量的非空指针，true；&&左边为真再判断右边，解引用cp得到"Hello world"也为true


	system("pause");
	return 0;
}