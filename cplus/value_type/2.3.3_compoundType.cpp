#include <iostream>

int compoundType_233()
{
	//һ�����������Զ������ͬ���͵ı���
	//i��һ��int����,p��һ��int��ָ��,r��һ��int������
	
	/*int i = 1024, *p = &i, &r = i;

	int* p1, p2;  //p1��ָ��int��ָ��,p2��int 

	//ָ��ָ���ָ��
	int ival = 1024;
	int *pi = &ival;  //piָ��һ��int�͵���
	int **ppi = &pi;  //ppiָ��һ��int�͵�ָ��
	std::cout << "The value of ival\n"
		<< "direct value: " << ival << "\n"
		<< "indirect value: " << *pi << "\n"
		<< "doubly indirect value: " << **ppi << std::endl;
	*/
	//ָ��ָ�������
	int i = 42;
	int *p;          //p��һ��int��ָ��
	int *&r = p;    //r�Ƕ�ָ��p������
	r = &i;         //r��p����һ������pָ��i
	*r = 0;         //rָ��Ķ���i ��ֵΪ0
	std::cout << i << std::endl;
	system("pause");
	return 0;
}