#include <iostream>

int prac_233()
{
	int i = 0, &r = i;
	auto a = r;
	const int ci = i, &cr = ci;
	auto b = ci;
	auto c = cr;
	auto d = &i;
	auto e = &ci;
	const auto f = ci;
	auto &g = ci;
	//int a; 
	//const int b;
	//const int c;
	//int &d; ??
	//const int &e = i;??
	//const int g;
	a = 42;
	b = 42;
	c = 42;
	//d = 42;     //����:�޷���"int"ת��Ϊ"int *"  d��һ������ָ�룬�����ĵ�ַ����ָ�������Ķ��ַ
	//e = 42;       //����:e��һ��ָ������������ָ��
	//g = 42;         //g��һ�����ͳ������ã��󶨵�ci

	return 0;
}