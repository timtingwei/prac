#include <iostream>
using std::cin; using std::cout; using std::endl;

void exchange(int *ip,int *jp)
{
	//ʹ��ָ���βν�������������ֵ
	auto tmp = *ip;//��ʼ��tmp�������ڴ����ȱ���ֵ�Ķ���ֵ
	*ip = *jp;     //ip��ָ��Ķ��󣬸�ֵΪjpָ��Ķ���
	*jp = tmp;     //ͬ�Ͻ���
}

int prac_610()
{
	//������������        -->����&��Ȼ��ָ������ int *j = &i;  ʵ��Ϊ&i 
	int i = 42, j = 0;
	exchange(&i, &j);                           //���ý����������������ָ������
	cout << "i= " << i << " j= " << j << endl;  //��� i= 0, j= 42
	
	//����ָ������
	int *ptr1 = &i, *ptr2 = &j;                  //ptr1ָ��i,ptr2ָ��j
	exchange(ptr1, ptr2);                        //���ý�������������ָ������
	cout << "i= " << i << " j= " << j << endl;   //��� i= 42, j= 0
	
	//c�г���ʹ��ָ�����͵��βη��ʺ����ⲿ�����
	//c++�������������͵��β�(int &i),
	//�������������ָ�����βΣ�������ʵ�Ρ���������ú�ָ������𣡣�


	system("pause");
	return 0;
}