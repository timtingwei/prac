#include <iostream>
using std::cin; using std::cout; using std::endl;

int call_back()
{
	//��һ�α�����ʱ�򷵻�0���Ժ�ÿ�ε��÷���ֵ��1
	static int i = 10;
	return i++;
}

int prac_67()
{
	for (int i = 0; i != 10; ++i)    //ѭ�����ú���
		cout << call_back() << endl;

	system("pause");
	return 0;
}