#include <iostream>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::string;

int prac_36()
{
	//ʹ�÷�Χfor��佫�ַ����ڵ������ַ���X����
	string s;
	cin >> s;
	for (decltype(s.size()) index = 0; index <= s.size()-1; ++index)
		s[index] = 'X';
	cout << s << endl;

	//for (auto &c : s)   //����ʹ����char��Ϊѭ���Ŀ��Ʊ���
		//c = 'X';
	//cout << s << endl;

	system("pause");
	return 0;
}