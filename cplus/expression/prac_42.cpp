#include <iostream>
#include <vector>

using std::cin; using std::cout; using std::endl;
using std::vector;

int prac_42()
{
	//�������ȼ��ͽ�����������
	// (a)*vec.begin()  (b)*vec.begin() + 1 
	vector<int> vec{ 1,2,3,4,5 };
	int p1 = *vec.begin();            //p1��ֵΪvector��һ��Ԫ��
	int p2 = *vec.begin() + 1;        //p2��ֵΪvectorһ��Ԫ��+1
	cout << p1 << endl;
	cout << p2 << endl;

	//���ȼ� .��()����1�����������ɣ�*�ڶ������ҽ���ɣ�+����������������
	cout << (*(vec.begin())) << endl;
	cout << ((*(vec.begin())) + 1) << endl;


	system("pause");
	return 0;

}