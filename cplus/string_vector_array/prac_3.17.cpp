#include <iostream>
#include <vector>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::string; using std::vector;

int prac_317()
{
	//��cin����һ��ʲ������Ǵ���һ��vector�����跨�����еĴʶ���Ϊ��д��ʽ������ı��ÿ����һ��
	string word;
	vector<string> text;
	while (cin >> word){
		if (word == "quit")
			break;
		for (auto &s : word)
			s = toupper(s);	
		text.push_back(word);
	}

	for (auto line : text)
		cout << line << endl;

	system("pause");
	return 0;
}