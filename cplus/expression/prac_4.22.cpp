#include <iostream>
#include <vector>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

int prac_422()
{
	//���ɼ����ֳ�high pass,low pass,pass,fail���֣�60-75Ϊlow pass
	//�����汾 һ��������������� ����һ���� ���if���
	int grade;

	/*while (cin >> grade) {
		string finalgrade = grade > 75 ? "high pass"
			: (grade > 60 ? "low pass"
				: "fail");
		cout << finalgrade << endl;
	}*/

	//���if���
	cin >> grade;
	string finalgrade;
	if (grade > 75) {
		finalgrade = "high pass";
	}
	else {
		if (grade > 60)
			finalgrade = "low pass";
		else {
			finalgrade = "fail";
		}
	}
	cout << finalgrade << endl;
	//�ڶ����߼����ṹ��ʽ������

	


	system("pause");
	return 0;
}