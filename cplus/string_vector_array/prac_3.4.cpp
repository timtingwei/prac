#include <iostream>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::string;

int prac_34()
{
	/*
	//���������ַ������Ƚ����Ƿ���Ȳ����������������ȣ�����ϴ���Ǹ��ַ���
	string str1, str2;
	cin >> str1 >> str2;
	if (str1 == str2)
		cout << "str1 = str2 = " << str1 << endl;
	else{
		//���߲���ȣ�����ϴ���ַ���
		if (str1 > str2)
			cout << "longer is " << str1 << endl;
		else
			cout << "longer is " << str2 << endl;
	}
	*/
	//��д�������򣬱Ƚ��Ƿ�ȳ������ȳ�����ϳ����Ǹ��ַ���
	string str1, str2;
	cin >> str1 >> str2;
	if (str1.size() == str2.size())
		cout << "str1.size() = str2.size() = " << str1.size() << endl;
	else{
		//���߲���ȣ�����ϴ���ַ���
		if (str1.size() > str2.size())
			cout << "biger size is " << str1 << " size = " << str1.size() << endl;
		else
			cout << "biger size is " << str2 << " size = " << str2.size() << endl;
	}
	system("pause");
	return 0;
}