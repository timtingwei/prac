#include <iostream>
#include <vector>
#include <string>
#include "Sales_data.h"

using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

int sizeof_operator_49()
{
	//sizeof���������һ�����ʽ��һ������������ռ���ֽ�����
	//�����ҽ���ɣ����õ�ֵ��һ��size_t���͵ĳ������ʽ
	//������ʽ 
	// sizeof (type)
	// sizeof (expr)    ������ʽ��������ʹ�С����sizeof����ʵ�ʼ�������������ֵ��������expr��ֵ

	//���䣺�������ʽ�ĸ��const expression��
	//��ֵָ����ı䲢���ڱ�����̾��ܵõ��������ı��ʽ
	//�ǲ��ǳ������ʽ�� �������� �� ��ʼֵ��ͬ���� ����ʼֵ�ľ���ֵ��������ʱ���ܻ�ȡ����
	const int max_files = 20;          //��
	const int limit = max_files + 1;   //��
	int staff_size = 27;               //����,����staff_size�ĳ�ʼֵ��һ������ֵ��������������������һ����ͨint��������const int
	//const int sz = get_size();         //���ǣ�sz��Ȼ�� ���ͳ�������������ֵ��Ҫ������ʱ����ܻ��

	//constexpr����
	//ʵ��ʹ�ù����У��������ֳ�ʼֵ���ǳ������ʽ�����
	//����Ķ����ʹ�ø���������������
	constexpr int mf = 20;           //20�ǳ������ʽ
	constexpr int limit1 = mf + 1;    //mf+1�ǳ������ʽ
	//constexpr int sz = size();       //ֻ�е�size()һ��constexpr����ʱ����һ����ȷ���

	Sales_data data, *p=0;
	sizeof(Sales_data);     //����Sales_data���͵Ķ�����ռ�ռ�Ĵ�С
	sizeof data;            //data���͵Ĵ�С����sizeof(Sales_data)
	sizeof p;
	sizeof *p;                 //ָ����ռ�ռ�Ĵ�С
	sizeof data.revenue;       //Sales_data��revenue��Ա��Ӧ���͵Ĵ�С
	sizeof(Sales_data::bookNo);//��ȡbookNo��Ա��Ӧ���͵Ĵ�С
	//ֵ�ù�ע����sizeof *p
	//sizeof �� *���ȼ���ͬ�������ҽ���ɣ���˵ȼ��� sizeof(*p)
	//���⣬sizeof ����ʵ������ʽ��ֵ����˽�����һ����ָ�벢���ᷢ�����⣬ʵ��ָ��û�б�����ʹ��.
	//sizeof����Ҫ��Ľ�����ָ��Ҳ��֪������ָ���������

	//c++�±�׼�������� ��ͨ����Ķ���������Ա�Ĵ�С��sizeof��������������ṩһ������Ķ���
	//��֪����ĳ�Ա�Ĵ�С������Ļ�ȡ�ó�Ա��

	//sizeof �������������ֵ����������������ʹ�С
	//��char��������Ϊchar�ı��ʽִ��sizeof���㣬�����1
	char ic = 'a';  
	cout << sizeof ic << endl;  //���1 

	//����������ִ��sizeof����õ������ö�����ռ�ռ�Ĵ�С
	const int &iref = mf;
	cout << sizeof iref << endl;  //���4

	//��ָ��ִ��sizeof����õ�ָ�뱾����ռ�ռ�Ĵ�С
	cout << sizeof p << endl;  //���4

	//�Խ�����ָ��ִ��sizeof����õ�ָ��ָ��Ķ�����ռ�Ŀռ��С��ָ�벻��Ҫ��Ч
	cout << sizeof *p << endl;  //40

	//������ִ��sizeof����õ�����������ռ�ռ�Ĵ�С���ȼ��ڶ������е�����Ԫ��ִ��һ��sizeof���󲢽����ý�����
	//sizeof ���������������ָ��������
	int iarr[5] = { 0,1,2,3,4 };
	cout << sizeof iarr << endl; //20 = 4*5
	//����Ԫ��������ռ�ռ��С
	cout << sizeof (iarr[0]) << endl;  //4
	//����sizeof�ܹ�������ռ�ռ��С�����ԣ����õ�����ĸ���
	int count = sizeof iarr / sizeof(iarr[0]);
	cout << count << endl;   //5��Ԫ��

	//��string�����vector����ִ��sizeof���㣬ֻ���ظ����͹̶����ֵĴ�С�������������е�Ԫ��ռ�ö��ٿռ�
	string is = "h";
	cout << sizeof is << endl; //28 ������֮�ַ���size_t���������
	vector<int> ivec = { 0,1,3 };
	cout << sizeof ivec << endl; //16 ��������size���������

	//����������Ԫ������
	int ia[8] = { 0,1,2,3,4,5,6,7 };
	//sizeof ia / sizeof *ia;  //����ia��Ԫ������
	constexpr size_t sz = sizeof ia / sizeof(*ia);     //*ia������Ԫ��
	int arr2[sz];
	//��Ϊsizeof ���ص���һ���������ʽ���������ǿ�����sizeof�Ľ�����������ά��

	for (auto &i : arr2)
		cout << i << " ";
	cout << endl;      //�����ȫ�ǿ�ֵ

	int i = 1, *pi=0;
	cout << (sizeof(pi)) << endl; //intָ����ռ�Ŀռ��СΪ4

	system("pause");
	return 0;
}