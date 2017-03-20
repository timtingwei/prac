#include <iostream>
#include <vector>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

int prac_424()
{
	//?:的结合律如果换成左结合律，运算过程
	int grade;
	cin >> grade;
	string finalgrade = (grade > 90) ? "high pass"
		: (grade > 60) ? "pass" : "fail";
	//先计算左侧的条件运算符grade与90比较，若true,string对象赋值"high pass",若false，string对象赋值右侧条件运算结果
	//后计算右侧条件运算，grade > 60，若true，赋值"pass",否则"fail"
	//看起来右结合律的计算量更为少


	cout << finalgrade << endl;
	system("pause");
	return 0;
}