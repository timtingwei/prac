#include <iostream>
#include <vector>

using std::cin; using std::cout; using std::endl;
using std::vector;
using std::begin; using::std::end;

int prac_343()
{
	//�������ia�е�Ԫ��
	//version1����Χfor�������������
	//version2����ͨfor���±������
    //version3��ָ��
	//ֱ��д���������ͣ�����ʹ�����ͱ�����auto�ؼ��ֻ���decltype�ؼ���

	//arr��һά����
	int arr[3] = { 0,1,2 };
	//version1
	for (int i : arr)   //��Χfor����
		cout << i << " ";
	cout << endl;

	//version2
	//for (size_t i = 0; i != 2;++i)              //�����±�ָ��arr[2]�ǣ���Ҫִ��ѭ��
	for (size_t i = 0; i != 3; ++i)
		cout << arr[i] << " ";
	cout << endl;

	//version3
	//for (int *p = arr; p!= arr+2;++p)           //����ָ��ָ��arr[2]ʱ����Ҫִ��ѭ��
	for (int *p = arr; p != arr + 3; ++p)
		cout << *p << " ";
	cout << endl;
	
	//cout << "arr[3]:" << arr[3] << endl;

	//ia�Ƕ�ά����
	int ia[3][4] = { {0,1,2,3},{4,5,6,7},{8,9,10,11} };
	//version1:for��Χ�������
	//row�Ǻ���4������������
	for (int (&row)[4] : ia){     //row��һ�����飬��ia����������ã������������ͣ���
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
	for (int (*pi)[4] = ia; pi != ia + 3; ++pi) {         //int *pi[4] ,int *(pi[4]) ,int (*pi)[4] ���ߵ�����??
        //*pj�Ǹ�����, pjָ���������׸�Ԫ��
		for (int *pj = *pi; pj != *pi + 4; ++pj)         //pi��ָ��ia�׸����飨ָ�룩��ָ�룬��Ҫ��������pi��ָ������飨ָ�룩*pi��*pi��������4��*pi����һ��ָ�루���飩��ָ���׸�Ԫ��
			cout << *pj << " ";
		cout << endl;
	}



	system("pause");
	return 0;

	
}