#include <iostream>
#include <vector>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

int prac_428()
{
	//���ÿһ������������ռ�Ŀռ��С
	//�������� char,int,long,float,double,long long, //string����
	//���� bool,wchar_t,char16_t,char32_t,short,long double
	char c1 = 's';     //char�Ĵ�С��Ϊ1
	cout << sizeof c1 << endl;

	int i1 = 522222;   //int������ռ�ռ��СΪ4
	cout << sizeof i1 << endl;

	long l1 = 223222;  //long������ռ�Ŀռ��СΪ4
	cout << sizeof l1 << endl;

	float f1 = 22.3321;  //flaot������ռ�ռ��СΪ4
	cout << sizeof f1 << endl;

	double d1 = 22.111111;  //double������ռ�Ŀռ��СΪ8
	cout << sizeof d1 << endl;

	long long l2 = 11123111;  //long long ������ռ�ռ�Ϊ8
	cout << sizeof l2 << endl;

	/*string s1 = "helloworld";   //stringӦ�ò�����������
	cout << sizeof s1 << endl;  //�̶�ֵ28*/
	//���� bool,wchar_t,char16_t,char32_t,short,long double
	bool b1 = true;   //bool������ռ�ռ�Ϊ1
	cout << sizeof b1 << endl;

	wchar_t wct = 'b';  //wchar_t��ռ�ռ��СΪ2
	cout << sizeof wct << endl;

	char16_t c16 = 'a'; //char16_t��ռ�ռ�2
	cout << sizeof c16 << endl;

	char32_t c32 = 'a';  //char32_t��ռ�ռ�4
	cout << sizeof c32 << endl;

	short sh1 = 11;   //short ��ռ�ռ��С2
	cout << sizeof sh1 << endl;

	long double ld = 1;  //long double ��ռ�ռ�Ϊ8
	cout << sizeof ld << endl;


	system("pause");
	return 0;
}