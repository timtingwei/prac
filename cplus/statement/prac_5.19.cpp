#include <iostream>
#include <vector>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

int prac_519()
{
	//do while ִ�У�������ʾ��������string����Ȼ�������϶̵��Ǹ��������
	string rsp;
	do {
		cout << "Please enter two strings: ";
		string s1, s2;
		cin >> s1 >> s2;
		string &tmp = (s1.size() > s2.size()) ? s2 : s1;    //�Ƚ�s1��s2���ȣ��������С��
		cout << "The smaller one is : " << tmp << "\n\n"
			<< "More? Enter yes or no";
		cin >> rsp;
	} while (!rsp.empty() && rsp[0] != 'n');   //����Ϊ�ջ�����ĸΪn�ǣ�����ѭ��

	system("pause");
	return 0;
}