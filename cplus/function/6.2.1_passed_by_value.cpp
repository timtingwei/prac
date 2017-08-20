#include <iostream>
using std::cin; using std::cout; using std::endl;

//ʵ�ε�ֵ�������β�ʱ���βκ�ʵ����������������Ķ���
//ʵ�α�ֵ����(passed by value)������ ���� �� ��ֵ����(called by value)

//�����β�������Ӧ��ʵ�α���
//�β�����������ʱ����Ӧ��ʵ�α����ô���(passed by reference)���ߺ����� �����õ���(called by reference)

int call_reference(int &i)  //ʵ�α����ô���
{
	i += 7;
	return 0;
}

int call_value(int vi)
{
	vi += 7;     //��ֵ���ú����У��ֲ������ı�
	return 0;
}

int main_value()
{
	/*int i = 7, &j = i;    //j��i������(����)
	call_reference(i);    //�����õ��ú���
	cout << i << endl;    //��ӡi ->����Ƿ�ͨ�����øı�
	//���:14*/
	
	//��ʼ��һ�����������͵ı�������ʼֵ��������������ʱ�������Ķ�����Ӱ���ʼֵ
	int n = 0;           //int���͵ĳ�ʼ����
	int i = n;           //i��n�ĸ���
	i = 42;              //i��ֵ�ı�,n��ֵ���ı�
	cout << n << endl;

	//��ֵ�������βε����в�������Ӱ�촫��fact��ʵ��
	call_value(n);
	cout << n << endl;


	system("pause");
	return 0;
}
void reset_p(int *p)
{
	//��������һ��ָ�룬��ָ��λ�� ����0
	*p = 7;             //�ı�ָ��ip��ָ�����ֵ
	p = 0;             //ֻ�ı���ip�ľֲ�������ʵ��δ���ı�
					   //return 0;         //����:void���ͺ������ܷ���ֵ
}

int passed_by_value_621()
{
	//ָ���β�
	int n = 0, i = 42;
	int *p = &n, *q = &i;       //pָ��i,qָ��i
	*p = 42;                    //nͨ��ָ��p��ֵ42,ָ��p����
	p = q;                      //p����ָ��i������i��n��ֵ����


	reset_p(&i);                  //�ı�i��ֵ����i�ĵ�ַ
	cout << "i = " << i << endl;//���
	
	
	//c++�� ����ʹ���������͵��βδ���ָ��
	system("pause");
	return 0;
}

