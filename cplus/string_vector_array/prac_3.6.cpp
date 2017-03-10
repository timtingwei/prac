#include <iostream>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::string;

int prac_36()
{
	//使用范围for语句将字符串内的所有字符用X代替
	string s;
	cin >> s;
	for (decltype(s.size()) index = 0; index <= s.size()-1; ++index)
		s[index] = 'X';
	cout << s << endl;

	//for (auto &c : s)   //这里使用了char作为循环的控制变量
		//c = 'X';
	//cout << s << endl;

	system("pause");
	return 0;
}