#include <iostream>
#include <string>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::string; using std::vector;

int prac_56()
{
	//写一段自己的程序，使用ifelse语句实现把数字成绩转换成字母成绩的要求
	//改写，使用条件运算符?:代替if else 
	vector<string> vec = { "F","D","C","B","A","A++" };
	int grade;
	string lettergrade; //类型与vector存储的元素类型相同
	cout << "please write down your grade: ";
	cin >> grade;
	
	lettergrade = (grade < 60 ? (vec[0]): (vec[(grade - 50) / 10]));
	lettergrade += ((grade != 100) ? ((grade % 10 >7 || grade %10 <3)?((grade % 10 >7)?("+"):""):"-") : (""));
	//条件运算符 对于 复杂嵌套时，可读性很差

	cout << "your lettergrade is : " << lettergrade << endl;

	system("pause");
	return 0;
}