#include <iostream>
#include <string>
#include <vector>
using std::begin; using std::end;
using std::cin; using std::cout; using std::endl;
using std::string;
using std::vector;

//���βθ���Ĭ��ʵ��'s',�����°汾�ĺ����������success��failure�ĵ�������ʽ
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