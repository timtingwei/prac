#include <iostream>

using std::cout; using std::cin; using std::endl;

int conversion_411()
{
	//����ת��
	//������������ܹ�����ת������ô���Ǿ��ǹ�����
	int ival = 3.541 + 3;    //������������ʧ����
	/*
	�ӷ��������������ͬ��һ����double��һ����int��
	�ܶ�ʱ�򣬱��ʽ���и��������������������int��ת���ɸ��������㡣
	�ܶ�����ת�����Զ�ִ�еģ��������Ա���룬����Ϊ ��ʽת�� (implicit conversion)

	������3ת����double�ͣ���3.541��ӵõ�double��

	��ʼ��ʱ����ʼ����������Ͳ�ͬ�ı䣬��ʼֵ��ת���ɶ��������
	�ӷ�����õ���double�ͱ�ת����int���͵�ֵ�����ֵ��������ʼ��ival
	double��intת�����Ե�С������ �õ�6
	*/
	cout << ival << endl;

	system("pause");
	return 0;
}