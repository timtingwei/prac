#include <iostream>
#include <string>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::string; using std::vector;

int prac_512()
{
	//使其能统计，含有以下两个字符的字符序列的数量,ff、fl和fi
	int ffCnt = 0, flCnt = 0, fiCnt = 0;
	char ch;
	vector<char> cvec;   //创建一个用于存储字符的vector
	while ((cin >> ch) && (ch != '`')) {  //读入ch，遇到ch为'`'结束循环
		cvec.push_back(ch);    //把ch加入vector最后
		auto sz = cvec.size();
		if ((sz > 1) && (cvec[sz - 2] == 'f')) {  //vector中至少由两个char才可以索引，先索引vector[-2]
			switch (cvec[sz - 1]) {   //题目的特性是倒数第2个char都为'f',在f相同的情况下，switch倒数第一个值
				case 'f':
					++ffCnt;
					break;
				case 'l':
					++flCnt;
					break;
				case 'i':
					++fiCnt;
					break;
			}
		}
		//cout << cvec.size() << endl;  //最后一个索引总是size-1
	}//while循环结束
	
	cout << "The number of ffCnt: \t" << ffCnt << "\n"
		<< "The number of flCnt: \t" << flCnt << "\n"
		<< "The number of fiCnt: \t" << fiCnt << endl;

	system("pause");
	return 0;

}