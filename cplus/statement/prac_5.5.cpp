#include <iostream>
#include <string>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::string; using std::vector;

int prac_55()
{
	//дһ���Լ��ĳ���ʹ��ifelse���ʵ�ְ����ֳɼ�ת������ĸ�ɼ���Ҫ��
	vector<string> vec = { "F","D","C","B","A","A++" };
	int grade;
	string lettergrade; //������vector�洢��Ԫ��������ͬ
	cout << "please write down your grade: ";
	cin >> grade;
	
	if (grade < 60)//��������60ʱ��F
		lettergrade = vec[0];     
	else { //��������60
		lettergrade = vec[(grade - 50) / 10];   //����grade����lettergrade
		if (grade != 100) {   //gradeΪ100ʱ A++ ������A++-
			if (grade % 10 > 7)     //β���� 8 9
				lettergrade += "+";
			else if (grade % 10 < 3)   //β����0,1,2
				lettergrade += "-";
		}
	}
	cout << "your lettergrade is : " << lettergrade << endl;

	system("pause");
	return 0;
}