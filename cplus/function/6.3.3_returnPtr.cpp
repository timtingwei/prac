#include <iostream>
#include <string>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::string;
using std::vector;


int(*func(int i))[10];

//ʹ��β�÷������� 
//func����һ��intʵ�Σ�����һ��ָ�룬��ָ��ָ����10������������
auto func(int i) -> int(*)[10];

//ʹ��decltype
//�������ص�ָ�뽫ָ���ĸ�����
int odd[] = { 1,3,5,7,9 };
int even[] = { 0,2,4,6,8 };
decltype(odd) *arrPtr(int i)
{
	return (i % 2) ? &odd : &even;     //����һ��ָ�������ָ��
}

int main_returnPtr()
{
	//int arr[10];    //����һ����СΪ10������

	//���ͱ��� �򻯷��������ָ�� 
	typedef int arrT[10];       //arrT��

	using arrT = int[10];
	//arrT* func(int i);
	
	//��������ָ��ĺ��� 
	int arr[10];        //arr��һ������10������������
	//int *p1[10];        //pl��һ������10��ָ�������
	int(*p2)[10] = &arr;//p2��һ��ָ�룬��ָ����10������������
	//����һ����������ָ��ĺ����������ά�ȱ�����ں�����֮��
	//�β��б���ں�����������ά��֮ǰ��
	//Type (*function(parameter_list))[dimension]
	//���������������ָ�룬������ָ������� 




	system("pause");
	return 0;
}