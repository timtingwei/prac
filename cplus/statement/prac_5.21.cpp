#include <iostream>
#include <vector>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

int prac_521()
{
	//从标准输入读取string对象的序列直到连续出现两个相同的单词或者所用的单词读完为止
	//输出连续重复出现的单词，或者输出一个消息说明没有任何单词是连续重复出现
	//使得找到的单词必须以大写字母开头

	cout << "Enter series of word" << endl;
	string s;
	cin >> s;
	string stmp = s;    //先存储第一个单词
	bool b = false;     //初始值false代表，没有单词重复出现
	while ((cin >> s) && (s != "`")) {  //一次读入一个单词
		if (!isupper(s[0])) { continue; }  //该单词不是以大写字母开头的，进入下一个迭代
		if (s == stmp) {
			b = true;    //有单词重复出现
			cout << "the common word is :" << s << endl;
			break;    //如果当前单词与前一个单词相同跳出循环
		}
		stmp = s;     //当前单词作为下一个单词的前一个单词
	}
	if (!b) { cout << "There is no common word" << endl;; }  //b的值为false，代表没有单词重复出现 

	system("pause");
	return 0;
}