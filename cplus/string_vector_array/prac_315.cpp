#include <iostream>
#include <vector>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::string; using std::vector;

int prac_315()
{
	// 用cin读入一组字符串，并存入vector对象
	string word;
	vector<string> text;
	while (cin >> word){
		text.push_back(word);
		if (word == "quit")     //可以添加一个if语句作为终结，但是注意要括号
			break;
	}
		
	
	for (decltype(text.size()) i = 0; i != text.size(); ++i)
		cout << text[i] << endl;
	system("pause");
	return 0;
}