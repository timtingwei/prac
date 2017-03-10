#include <iostream>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::string;

int prac_32()
{
	//从标准输入中一次读入一整行，然后修改该程序使其一次读入一个词
	//一次读入一整行
	//string line;
	//while (getline(cin, line))
	//	cout << line << endl;
	string word;
	while (cin >> word)
		cout << word << endl;
	return 0;
}
