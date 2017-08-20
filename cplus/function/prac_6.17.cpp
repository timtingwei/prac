#include <iostream>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::string;

bool has_upper(const string &s)
{
	//判断string对象中是否含有大写字母
	bool ret = false;         //初始状态没有大写字母
	for (auto beg = s.begin(), end = s.end(); beg != end;++beg)
		if (isupper(*beg)) { ret = true; }
	return ret;
}

string to_lower(const string &s)                      //声明成常量引用，接受字符串字面值
{
	string local_s = s;                               //local_s是s的副本
	for (auto beg = local_s.begin(), end = local_s.end(); beg != end;++beg)
		if (isupper(*beg)) { *beg = tolower(*beg); }  //将大写字符转变成小写
	return local_s;                                   //返回修改后的string
}


int main_has_to_lower()
{
	has_upper("isMe");
	char c = 's';
	//c.isupper();       //错误：isupper不是char类的成员函数
	isupper(c);
	cout << has_upper("mynameistim") << endl;

	cout << to_lower("myNameiStIm") << endl;

	system("pause");
	return 0;
}
