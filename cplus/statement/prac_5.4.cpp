#include <iostream>
#include <string>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::string; using std::vector;

int prac_54()
{
	//说明例子的含义，如果存在问题，修改之
	string s = "Some string";
	//while (string::iterator iter != s.end()){/*...*/}
	//改
	//string::iterator iter = s.begin();
	//while (iter != s.end()){/*...*/}
	//vector的迭代器的类型是 vector<int>::iterator  string的迭代器类型是 string::iterator


	//while (bool status = find(word)){/*...*/}
	    //if (!status){/*...*/}
	//改
	//bool status = find(word);
	//while (status){/*...*/}
	//if (!status){/*...*/}

	return 0;
}