#include <iostream>

using std::cin; using std::cout; using std::endl;

int prac_47()
{
	//��������ĺ��壬���ֵ�������ı��ʽ 
	//short����ռ16λ�����ֵ�� 2**(16-1) - 1 = 32767
	const int i = 2;
	short is = 32767;
	cout << ++is << endl;     //is : -32768

	bool b1 = true;
	++b1;                  //û��������Ծɱ�ת����1
	cout << ++b1 << endl;

	//char mc = '123' * 127;
	//cout << mc << endl;

	int ival = 32767000;
	cout << ++ival << endl;

	system("pause");
	return 0;
}