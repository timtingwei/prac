#include <iostream>
int pointer03()
{
	//������ָ�����
	int ival = 1024;
	int *pi = 0;
	int *pi2 = &ival;
	if (pi)
		std::cout <<"pi" <<pi << "\n" << std::endl;
	if (*pi2)
		std::cout << "*pi2" << *pi2 << "\n" << std::endl;
	if (pi2)
		std::cout <<"pi2  " <<pi2 << std::endl;
	

	// voidָ��
	//void*�������ڴ����������ַ.�õ�ַ�е�����һ��ʲô���͵Ķ��󲢲��˽�
	double obj = 3.14, *pd = &obj;

	void *pv = &obj;
	pv = pd;
	//û�취�����ڴ�ռ�����Ķ���

	system("pause");
	return 0;
}