#include <iostream>
#include <string>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

int array02_35()
{
	//访问数组元素
	//下标的类型是 size_t ,机器相关的无符号类型，设计的足够大能表示内存中任意对象的大小，在cstddef.h中定义

	//成绩分段
	unsigned scores[11] = {};  //11个分数段，初始值为0
	unsigned grade;
	while (cin >> grade) {
		if (grade <= 100)
			++scores[grade / 10];
	}

	for (auto i : scores)     //维度是数组类型的一部分，系统知道score数组有多少个元素
		cout << i << " ";
	cout << endl;

	//大多数常见的安全问题都源于缓冲区溢出错误。数组和其他数据结构下标越界并试图访问非法内存区域时，错误产生

	system("pause");
	return 0;

}