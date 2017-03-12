#include <iostream>
#include <string>
#include <iterator>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;
using std::iterator;

int prac_321()
{
	//用迭代器重做检验工作
	vector<int> v1;                      //v1整数容器，内容为空
	vector<int> v2(10);                  //v2整数容器，10个0
	vector<int> v3(10, 42);              //v3整数容器，10个42
	vector<int> v4{ 10 };                //v4整数容器，1个10
	vector<int> v5{ 10, 42 };            //v5整数容器，10和42两个元素
	vector<string> v6{ 10 };             //v6字符串容器，10个""
	vector<string> v7{ 10, "hi" };       //v7字符串容器，10个"hi"


	for (auto it = v1.cbegin(); it != v1.cend(); ++it)
		cout << *it << " ";
	cout << endl;
	for (auto it = v2.cbegin(); it != v2.cend(); ++it)
		cout << *it << " ";
	cout << endl;
	for (auto it = v3.cbegin(); it != v3.cend(); ++it)
		cout << *it << " ";
	cout << endl;


	system("pause");
	return 0;

}