#include <iostream>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::string;

int prac_310()
{
	//����һ�����������ŵ��ַ�������������ȥ���������ַ�����ʣ�ಿ��
	string s, result;
	cin >> s;
	for (auto &c : s){
		if (!ispunct(c))
			result += c;
	}
	cout << result << endl;

	system("pause");
	return 0;
}