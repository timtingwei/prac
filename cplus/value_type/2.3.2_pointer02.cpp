#include <iostream>

int pointer02()
{
	//int zero = 0;
	//int *pi = &zero;
	
	//��ֵ��ָ��
	//��ָ�븳ֵ�������������һ���µĵ�ַ��ָ���µĶ���
	int i = 42;
	int *pi = 0;       //pi����ʼ������û��ָ���κζ���
	int *pi2 = &i;     //pi2����ʼ��������i�ĵ�ַ
	int *pi3;

	pi3 = pi2;         //pi3��pi2һ��ָ��ͬһ������i
	pi2 = 0;           //����pi2��ָ���κζ���

	//�жϸ�ֵ���ı���ָ���ֵ���Ǹı���ָ����ָ������ֵ
	//��ֵ��Զ�ı���ǵȺ����Ķ���
	int ival = 5;
	pi = &ival;     //pi��ֵ���ı�����piָ��ival
	*pi = 0;        //ival��ֵ���ı�
	std::cout << ival << std::endl;     //���0

	system("pause");
	return 0;
}