#include <iostream>
#include <vector>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::vector;
using std::begin; using::std::end;
using std::string;

int array_question3_36()
{
	//ia�Ƕ�ά����
	int ia[3][4] = { { 0,1,2,3 },{ 4,5,6,7 },{ 8,9,10,11 } };
	for (int (*pi)[4] = ia; pi != ia + 3; ++pi) {         //int *pi[4] ,int *(pi[4]) ,int (*pi)[4] ���ߵ�����??
		// int *pi[4] = ia    //pi��һ������ָ������飬����Ϊ4
		// int (*pi)[4] = ia  //pi��һ������ָ�������
		// int *(pi[4]) = ia  //pi��һ������ָ������飬����Ϊ4 ??  ����ʵ���޷�����
														 											 
		//*pj�Ǹ�����, pjָ���������׸�Ԫ��
		for (int *pj = *pi; pj != *pi + 4; ++pj)
			cout << *pj << " ";
		cout << endl;
	}
	int arr[10];              //����10������������
	int *ptrs[10];            //����10������ָ�������
	//int &refs[10] = /*?*/;    //���󣺲��������õ�����
	int(*Parray)[10] = &arr;  //����10�����͵�ָ�룬ָ��һ������10������������
	int(&arrRef)[10] = arr;   //��arr�����ã�����10�����͵�����

	int *(&arry)[10] = ptrs;  //arry�Ƕ�ptrs�����ã�����10������ָ��

	system("pause");
	return 0;
}