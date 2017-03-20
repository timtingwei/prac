#include <iostream>
#include <vector>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

int comma_operator_410()
{
	//逗号运算符
	//含有两个运算对象，按照从左往右的顺序依次求值
	//逗号运算符，首先对左侧的表达式求值，然后将求值结果丢弃掉。
	//逗号运算符真正的结果是右侧表达式的值。如果右侧运算对象是左值，那么最终的求值结果也是左值。

	//逗号运算符经常被用在for语句中
	vector<int> ivec = { 0,1,2,3 };
	vector<int>::size_type cnt = ivec.size();
	//将把从size到1的值赋给ivec的元素
	for (vector<int>::size_type ix = 0; ix != ivec.size(); ++ix, --cnt)
		ivec[ix] = cnt;
	for (auto i : ivec)
		cout << i << " ";  //4 3 2 1
	cout << endl;

	int i = 1, j = 5;
	auto k = (++i, ++j);   //返回的结果是右侧表达式的值。如果右侧表达式是左值，结果是左值。
	cout << k << endl; //输出6

	system("pause");
	return 0;
}
