#include <iostream>
#include <vector>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

int prac_519()
{
	//do while 执行，首先提示输入两个string对象，然后挑出较短的那个并输出它
	string rsp;
	do {
		cout << "Please enter two strings: ";
		string s1, s2;
		cin >> s1 >> s2;
		string &tmp = (s1.size() > s2.size()) ? s2 : s1;    //比较s1和s2长度，输出长度小的
		cout << "The smaller one is : " << tmp << "\n\n"
			<< "More? Enter yes or no";
		cin >> rsp;
	} while (!rsp.empty() && rsp[0] != 'n');   //输入为空或首字母为n是，结束循环

	system("pause");
	return 0;
}