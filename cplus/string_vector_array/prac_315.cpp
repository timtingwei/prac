#include <iostream>
#include <vector>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::string; using std::vector;

int prac_315()
{
	// ��cin����һ���ַ�����������vector����
	string word;
	vector<string> text;
	while (cin >> word){
		text.push_back(word);
		if (word == "quit")     //�������һ��if�����Ϊ�սᣬ����ע��Ҫ����
			break;
	}
		
	
	for (decltype(text.size()) i = 0; i != text.size(); ++i)
		cout << text[i] << endl;
	system("pause");
	return 0;
}