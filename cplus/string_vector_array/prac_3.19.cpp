#include <iostream>
#include <vector>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::string; using std::vector;

int prac_319()
{
	//定义一个含有10个元素的vector对象，所有元素都是42
	//方法一
	vector<int> ivec1(10, 42);
	vector<int> ivec2{ 42, 42, 42, 42, 42, 42, 42, 42, 42, 42 };
	vector<int> ivec3;
	for (int i = 0; i != 10; ++i)
		ivec3.push_back(42);

	for (auto i : ivec1)
		cout << i << " ";
	cout << endl;
	for (auto i : ivec2)
		cout << i << " ";
	cout << endl;
	for (auto i : ivec3)
		cout << i << " ";
	cout << endl;

	system("pause");
	return 0;
}