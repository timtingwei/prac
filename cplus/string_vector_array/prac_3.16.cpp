#include <iostream>
#include <vector>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::string; using std::vector;

int prac_316()
{
	//把3.13中的容器内容打印出来，检测正确性
	vector<int> v1;                      //v1整数容器，内容为空
	vector<int> v2(10);                  //v2整数容器，10个0
	vector<int> v3(10, 42);              //v3整数容器，10个42
	vector<int> v4{ 10 };                //v4整数容器，1个10
	vector<int> v5{ 10, 42 };            //v5整数容器，10和42两个元素
	vector<string> v6{ 10 };             //v6字符串容器，10个""
	vector<string> v7{ 10, "hi" };       //v7字符串容器，10个"hi"
	for (auto i : v1)
		cout << i << " ";
	cout << endl;
	for (auto i : v2)
		cout << i << " ";
	cout << endl;
	for (auto i : v3)
		cout << i << " ";
	cout << endl;
	for (auto i : v4)
		cout << i << " ";
	cout << endl;
	for (auto i : v5)
		cout << i << " ";
	cout << endl;
	for (auto i : v6)
		cout << i << " ";
	cout << endl;
	for (auto i : v7)
		cout << i << " ";
	cout << endl;

	system("pause");
	return 0;

}