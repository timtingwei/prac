#include <iostream>
#include <vector>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

int prac_424()
{
	//?:�Ľ����������������ɣ��������
	int grade;
	cin >> grade;
	string finalgrade = (grade > 90) ? "high pass"
		: (grade > 60) ? "pass" : "fail";
	//�ȼ����������������grade��90�Ƚϣ���true,string����ֵ"high pass",��false��string����ֵ�Ҳ�����������
	//������Ҳ��������㣬grade > 60����true����ֵ"pass",����"fail"
	//�������ҽ���ɵļ�������Ϊ��


	cout << finalgrade << endl;
	system("pause");
	return 0;
}