#include <iostream>
#include <string>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::string; using std::vector;

int prac_55()
{
	//写一段自己的程序，使用ifelse语句实现把数字成绩转换成字母成绩的要求
	vector<string> vec = { "F","D","C","B","A","A++" };
	int grade;
	string lettergrade; //类型与vector存储的元素类型相同
	cout << "please write down your grade: ";
	cin >> grade;
	
	if (grade < 60)//分数低于60时，F
		lettergrade = vec[0];     
	else { //分数高于60
		lettergrade = vec[(grade - 50) / 10];   //按照grade分配lettergrade
		if (grade != 100) {   //grade为100时 A++ 不会是A++-
			if (grade % 10 > 7)     //尾数是 8 9
				lettergrade += "+";
			else if (grade % 10 < 3)   //尾数是0,1,2
				lettergrade += "-";
		}
	}
	cout << "your lettergrade is : " << lettergrade << endl;

	system("pause");
	return 0;
}