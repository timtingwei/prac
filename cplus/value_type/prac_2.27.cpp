#include <iostream>

int prac_227()
{
	//int i = -1, &r = 0;  //����ĳ��ʼֵ�����Ƕ���
	int i2 = 3;
	int *const p2 = &i2;
	const int i = -1, &r = 1;
	std::cout << r << std::endl;
	// r = 3;    //���ܸ�������ֵ..

	const int *const p3 = &i2;     //ָ��������i2�ĳ���ָ��p3
	const int *p1 = &i2;   //ָ���������ָ�� p1
	//const int *const r2;   //��������ⲿ�ģ�������ʼ����������
	const int i3 = i, &r32 = i;

	system("pause");
	return 0;
}