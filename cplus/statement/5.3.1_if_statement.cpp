#include <iostream>
#include <string>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::string; using std::vector;

int if_statement_531()
{
	//if语句
	//if语句  if else语句   嵌套if语句   
	
	//把数字形式表示的成绩转换成字母形式，假设数字成绩范围是从0到100（包括100），100分对应"A++"，低于60"F",其他成绩每10个划分成一组：60到69包括69在内，对应字母"D"
	//使用vector对象存放字母成绩所有可能的取值
	const vector<string> scores = { "F","D","C","B","A","A++" };
	int grade;
	cout << "please write down your grade:";
	cin >> grade;
	string lettergrade;
	if (grade < 60)
		lettergrade = scores[0];
	else {   //使用复合语句注意花括号
		lettergrade = scores[(grade - 50) / 10];  //获取字母形式的成绩
		if (grade != 100)
			if (grade % 10 > 7)
				lettergrade += '+';   //末尾是8或者9的成绩添加一个加号
			else if (grade % 10 < 3)
				lettergrade += '-';  //末尾是0，1或者2添加一个减号
	}
		
	cout << endl;
	cout << "the lettergrade is :" << lettergrade << endl;

	//悬垂else:在既有if 又有 if else的语句中，容易混淆某个给定的else和哪个if匹配
	//c++规定else与离它最近的尚未匹配的if匹配，从而消除了程序的二义性

	//可以使用花括号控制执行路径

	system("pause");
	return 0;
}