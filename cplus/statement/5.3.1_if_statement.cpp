#include <iostream>
#include <string>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::string; using std::vector;

int if_statement_531()
{
	//if���
	//if���  if else���   Ƕ��if���   
	
	//��������ʽ��ʾ�ĳɼ�ת������ĸ��ʽ���������ֳɼ���Χ�Ǵ�0��100������100����100�ֶ�Ӧ"A++"������60"F",�����ɼ�ÿ10�����ֳ�һ�飺60��69����69���ڣ���Ӧ��ĸ"D"
	//ʹ��vector��������ĸ�ɼ����п��ܵ�ȡֵ
	const vector<string> scores = { "F","D","C","B","A","A++" };
	int grade;
	cout << "please write down your grade:";
	cin >> grade;
	string lettergrade;
	if (grade < 60)
		lettergrade = scores[0];
	else {   //ʹ�ø������ע�⻨����
		lettergrade = scores[(grade - 50) / 10];  //��ȡ��ĸ��ʽ�ĳɼ�
		if (grade != 100)
			if (grade % 10 > 7)
				lettergrade += '+';   //ĩβ��8����9�ĳɼ����һ���Ӻ�
			else if (grade % 10 < 3)
				lettergrade += '-';  //ĩβ��0��1����2���һ������
	}
		
	cout << endl;
	cout << "the lettergrade is :" << lettergrade << endl;

	//����else:�ڼ���if ���� if else������У����׻���ĳ��������else���ĸ�ifƥ��
	//c++�涨else�������������δƥ���ifƥ�䣬�Ӷ������˳���Ķ�����

	//����ʹ�û����ſ���ִ��·��

	system("pause");
	return 0;
}