#include <iostream>
#include <vector>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

int prac_420()
{
	//�Ƿ�Ϸ�������ʲô�����ںδ�
	vector<string> svec = { "hello","world","c++" };
	auto iter = svec.begin();

	
	//                                ����           
	cout << *iter++ << endl;          //��ȷiter++ ����iterԭֵ�ĸ������Ըö�������õõ� "hello"       	
	//cout << (*iter)++ << endl;        //���󣺶�iter�����õõ��ַ���"hello"������ֻ�ܶ�int�ͺ͵�����������
	//cout << *iter.empty() << endl;      //����.��������ȼ�����*���ȷ���iter��empty��Ա����iter��һ��������û��empty��Ա
    cout << iter->empty() << endl;      //��ȷ�����ʵ�����iter��ָ��Ԫ�ص�empty��Ա���õ��Ƿ�Ϊ�յ�boolֵ���൱�� (*iter).empty()
	//cout << ++*iter << endl;            //����ǰ�ú�*��������������У��������ҽ���ɣ��Ƚ�����iter�õ�"hello",++���ܶ��ַ���������
	cout << iter++->empty() << endl;   //��ȷ��iter++��Ϊ->���������,������Ϊԭiter�ĸ�����iter������ǰ��һλ��->��ʾ���ʵ�ǰ��������ָ��Ԫ�ص�empty��Ա���ó�Ա�õ���ֵ����Ϊbool,��ʾ�Ƿ�Ϊ��


	/*//���� ��������� ����Щ���������� 
	int ival = 1; double dval = 1; bool bval = false; 
	string sval = "c++";
	vector<int> ivec = { 1,2,3 };
	vector<string> svec1 = { "hello","world","c++" };

	cout << ival++ << dval++ << bval++ << endl;
	//cout << sval++ << endl;     //string����  δ����� ������ɽ��ܵ�����ת��*/


	system("pause");
	return 0;
}