#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <cstring>   //�����ڲ���C����ַ���
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;
using std::begin; using std::end;
using std::strcat; using std::strcpy; using std::strlen;
using std::cend;

int cstring02_355()
{
	//����ʹ���ܹ��ַ�������ֵ����ʼ��string����
	string s("Hello,world!");   
	//������string����ֱ�ӳ�ʼ�� ָ���ַ���ָ��
	//char *str = s;    //���󣺲�����string�����ʼ��char*
	const char *str = s.c_str();   // c_str��Ա���� ���ص���C�����ַ���

	//ʹ�������ʼ��vector
	//���������������� vector ����ʼ�� ���飬���Ƿ�����ȴ�ǿ��Ե�
	int int_arr[] = { 0, 1, 2, 3, 4, 5 };
	vector<int> ivec(begin(int_arr), end(int_arr));  //ֻ��Ҫָ����Ԫ�غ�βԪ�ص�λ�� ������������ָ��

	//��������Ԫ��  int_arr[1],int_arr[2],int_arr[3]
	vector<int> subVec(int_arr + 1, int_arr + 4);   //�ڶ�������ֱ��βԪ�ص���һλ��
	for (auto i : subVec)
		cout << i << " ";
	cout << endl;
	
	vector<int> subVec1(int_arr + 2, end(int_arr));
	for (auto i : subVec1)
		cout << i << " ";
	cout << endl;



	//С����:�ִ�c++Ӧ�þ���ʹ�� vector�͵�����������ʹ�����������ָ�룻����ʹ��string������ʹ��C���Ļ���������ַ���


	system("pause");
	return 0;
}