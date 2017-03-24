#include <iostream>
#include <vector>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;


int prac_514()
{
	//标准输入读入若干string对象，并查找连续重复出现的单词。
	//要求记录重复出现的最大次数以及对应的单词
	//how now now now brown cow cow   输出 now 3
	vector<string> svec;
	string st;
	while ((cin >> st) && (st != "`")) {  //读入st，遇到"`"退出循环
		svec.push_back(st);   //把st追加到vector末尾
	}

	int maxCnt = 1, curCnt = 0;   //maxCnt用于记录出现次数最多的值，curCnt记录当前单词连续出现的个数
	string maxStr;
	auto beg = svec.begin() + 1;  //beg初始化指向svec第二个元素
	while (beg != svec.end()) {  //遍历完vector结束循环
		if ((*beg) == *(beg - 1)) {  //如果当前值和前一个值相同
			curCnt += 1;
		}
		else { curCnt = 1; }
		if (curCnt > maxCnt) {  //如果当前的连续的个数超过之前最大的个数
			maxStr = *beg;      //出现最多的单词改变成当前的单词
			maxCnt = curCnt;    //最大次数改变为当前的次数
		}
		++beg;                  //迭代器向前移动
	}//while循环结束
	//如果任何单词没有连续出现过
	if (maxCnt == 1)
		cout << "there is no one continue appeared " << endl;
	else
		cout << maxStr << " appeared " << maxCnt << " times " << endl;

	system("pause");
	return 0;
}