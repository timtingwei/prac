#include <iostream>
#include <string>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::string; using std::vector;

int prac_513()
{
	//c
	unsigned evenCnt = 0, oddCnt = 0;
	int digit = 5;
	switch (digit) {
		//case 5,3,1,7,9: //�޷����ֵһ��ѡ��
		case 5:
			oddCnt++;
			break;
		case 2:
			evenCnt++;
			break;
	}
	cout << "cout of even:\t" << evenCnt << "\n"
		<< "cout of odd:\t" << oddCnt << endl;


	//switch����� �����߼����break
	//���������ڲ����г�ֵ�ı������ֳ������������ⲿ����switch case��תʱ���Ϸ�
	//caseһ��ֻ��ѡ��һ��
	//case�������ֻ���ǳ������ʽ�����Ǳ�����
	system("pause");
	return 0;
}