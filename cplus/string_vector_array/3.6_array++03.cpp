#include <iostream>
#include <vector>

using std::cin; using std::cout; using std::endl;
using std::vector;
using std::begin; using::std::end;

int array03_36()
{
	//ָ��Ͷ�ά���� 
	//ʹ�ö�ά���� ���֣���Ȼ�Զ�ת����ָ��
	//int arr[2][3]({1,2,3},{4,5,6});
	int arr[2][3] = {
		{1,2,3},
		{4,5,6}
	};
	//int *p = arr;    //����:pָ������飬��ôָ��pҲ�ж�Ӧ������
	int(*p)[3] = arr;     //��ȷ��pָ����3������������
	//Բ���ŵ�����
	//int *p[3];      //����ָ�������

	p = &arr[1];          //ָ��pָ����arr��βԪ�أ���Ԫ����һ������Ϊ3������
	int (*p1)[3] = &(arr[1]);
	//���arr��ÿ��Ԫ�ص�ֵ��ÿ���ڲ������ռһ��
	//��ʼ��piָ��arr�е�������
	for (auto pi(arr); pi != arr + 2; ++pi) {      //arr+2����ָ����ǰ�ƶ���λ,arr��������
		//��ʼpjָ��pi��ָ�������е���Ԫ��
		for (auto pj(*pi); pj != (*pi) + 3; ++pj)  //(*pi)����Ԫ�� 
			cout << *pj << " ";
		cout << endl;
	}
	//ָ���begin/end���滻
	//pi��ָ�������ָ��
	for (auto pi = begin(arr); pi != end(arr); ++pi) {     //���ַ�������Ҫ֪������ĳ���
		//pj��ָ��������Ԫ�ص�ָ��
		for (auto pj = begin(*pi); pj != end(*pi); ++pj)
			cout << *pj << " ";
		cout << endl;
	}

	//���ͱ����򻯶�ά�����ָ��
	using int_array = int[3];     //3��������ɵ�����
	typedef int int_array[3];     //�ȼ����������
	//��ʼ��p��ָ���׸������ָ��
	for (int_array *p = arr; p != arr + 2; ++p) {
		//��ʼ��q��ָ������*p����Ԫ��
		for (int *q = *p; q != *p + 3; ++q)
			cout << *q << " ";
		cout << endl;
	}



	system("pause");
	return 0;


}

