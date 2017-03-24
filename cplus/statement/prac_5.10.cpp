#include <iostream>
#include <string>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::string; using std::vector;

int prac_510()
{
	//将统计元音的程序改写成遇到'a'和'A'都应该递增aCnt的值
	int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
	char ch;
	while ((cin >> ch) && (ch != '`')) {//读入ch知道遇到ch=='`'
		switch (tolower(ch)) {   //tolower()方法转同一转换成小写
			case 'a':
				++aCnt;
				break;
			case 'e':
				++eCnt;
				break;
			case 'i':
				++iCnt;
				break;
			case 'o':
				++oCnt;
				break;
			case 'u':
				++uCnt;
				break;
		}
	}

	cout << "Number of vowel a:\t" << aCnt << "\n"
		<< "Number of vowel e:\t" << eCnt << "\n"
		<< "Number of vowel i:\t" << iCnt << "\n"
		<< "Number of vowel o:\t" << oCnt << "\n"
		<< "Number of vowel u:\t" << uCnt << endl;

	system("pause");
	return 0;
}