#include <iostream>
#include <vector>
#include "Chapter6.h"
using std::cin; using std::cout; using std::endl;
using std::vector;

//��������
//����ֻ�ܶ���һ�Σ����ǿ����������
//�����������뺯���壬��һ���ֺŴ��漴��

//����д�β����֣���д���ܰ���ʹ���߸��õ���⺯���Ĺ���
void print(vector<int>::const_iterator beg,
	vector<int>::const_iterator end);

//������Ҫ�� (�������ͣ����������β�����)�����˺����Ľӿڣ�˵���ú�����ȫ����Ϣ��
//��������Ҳ��������ԭ��



int function_prototype_612()
{
	cout << i << endl;

	cout << head_call(8) << endl;
	//vector<int> ivec = { 0,1,2,3 };
	//auto beg = ivec.begin(), end = ivec.end();
	//print(beg,end);
	//����Ѻ�����������ͷ�ļ��У�����ȷ��ͬһ������������������һ�¡�
	//����һ��������ı亯���Ľӿڣ�ֻ��Ҫ�ı�һ����������

	//����call_back����
	for (int i = 0; i != 10; ++i)
		cout << call_back() << endl;   
	//�������κ�һ��Դ�ļ��б������������ͷ�ļ��У�����������Դ�ļ���ʹ��


	system("pause");
	return 0;
}