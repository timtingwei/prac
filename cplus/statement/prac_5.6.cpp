#include <iostream>
#include <string>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::string; using std::vector;

int prac_56()
{
	//дһ���Լ��ĳ���ʹ��ifelse���ʵ�ְ����ֳɼ�ת������ĸ�ɼ���Ҫ��
	//��д��ʹ�����������?:����if else 
	vector<string> vec = { "F","D","C","B","A","A++" };
	int grade;
	string lettergrade; //������vector�洢��Ԫ��������ͬ
	cout << "please write down your grade: ";
	cin >> grade;
	
	lettergrade = (grade < 60 ? (vec[0]): (vec[(grade - 50) / 10]));
	lettergrade += ((grade != 100) ? ((grade % 10 >7 || grade %10 <3)?((grade % 10 >7)?("+"):""):"-") : (""));
	//��������� ���� ����Ƕ��ʱ���ɶ��Ժܲ�

	cout << "your lettergrade is : " << lettergrade << endl;

	system("pause");
	return 0;
}