#include <iostream>
#include <string>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::string; using std::vector;

int prac_510()
{
	//��ͳ��Ԫ���ĳ����д������'a'��'A'��Ӧ�õ���aCnt��ֵ
	int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
	char ch;
	while ((cin >> ch) && (ch != '`')) {//����ch֪������ch=='`'
		switch (tolower(ch)) {   //tolower()����תͬһת����Сд
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