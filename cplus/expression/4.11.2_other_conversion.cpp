#include <iostream>
using std::cin; using std::cout; using std::endl;

int other_conversion_4112()
{
	//����ת����ָ��
	int ia[4] = { 1,2,3,4 };
	int *p = ia;          //pΪָ��ia��Ԫ�ص�ָ��
	cout << (*p) << endl;
	int(*ip)[4] = &ia;    //ip��ָ��ia�����ָ�룬��Ϊȡ��ַ�����ᷢ������ת��
	for (auto i : (*ip))
		cout << i << endl;

	int(&ra)[4] = ia;    //����������ʼ������ ���ᷢ��������ת��
	for (auto i : ra)
		cout << i << endl;


	system("pause");
	return 0;
}