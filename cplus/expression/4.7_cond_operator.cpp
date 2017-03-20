#include <iostream>
#include <vector>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

int cond_operator_47()
{
	// ?:允许把简单的if-else逻辑，嵌入到单个表达式中
	//条件运算符判断 成绩是否合格
	int grade;
	cin >> grade;
	string finalgrade = (grade < 60) ? "fail" : "pass";
	cout << finalgrade << endl;
	//当条件转换符的两个表达式都是左值或者能转换成同一种左值类型时，运算的结果是左值:否则运算结果为右值

	//条件运算符的嵌套
	//把成绩分成 high pass fail 三档
	finalgrade = (grade > 90) ? "high" 
		:(grade > 60) ? "pass" : "fail";
	cout << finalgrade << endl;

	//条件运算符满足右结合律，从右向左运算
	//上述例子，靠右边的运算条件构成了靠左边的运算条件的：分支
	//运算条件的嵌套最好别超过三层

	//输出表达式中的条件运算符
	cout << ((grade < 60) ? "fail" : "pass");   //输出pass or fail
	cout << (grade < 60) ? "fail" : "pass";     //输出0 or 1
	//cout << grade < 60 ? "fail" : "pass";     //试图比较cout 和 60

	//第二条等价于
	cout << (grade < 60);
	cout ? "fail" : "pass";

	/*//第三条等价于
	cout << grade;
	cout < 60 ? "fail" : "pass";*/

	system("pause");
	return 0;
}