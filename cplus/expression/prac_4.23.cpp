#include <iostream>
#include <vector>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

int prac_423()
{
	//分析优先级，指出无法通过编译的问题 
	string s = "word";
	string p1 = s + s[s.size() - 1] == "s" ? "" : "s";

	cout << (s[s.size() - 1]) << endl;
	cout << p1 << endl;

	system("pause");
	return 0;

}