#include <iostream>

//��������˵���������ڲ����˶�����ȫ�ֱ���ͬ�����±���

int reused = 42;  //reusedӵ��ȫ��������
int in_scope()
{
	int unique = 0; //uniqueӵ�п�������
	//���#1:ʹ��ȫ�ֱ���resued
	std::cout << reused << " " << unique << std::endl;
	int reused = 0;   //�ֲ���������ȫ�ֱ���
	//���#2:ʹ�þֲ�����reused
	std::cout << reused << " " << unique << std::endl;  //reused ������������(in scope)
	//���#3:��ʾ����ȫ�ֱ���reused
	std::cout << ::reused << " " << unique << std::endl;
	system("pause");
	return 0;
}