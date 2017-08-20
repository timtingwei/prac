#include <iostream>
#include <string>
#include <vector>

using std::cin; using std::cout; using std::endl;
using std::string;
using std::vector;


bool compare(const int i, const int j)
{
	//名为compare的函数，返回bool值，两个参数都是int类的引用
	return i < j;         //比较i和j的大小，若i小于j返回true
}

vector<int>::iterator change_val(const int val, vector<int>::iterator &iter)
{
	//将vector对象指定迭代器指向的对象的值赋成val
	*iter = val;          //对迭代器指向元素赋值
	return iter;          //返回该迭代器
}

int main_compare_change_val()
{
	bool ret = compare(5, 6);   //调用compare函数
	cout << ret << endl;        //输出1

	vector<int> ivec = { 0,1,2,3,4 };
	auto iter = ivec.begin() + 2;
	change_val(5, iter);
	for (auto i : ivec)
		cout << i << " ";
	cout << endl;


	system("pause");
	return 0;
}