#include <iostream>

int decltype_253()
{
	//���decltypeʹ�õı��ʽ��һ����������decltype���ظñ���������

	const int ci = 0, &cj = ci;
	decltype(ci) x = 0;        //x��������const int 
	decltype(cj) y = x;        //y��������const int&, y�󶨵�x
	//decltype(cj) z;            //z��������const int&,�����ñ��뱻��ʼ��

	//decltype������
	//decltype �Ľ����������������
	int i = 42, *p = &i, &r = i;
	decltype (r + 0) b;         //b��һ��δ����ʼ����int  r+0��ͬ i+0
	//decltype (r) b;             //����:r�������0�Ļ���ζ�ţ�b��������int&,һ����Ҫ����ʼ��
	//decltype (*p) c;            //����:c��һ��int&  *p��������ò��� *p�õ� &i ���� c��int&,һ����Ҫ��ʼ��
	decltype (p) c;               //��ȷ��pΪ����ָ�룬��ôc������������ָ��
	//c = 24;

	//decltype˫�����ŵ��÷�
	//˫��������Զ�������ã�������ֻ�е�����������ʱ��������
	//decltype ((i)) d;    //����d��������int&���뱻��ʼ��
	decltype ((i)) d = r;    //��ȷ
	decltype (i) e;          //��ȷ:��������˵����ԭ����int����

	return 0;
}