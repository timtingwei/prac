#include <iostream>
#include <string>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::string; using std::vector;

int prac_511()
{
	//ʹͳ��Ԫ����ĸ�ĳ���Ҳ��ͳ�ƿո��Ʊ���ͻ��з�������
	int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, spaceCnt = 0;  //spaceCnt���ڴ���ո��Ʊ�������з�
	//char ch;
	string istr = "a	b c \n d";
	//while ((cin >> ch) && (ch != '`')) {
		//�ȴ���space�����   //����:cin����ʱ���������ո��Ʊ���ͻ��з���
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
	}//whileѭ������
	cout << "Number of vowel a:\t" << aCnt << "\n"
		<< "Number of vowel e:\t" << eCnt << "\n"
		<< "Number of vowel i:\t" << iCnt << "\n"
		<< "Number of vowel o:\t" << oCnt << "\n"
		<< "Number of vowel u:\t" << uCnt << "\n"
		<< "Number of space:\t" << spaceCnt << endl;
	
	system("pause");
	return 0;
}