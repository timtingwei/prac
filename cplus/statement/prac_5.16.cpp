#include <iostream>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::vector;

int prac_516()
{
	//分析比较 for循环和while循环 
	vector<int> v = { 0,1,-2,3,4,5 };
	//打印输出v中的每个元素
	//for循环
	for (decltype(v.size()) ix = 0; ix != v.size(); ++ix)
		cout << v[ix] << " ";
	cout << endl;

	//while循环
	auto beg = v.begin();
	while (beg!=v.end()) {
		cout << *beg << " ";
		++beg;
	}
	cout << endl;

	//找出vector中的第一个负数
	//for循环 
	decltype(v.size()) ix = 0;
	for (ix; v[ix] >= 0;++ix){/*循环在第一个负值处停止*/}
	cout << "The first minus value is:\t"<< v[ix] << endl;

	//while循环
	auto beg1 = v.begin();
	while (beg1 != v.end() && *beg1 >= 0)
		++beg1;                  //while需要在条件语句或者循环体内部改变运算条件变量
	cout << "The first minus value is:\t" << (*beg1) << endl;

	//for语句写法更简洁，while语句更符合自然逻辑

	system("pause");
	return 0;
}