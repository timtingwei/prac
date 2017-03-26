#include <iostream>
#include <vector>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

int do_while_statement_554()
{
	//do while和while十分相似，唯一的区别是do while 先执行循环体后检查条件。不管条件如何都至少执行一次循环
	/*
	do 
	    statement
	while (condition);  
	*/
	//在括号包括起来的执行条件后 ; 结束
	//condition使用的变量 必须定义在循环体外

	//do while 循环（不断）执行加法运算
	//不断提示用户输入一对数，然后求其和
	string rsp;   //作为循环条件，不能定义在do内部
	do {
		cout << "please enter two values: ";
		int val1 = 0, val2 = 0;
		cin >> val1 >> val2;
		cout << "The sum of " << val1 << " and " << val2
			<< " = " << val1 + val2 << "\n\n"
			<< "More?Enter yes or no: ";
		cin >> rsp;
	} while (!rsp.empty() && rsp[0] != 'n');          //记得condition后的; 如果rsp为空或首字母为n,停止循环

	system("pause");
	return 0;

}