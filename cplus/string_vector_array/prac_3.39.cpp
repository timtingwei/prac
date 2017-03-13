#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <cstring>   //可用于操作C风格字符串
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;
using std::begin; using std::end;

int prac_339()
{
	//比较两个string对象
	string is1 = "hello";
	string is2 = "hello";
	//比较string对象的长度是否相等
	if (is1.size() != is2.size())
		cout << "is1 != is2" << endl;
	else {
		for (decltype(is1.size()) ix = 0; ix != is1.size(); ++ix) {
			if (is1[ix] != is2[ix]) {
				cout << "is1 != is2" << endl;
				return -1;//表示失败
			}
		}
		cout << "is1 == is2 " << endl;
	}

	//比较两个C风格字符串的内容
	//char stra1[] = { 'h','e','l','l','o','\0' };
	//char stra2[] = { 'h','e','l','l','o',',','w','o','r','l','d','\0' };
	const char stra1[] = "hello";
	const char stra2[] = "hello,world";
	cout << strlen(stra1) << endl;  //当stra1没用以空字符返回时会出现严重错误
	//比较C风格字符串的长度
	if (stra1 > stra2) { cout << *stra1 << endl; }    //此时比较的是两个地址
	if (strcmp(stra1, stra2) != 0)
		cout << "stra1 != stra2" << endl;
	else {
		for (auto ix = strlen(stra1); ix != strlen(stra1); ++ix) {
			if (stra1[ix] != stra2[ix])
				cout << "stra1 != stra2" << endl;
		}
		cout << "stra1 == stra2" << endl;
	}

	
	system("pause");
	return 0;
}