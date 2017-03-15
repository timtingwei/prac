#include <iostream>
#include <vector>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::vector;
using std::begin; using::std::end;
using std::string;


int prac_345()
{

	//�������ia�е�Ԫ��
	//version1����Χfor�������������
	//version2����ͨfor���±������
	//version3��ָ��
	//ʹ��auto�ؼ���

	//ia�Ƕ�ά����
	int ia[3][4] = { { 0,1,2,3 },{ 4,5,6,7 },{ 8,9,10,11 } };
	//version1:for��Χ�������
	//row�Ǻ���4������������
	for (auto (&row)[4] : ia) {     
		//i���������е�����
		for (int i : row)
			cout << i << " ";
		cout << endl;
	}

	//version2:�±������
	//i��������±꣬�±��������size_t  ���׸�size_tŪ�������������� ����
	for (auto i = 0; i != 3; ++i) {  //++i  or i++ ??
		//��arr[i]�е�Ԫ���±����ѭ��
		for (auto j = 0; j != 4; ++j)
			cout << ia[i][j] << " ";
		cout << endl;
	}

	//version3:ָ��
	//��ʼ����ָ��piָ��ia���׸����飬pi����Ҫ������
	//for (int *pi = ia; pi != ia + 3; ++pi) {
	for (auto (*pi) = ia; pi != ia + 3; ++pi) {         //int *pi[4] ,int *(pi[4]) ,int (*pi)[4] ���ߵ�����??
														 //*pj�Ǹ�����, pjָ���������׸�Ԫ��
		for (auto *pj = *pi; pj != *pi + 4; ++pj)         //pi��ָ��ia�׸����飨ָ�룩��ָ�룬��Ҫ��������pi��ָ������飨ָ�룩*pi��*pi��������4��*pi����һ��ָ�루���飩��ָ���׸�Ԫ��
			cout << *pj << " ";
		cout << endl;
	}

	//��auto��������ʱ�򣬾�Ȼ��������ά�ȣ�
	//test
	int iarr[3] = { 1,2,3 };
	auto &coarr = iarr;
	for (auto i : coarr)
		cout << i << " ";
	cout << endl;
	//ȷʵ���Բ���


	system("pause");
	return 0;
}