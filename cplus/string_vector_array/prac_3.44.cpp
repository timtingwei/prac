#include <iostream>
#include <vector>

using std::cin; using std::cout; using std::endl;
using std::vector;
using std::begin; using::std::end;

int main()
{
	//�������ia�е�Ԫ��
	//version1����Χfor�������������
	//version2����ͨfor���±������
	//version3��ָ��
	//ֱ��д���������ͣ�����ʹ�����ͱ�����auto�ؼ��ֻ���decltype�ؼ���
	//ʹ�����ͱ���������ѭ�����Ʊ���������

	//ia�Ƕ�ά����
	int ia[3][4] = { { 0,1,2,3 },{ 4,5,6,7 },{ 8,9,10,11 } };

	//�������ͱ���
	using int_array = int[4];   
	//typedef int int_array[4]      ���ͱ���Ϊʲô��������

	//version1:for��Χ�������
	//row�Ǻ���4������������
	for (int(&row)[4] : ia) {     //row��һ�����飬��ia����������ã������������ͣ���
								  //i���������е�����
		for (int i : row)
			cout << i << " ";
		cout << endl;
	}

	//version2:�±������
	//i��������±꣬�±��������size_t  ���׸�size_tŪ�������������� ����
	for (size_t i = 0; i != 3; ++i) {  //++i  or i++ ??
									   //��arr[i]�е�Ԫ���±����ѭ��
		for (size_t j = 0; j != 4; ++j)
			cout << ia[i][j] << " ";
		cout << endl;
	}

	//version3:ָ��
	//��ʼ����ָ��piָ��ia���׸����飬pi����Ҫ������
	//for (int *pi = ia; pi != ia + 3; ++pi) {
	for (int(*pi)[4] = ia; pi != ia + 3; ++pi) {         //int *pi[4] ,int *(pi[4]) ,int (*pi)[4] ���ߵ�����??
														 //*pj�Ǹ�����, pjָ���������׸�Ԫ��
		for (int *pj = *pi; pj != *pi + 4; ++pj)         //pi��ָ��ia�׸����飨ָ�룩��ָ�룬��Ҫ��������pi��ָ������飨ָ�룩*pi��*pi��������4��*pi����һ��ָ�루���飩��ָ���׸�Ԫ��
			cout << *pj << " ";
		cout << endl;
	}



	system("pause");
	return 0;
}
/*//ia�Ƕ�ά����
int ia[3][4] = { { 0,1,2,3 },{ 4,5,6,7 },{ 8,9,10,11 } };
using int_array = int[4];
typedef int int_array[4];
//���ia��ÿ��Ԫ�ص�ֵ��ÿ���ڲ������ռһ��
for (int_array *p = ia; p != ia + 3; ++p) {  //Ϊʲô������int_array *p = ia ������ int (*p)[4] = ia 
	for (int *q = *p; q != *p + 4; ++q)
		cout << *q << " ";
	cout << endl;
}

//ia�Ƕ�ά����
int ia[3][4] = { { 0,1,2,3 },{ 4,5,6,7 },{ 8,9,10,11 } };
//for (int *pi = ia; pi != ia + 3; ++pi) {
for (int(*pi)[4] = ia; pi != ia + 3; ++pi) {         //int *pi[4] ,int *(pi[4]) ,int (*pi)[4] ���ߵ�����??
	//*pj�Ǹ�����, pjָ���������׸�Ԫ��
	for (int *pj = *pi; pj != *pi + 4; ++pj)         
		cout << *pj << " ";
	cout << endl;
}*/