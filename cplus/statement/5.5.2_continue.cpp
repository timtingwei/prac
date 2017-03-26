#include <iostream>
#include <vector>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

int continue_552()
{
	//continue语句 终止最近的循环中的当前迭代立即开始下一次迭代。
	//contiune语句只能出现在for,while和do while循环内部，或者嵌套在此类循环里的语句或块的内部。
	//和break相同，continue也仅仅作用在离他最近的循环
	//和break不同,只有当switch语句嵌套在迭代语句内部时，才能在switch里使用continue

	char ch;
	/*switch (ch) {
	case 'a':
		cout << "ch is 'a' " << endl;
		continue;        //continue语句只能在循环语句中使用
	}*/
	/*int wCnt = 0;
	while (cin >> ch) {
		wCnt += 1;   //while循环计数+1
		cout << "the "<< wCnt << " times while begining.." << endl;
		switch (ch) {
		case 'a':
			cout << "ch is 'a' " << endl;
			continue;     //终止当前迭代，立即开始下一次迭代 //switch嵌套在循环语句中时候，才能在switch中continue，终止当前循环
		case 'b':
			cout << "ch is 'b' " << endl;
			break;
		}
	}*/

	//continue结束当前迭代，仍然执行循环
	//对while或者do while来说，继续判断条件的值；对传统的for来说，继续执行for语句头的expression;对于范围for来说，则是用序列的下一个元素初始化循环控制变量

	//标准输入读入一个单词，循环只对哪些下划线开头的单词感兴趣
	string buf;
	while (cin >> buf && !buf.empty()) {
		if (buf[0] != '_')
			continue;      //接着读入下一个输入
		//执行到这，说明输入是下划线开头的，接着处理
	}

	system("pause");
	return 0;
}