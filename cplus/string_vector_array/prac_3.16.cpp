#include <iostream>
#include <vector>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::string; using std::vector;

int prac_316()
{
	//��3.13�е��������ݴ�ӡ�����������ȷ��
	vector<int> v1;                      //v1��������������Ϊ��
	vector<int> v2(10);                  //v2����������10��0
	vector<int> v3(10, 42);              //v3����������10��42
	vector<int> v4{ 10 };                //v4����������1��10
	vector<int> v5{ 10, 42 };            //v5����������10��42����Ԫ��
	vector<string> v6{ 10 };             //v6�ַ���������10��""
	vector<string> v7{ 10, "hi" };       //v7�ַ���������10��"hi"
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