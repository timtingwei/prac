#include <iostream>
#include <string>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

int prac_333()
{
	//�ɼ��ֶ�
	//unsigned scores[11] = {};  //11�������Σ���ʼֵΪ0
	unsigned scores[11];         //����ʼ��,��ʼ��δ����
	unsigned grade;
	while (cin >> grade) {
		if (grade <= 100)
			++scores[grade / 10];
	}

	for (auto i : scores)     //ά�����������͵�һ���֣�ϵͳ֪��score�����ж��ٸ�Ԫ��
		cout << i << " ";
	cout << endl;

	system("pause");
	return 0;
}