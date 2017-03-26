#include <iostream>
#include <vector>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

int prac_518()
{
	//循环含义和改正错误
	do {//原错误:do后没用{}，不能写复合语句
		int v1, v2;
		cout << "Please enter two numbers to sum:";
		if (cin >> v1 >> v2)
			cout << "Sum is: " << v1 + v2 << endl;
	} while (cin);  //循环不断进行

	/*do {
		//...
	} while (int ival = get_response());*/    //原错误：ival不能在循环内部被定义

	/*do {
		int ival = 4;       //ival的作用域是do循环体内部，而condition中的ival未被定义
	} while (ival);*/


	system("pause");
	return 0;
}