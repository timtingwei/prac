#include <iostream>
#include <vector>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::string; using std::vector;

int prac_317()
{
	//从cin读入一组词并把它们存入一个vector对象，设法把所有的词都改为大写形式，输出改变后，每个词一行
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