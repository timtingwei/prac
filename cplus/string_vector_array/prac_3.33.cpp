#include <iostream>
#include <string>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

int prac_333()
{
	//成绩分段
	//unsigned scores[11] = {};  //11个分数段，初始值为0
	unsigned scores[11];         //不初始化,初始化未定义
	unsigned grade;
	while (cin >> grade) {
		if (grade <= 100)
			++scores[grade / 10];
	}

	for (auto i : scores)     //维度是数组类型的一部分，系统知道score数组有多少个元素
		cout << i << " ";
	cout << endl;

	system("pause");
	return 0;
}