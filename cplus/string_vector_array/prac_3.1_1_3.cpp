#include <iostream>

using std::cin; using std::cout; using std::endl;

int prac_3113()
{
	//��ʾ�û���������������ӡ��������������ָ����Χ�ڵ���������
	cout << "Please write down two numbers" << endl;
	int d0, d1;
	int temp = 0;
	cin >> d0 >> d1;    //cin���޷���ʾ
	if (d0 > d1){
		temp = d0;
		d0 = d1;
		d1 = temp;
	}
	int i = d0;
	for (i; i <= d1; ++i){
		cout << i << endl;
	}

	system("pause");
	return 0;
}