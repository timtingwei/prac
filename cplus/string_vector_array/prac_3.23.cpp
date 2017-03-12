#include <iostream>
#include <string>
#include <iterator>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;
using std::iterator;

int prac_323()
{
	//创建一个含有10个整数的vector对象，用迭代器将所有元素的值变成原来的两倍，输入vector内容
	vector<int> ivec(10, 2);

	for (auto it = ivec.begin(); it != ivec.end(); ++it)
		*it *= 2;


	for (auto i : ivec)
		cout << i << " ";
	cout << endl;

	system("pause");
	return 0;
}