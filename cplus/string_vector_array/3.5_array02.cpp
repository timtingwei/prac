#include <iostream>
#include <string>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

int array02_35()
{
	//��������Ԫ��
	//�±�������� size_t ,������ص��޷������ͣ���Ƶ��㹻���ܱ�ʾ�ڴ����������Ĵ�С����cstddef.h�ж���

	//�ɼ��ֶ�
	unsigned scores[11] = {};  //11�������Σ���ʼֵΪ0
	unsigned grade;
	while (cin >> grade) {
		if (grade <= 100)
			++scores[grade / 10];
	}

	for (auto i : scores)     //ά�����������͵�һ���֣�ϵͳ֪��score�����ж��ٸ�Ԫ��
		cout << i << " ";
	cout << endl;

	//����������İ�ȫ���ⶼԴ�ڻ������������������������ݽṹ�±�Խ�粢��ͼ���ʷǷ��ڴ�����ʱ���������

	system("pause");
	return 0;

}