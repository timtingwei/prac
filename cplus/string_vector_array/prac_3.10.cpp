#include <iostream>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::string;

int prac_310()
{
	//读入一个包含标点符号的字符串，将标点符号去除后输入字符串的剩余部分
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