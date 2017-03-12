#include <iostream>
#include <string>
#include <iterator>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;
using std::iterator;

int prac_322()
{
	//首先把text的第一段全部改为大写形式，然后输出
	vector<string> text{ string("my name is tim"),
		string("now i'm learning c plus plus"),
		string("well"),
		string(""),
		string("that's all") };
	/*for (auto it = text.cbegin(); (it != text.cend() && !it->empty()); ++it) {
		for (auto &s : *it) {    //由于上面it的类型是 vector<string>::const_iterator 所以s不能改变
			s = toupper(s);
		}
	}
	for (auto i : text)
		cout << i << endl;*/
	for (auto it = text.begin();        //仍然使用.begin() 不用 cbegin()
	it != text.end() && !it->empty(); ++it) {
		for (auto &s : *it)
			s = toupper(s);
		cout << *it << endl;
	}
		

	system("pause");
	return 0;
}