#include <iostream>
#include <vector>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

int prac_420()
{
	//是否合法，含义什么，错在何处
	vector<string> svec = { "hello","world","c++" };
	auto iter = svec.begin();

	
	//                                含义           
	cout << *iter++ << endl;          //正确iter++ 返回iter原值的副本，对该对象解引用得到 "hello"       	
	//cout << (*iter)++ << endl;        //错误：对iter解引用得到字符串"hello"，递增只能对int型和迭代器起作用
	//cout << *iter.empty() << endl;      //错误：.运算符优先级大于*，先访问iter的empty成员，但iter是一个迭代器没有empty成员
    cout << iter->empty() << endl;      //正确：访问迭代器iter所指向元素的empty成员，得到是否为空的bool值，相当于 (*iter).empty()
	//cout << ++*iter << endl;            //错误：前置和*解引用运算符并列，但满足右结合律，先解引用iter得到"hello",++不能对字符串起作用
	cout << iter++->empty() << endl;   //正确：iter++作为->的运算对象,它返回为原iter的副本，iter迭代器前移一位，->表示访问当前迭代器所指向元素的empty成员，该成员得到的值类型为bool,表示是否为空


	/*//测试 递增运算符 对哪些类型起作用 
	int ival = 1; double dval = 1; bool bval = false; 
	string sval = "c++";
	vector<int> ivec = { 1,2,3 };
	vector<string> svec1 = { "hello","world","c++" };

	cout << ival++ << dval++ << bval++ << endl;
	//cout << sval++ << endl;     //string对象  未定义的 运算符可接受的类型转换*/


	system("pause");
	return 0;
}