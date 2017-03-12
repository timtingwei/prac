#include <iostream>
#include <vector>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::string; using std::vector;

int vector02_332()
{
	//向vector对象中添加元素

	vector<int> v1;
	for (int i = 0; i < 100; ++i){
		v1.push_back(i);
	}
	//循环结束后v2有100个元素，值从0到99
	//cout << v2 << endl;
	
	//从标准输入读入单词，将其作为vector对象的元素储存
	string word;
	vector<string> text;
	while (cin >> word){
		text.push_back(word);
	}


	//范围for语句体内不应改变其所遍历序列的大小


	system("pause");
	return 0;
}