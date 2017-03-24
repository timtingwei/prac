#include <iostream>
#include <string>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::string; using std::vector;

int prac_511()
{
	//使统计元音字母的程序，也能统计空格、制表符和换行符的数量
	int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, spaceCnt = 0;  //spaceCnt用于储存空格，制表符，换行符
	//char ch;
	string istr = "a	b c \n d";
	//while ((cin >> ch) && (ch != '`')) {
		//先处理space的情况   //疑问:cin读入时，不会读入空格，制表符和换行符号
	for (auto ch:istr){
		if (isspace(ch)) {
			++spaceCnt;
		}
			
		else {
			switch (tolower(ch)) {
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
	}//while循环结束
	cout << "Number of vowel a:\t" << aCnt << "\n"
		<< "Number of vowel e:\t" << eCnt << "\n"
		<< "Number of vowel i:\t" << iCnt << "\n"
		<< "Number of vowel o:\t" << oCnt << "\n"
		<< "Number of vowel u:\t" << uCnt << "\n"
		<< "Number of space:\t" << spaceCnt << endl;
	
	system("pause");
	return 0;
}