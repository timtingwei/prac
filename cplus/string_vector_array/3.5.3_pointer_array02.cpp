#include <iostream>
#include <string>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

int pointer_array02_353()
{
	//ָ��Ҳ�ǵ�����
	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	int *p = arr;     //ָ��pָ��arr����ĵ�һ��item
	cout << *p << endl;
	++p;             //ָ��λ��ǰ��һλ
	cout << *p << endl;

	//����ָ����������е�Ԫ��
	//��һ��Ԫ��ָ���ָ������β��Ԫ�ص���һλ
	//int *begin = arr;
	int *end = &arr[10];    //ָ��arrβԪ�ص���һλ�õ�ָ��,����ֻ��������9
	for (int *b = arr; b != end; ++b)
		cout << *b << endl;

	system("pause");
	return 0;
}