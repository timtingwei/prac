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
	//�õ������������鹤��
	vector<int> v1;                      //v1��������������Ϊ��
	vector<int> v2(10);                  //v2����������10��0
	vector<int> v3(10, 42);              //v3����������10��42
	vector<int> v4{ 10 };                //v4����������1��10
	vector<int> v5{ 10, 42 };            //v5����������10��42����Ԫ��
	vector<string> v6{ 10 };             //v6�ַ���������10��""
	vector<string> v7{ 10, "hi" };       //v7�ַ���������10��"hi"


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