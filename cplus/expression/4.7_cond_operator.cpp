#include <iostream>
#include <vector>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

int cond_operator_47()
{
	// ?:����Ѽ򵥵�if-else�߼���Ƕ�뵽�������ʽ��
	//����������ж� �ɼ��Ƿ�ϸ�
	int grade;
	cin >> grade;
	string finalgrade = (grade < 60) ? "fail" : "pass";
	cout << finalgrade << endl;
	//������ת�������������ʽ������ֵ������ת����ͬһ����ֵ����ʱ������Ľ������ֵ:����������Ϊ��ֵ

	//�����������Ƕ��
	//�ѳɼ��ֳ� high pass fail ����
	finalgrade = (grade > 90) ? "high" 
		:(grade > 60) ? "pass" : "fail";
	cout << finalgrade << endl;

	//��������������ҽ���ɣ�������������
	//�������ӣ����ұߵ��������������˿���ߵ����������ģ���֧
	//����������Ƕ����ñ𳬹�����

	//������ʽ�е����������
	cout << ((grade < 60) ? "fail" : "pass");   //���pass or fail
	cout << (grade < 60) ? "fail" : "pass";     //���0 or 1
	//cout << grade < 60 ? "fail" : "pass";     //��ͼ�Ƚ�cout �� 60

	//�ڶ����ȼ���
	cout << (grade < 60);
	cout ? "fail" : "pass";

	/*//�������ȼ���
	cout << grade;
	cout < 60 ? "fail" : "pass";*/

	system("pause");
	return 0;
}