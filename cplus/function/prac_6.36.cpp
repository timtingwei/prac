#include <iostream>
#include <string>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::string;
using std::vector;

//��дһ�����������������������ò��Ҹ��������10��string����
string(&func636())[10];

//���ͱ���
using arrS = string[10];
typedef string arrS[10];
arrS &func();

//decltype�ؼ���
string sarr[10];
decltype(sarr) &func636();

//β�÷�������
auto func636()->string(&)[10];
