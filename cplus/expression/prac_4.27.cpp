#include <iostream>
#include <vector>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

int prac_427()
{
	//���б��ʽ�Ľ��
	unsigned long ul1 = 3, ul2 = 7;
	//�²⣺ul1��unicode16�ַ���������unsigned long 
	cout << ul1 << " " << ul2 << endl; //3 7
	cout << (ul1 & ul2) << endl;  //3
	cout << (ul1 | ul2) << endl;  //7
	cout << (ul1 && ul2) << endl; //1
	cout << (ul1 || ul2) << endl; //1

	//�²⣺�Ƿ�������
	// ul1=3      00000000 00000000 00000000 00000111
	// ul2=7      00000000 00000000 00000000 01111111
	//u1l & ul2 : 00000000 00000000 00000000 00000111
	//ul2 | ul2 : 00000000 00000000 00000000 01111111
	//ul1&& ul2 : 1 && 1  ���1
	//ul2|| ul2 : 1 || 1  ���1

	//����
	unsigned int a1 = 3, a2 = 12;
	cout << a1 << " " << a2 << endl;  //3 12
	cout << (a1 & a2) << endl;  //0
	cout << (a1 | a2) << endl;  //15
	cout << (a1 && a2) << endl; //1
	cout << (a1 || a2) << endl; //1


	system("pause");
	return 0;


}
