#include <iostream>
#include <string>
#include <iterator>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;
using std::iterator;

int array01_35()
{
	/*//������һ�ָ������� a[d]
	//a���������֣�d������ά�ȡ�ά��˵��������Ԫ�ظ������������0������һ���������ʽ
	unsigned cnt = 42;            //���ǳ������ʽ
	constexpr unsigned sz = 42;   //�������ʽ
	int arr[10];                  //����10������������
	int *parr[sz];                 //����42������ָ�������
	//string bad[cnt];              //����cnt���ǳ������ʽ
	//string strs[get_size()];       //get_size()��constexprʱ��ȷ*/

	/*//��ʾ��ʼ������Ԫ��
	//����û��ָ��ά�ȣ����ݳ�ʼֵ�������㣻�����ά�ȣ���ʼֵ���ܴ���ά�ȣ�����ʼֵС��ά�ȣ�ʣ�µ�Ԫ�ر���ʼ����Ĭ��ֵ 
	const unsigned sz = 3; 
	int ia1[sz] = { 0, 1, 2 };   //3��Ԫ�ص�����
	int a2[] = { 0, 1, 2 };      //ά����3������ 
	int a3[5] = { 0, 1, 2 };     //{0,1,2,0,0}
	string a4[3] = { "hi", "bye" };  //{"hi","bye",""}
	//int a5[2] = { 0, 1, 2 };     //���󣺳�ʼֵ�������ܴ���ά��

	//�ַ������������
	char a1[] = { 'C','+','+' };    //�б��ʼ����û�п��ַ�
	char a2[] = { 'C','+','+','\0' };  //������ʾ�Ŀ��ַ�
	char a3[] = "C++";                  //�Զ���ӱ�ʾ�ַ��������Ŀ��ַ�
	const char a4[6] = "Daniel";        //���ַ�������7��ά�� > 6 ;*/

	//���������͸�ֵ
	int a[] = { 0,1,2 };
	//int a2[] = a;         //���󣺲�����ʹ��һ������ȥ��ʼ������һ������
	//a2 = a;                 //���󣺲��ܰ�һ������ֱ�Ӹ�ֵ������һ������

	//��⸴�ӵ���������
	//int arr = 1;
	//int *ptrs[10];              //10������ָ�������
	//int &refs[10] = /* ?*/;   //���󣺲��������õ�����
	//int (*Parray)[10] = &arr;    //
	//int(&arrRef)[10] = arr;

	return 0;

}
