#include <iostream>
#include <vector>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

int prac_431()
{
	//为什么这个程序用前置版本的递增递减？
	//A：后置版本的特性是，cnt-1后，返回原cnt的副本
	//想要用后置需要哪些改动？重写程序。
	//逗号运算符经常被用在for语句中
	vector<int> ivec = { 0,1,2,5 };
	vector<int>::size_type cnt = ivec.size();
	//将把从size到1的值赋给ivec的元素
	for (vector<int>::size_type ix = 0; ix != ivec.size(); ++ix, --cnt) {
		ivec[ix] = cnt;
		cout << ix << " " << cnt << endl;
	}
	for (auto i : ivec)
		cout << i << " ";  //4 3 2 1
	cout << endl;

	system("pause");
	return 0;
}
