#include <iostream>

int const04_243()
{
	//����const��ʾ ָ�뱾����һ������,�ײ�const��ʾָ����ָ�Ķ�����һ������
	int i = 0;
	int *const p1 = &i;  //���ܸı�p1������const
	const int ci = 42;   //���ܸı�ci,����const
	const int *p2 = &ci; //����ı�p2���ײ�const
	const int *const p3 = p2;   //�����ǵײ�const�������Ƕ���const
	const int &r = ci;    //�����������õ�const���ǵײ�const

	//ִ�ж��󿽱�ʱ������const����ʲôӰ��
	i = ci;
	p2 = p3; //p3����const���ֲ���Ӱ�� 

	//�ײ�const�����Ʋ��ܺ���
	//int *p = p3;        //����:p3�����ײ�const�Ķ��壬��pû��
	p2 = p3;              //��ȷ:p2�ǵײ㣬p3�����ײ�Ĳ���
	p2 = &i;              //��ȷ:int*��ת����const int*
	//int &i = ci;          //����:��ͨ��int&���ܰ󶨵�int������
	const int &r2 = i;    //��ȷ��const int& ���԰󶨵�һ����ͨ��int��

	return 0;

}