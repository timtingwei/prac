#include <iostream>
#include <string>
#include <vector>
#include <iterator>
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;
using std::begin; using std::end;

int prac_334()
{
	//p1��p2ָ������ͬһԪ�أ��������Ĺ��ܣ�ʲôʱ���ǷǷ��ģ�
	int arr[] = { 0,1,2,3,4,5 };
	int *p1 = arr , *p2 = arr ;
	p1 += p2 - p1;    //p1 = p1 + p2 - p1

	cout << *p1 << endl;

	system("pause");
	return 0;
}