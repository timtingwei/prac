#include <iostream>
//��using������������ʹ������cinʱ���������ռ�std��ȡ��
using std::cin;

int using01()
{
	int i = 0;
	cin >> i;          //��ȷ����std::cout >> i;������ͬ
	//cout << i;       //����û�ж�Ӧ��using������������ʽʹ��
	std::cout << i;    //��ȷ����ʽ�ش�std��ʹ��cout

	system("pause");
	return 0;

}