#include <iostream>
//#include "Sales_item.h"
int type_alias()
{
	//���ַ����������ͱ���
	//��ͳ���� typedef  ������䶨��Ĳ����Ǳ������Ǳ���
	typedef double wages;     //wages��double��ͬ���
	typedef wages base, *p;   //base��double��ͬ��ʣ�p��double*��ͬ���
	//�±�׼ ��������(alias declaration)
	//using SI = Sales_item;    //�ѵȺ��������ֹ涨���Ҳ�ı���

	//wages hourly, weekly;   //�ȼ�double hourly, weekly;
	//SI item;                //�ȼ� Sales_item item;

	typedef char *pstring;     //pstring ���������������ָ�룬������char*��д���������������ͱ��char
	const pstring cstr = 0;    //cstr��ָ��char��ָ��
	//const pstring *ps;         //ps��һ��ָ�룬���Ķ�����ָ��char�ĳ���ָ��
	
	//const char *cstr = 0;      //���󣺲��ܽ����������������
	return 0;
}