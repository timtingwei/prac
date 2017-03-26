#include <iostream>
#include <vector>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

int break_551()
{
	//break语句 负责终止离他最近的while,do while,for 或 switch 语句，并从这些语句之后的第一条语句开始继续执行
	
	/*int ival1 = 5, ival2 = 10;
	if (ival1 > ival2)
		break;   //break只能在循环(迭代)和开关(switch)语句中 使用*/

	string buf;
	while (cin >> buf && !buf.empty()) {
		switch (buf[0]) {
		case '-':    //buf[0]的类型为char，因此用单引号
			for (auto it = buf.begin() + 1; it != buf.end(); ++it) {
				if (*it == ' ')
					break;  //#1  离开for循环
			}
			//break #1将控制权移动到这里
			//剩余的'-'处理：
			break;  //#2 离开switch语句  //这是离开for循环后的第一条语句
		case '+':
			break;
		}
		//结束switch：break#2 将控制权转移到这里
	}//结束while循环

	system("pause");
	return 0;
}