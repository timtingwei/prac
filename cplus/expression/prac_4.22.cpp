#include <iostream>
#include <vector>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

int prac_422()
{
	//将成绩划分成high pass,low pass,pass,fail四种，60-75为low pass
	//两个版本 一个是用条件运算符 另外一个用 多个if语句
	int grade;

	/*while (cin >> grade) {
		string finalgrade = grade > 75 ? "high pass"
			: (grade > 60 ? "low pass"
				: "fail");
		cout << finalgrade << endl;
	}*/

	//多个if语句
	cin >> grade;
	string finalgrade;
	if (grade > 75) {
		finalgrade = "high pass";
	}
	else {
		if (grade > 60)
			finalgrade = "low pass";
		else {
			finalgrade = "fail";
		}
	}
	cout << finalgrade << endl;
	//第二种逻辑更结构形式更清晰

	


	system("pause");
	return 0;
}