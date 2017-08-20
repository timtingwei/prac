#include <iostream>
#include <string>
#include <vector>
using std::begin; using std::end;
using std::cin; using std::cout; using std::endl;
using std::string;
using std::vector;

//给形参赋予默认实参's',利用新版本的函数输出单词success和failure的单复数形式
string make_plural(int ctrl_cnt, const string& word, const char ending = 's')
{
	return ctrl_cnt > 1 ? word + ending : word;
}

int main_prac42()
{
	string success_p = make_plural(4, "success");
	string success_o = make_plural(1, "success");
	string failure_p = make_plural(4, "failure");
	string failure_o = make_plural(1, "failure");
	cout << success_p << " " <<
		success_o << " " <<
		failure_p << " " <<
		failure_o << " " << endl;
	system("pause");
	return 0;
}