#include <iostream>
#include <vector>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

int prac_429()
{
	//�ƶ�����Ĵ���
	int x[10]; int *p = x; //ָ��pָ���������Ԫ��
	cout << sizeof(x) / sizeof(*x) << endl;   //10  //sizeof�� x����ת����ָ��
	cout << sizeof(p) / sizeof(*p) << endl;   //1   //*p�����������Ԫ�أ�ָ������ռ�ÿռ��С4��intҲΪ4

	system("pause");
	return 0;

}