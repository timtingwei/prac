#include <iostream>
#include <cstdlib>

int pointer()
{
	//����ָ�뽫����д��&d����ʽ
	int *ip1, *ip2;  //ip1��ip2����ָ��int�Ͷ����ָ��
	double dp, *dp2;  //dp2��ָ��double���Ͷ����ָ�룬dp��double�Ͷ���

	//��ȡ����ĵ�ַ 
	//ȡ��ַ��(������&)
	int ival = 42; 
	int *p = &ival;  //p��ű���ival�ĵ�ַ������˵ p��ָ�����ival��ָ��

	double dval; 
	double *pd = &dval;  //��ʼֵ��double�Ͷ���ĵ�ַ
	double *pd2 = pd;  //��ʼֵ��ָ��double�����ָ��

	//int &pi = pd; //����:ָ��pi���ͺ�pd�����Ͳ�ƥ��
	//pi = &dval    //����:��ͼ��double�Ͷ���ĵ�ַ����int��ָ��
	
	//����ָ����ʶ���
	//�����÷�
	//int ival = 42;
	//int *p = &ival; 
	std::cout << *p << std::endl;  //*�õ�ָ��p��ָ��Ķ��� ���42
	*p = 0;
	std::cout << *p << std::endl;  //���0 Ϊ*p��ֵʵ����Ϊp��ָ��Ķ���ֵ
	//�����ò�������������ָ����ĳ���������Чָ��

	//��ָ�� Null pointer
	int *p1 = nullptr;        //equal to int *p1 = 0;   c++11�±�׼�ո�����
	int *p2 = 0;              //ֱ�ӽ�p2��ʼ��Ϊ���泣��0
	//��Ҫ����#include <cstdlib>
	int *p3 = NULL;         //�ȼ��� int *p3 = 0;
	//��int����ֱ�Ӹ�ֵ��ָ���Ǵ������
	int zero = 0;
	//int *pi = zero;     //����:���ܰ�int����ֱ�Ӹ�ֵ��ָ��
	int *pi = &zero;

	
	
	system("pause");
	
	return 0;


}