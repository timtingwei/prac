#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <cstring>   //�����ڲ���C����ַ���
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;
using std::begin; using std::end;

int prac_339()
{
	//�Ƚ�����string����
	string is1 = "hello";
	string is2 = "hello";
	//�Ƚ�string����ĳ����Ƿ����
	if (is1.size() != is2.size())
		cout << "is1 != is2" << endl;
	else {
		for (decltype(is1.size()) ix = 0; ix != is1.size(); ++ix) {
			if (is1[ix] != is2[ix]) {
				cout << "is1 != is2" << endl;
				return -1;//��ʾʧ��
			}
		}
		cout << "is1 == is2 " << endl;
	}

	//�Ƚ�����C����ַ���������
	//char stra1[] = { 'h','e','l','l','o','\0' };
	//char stra2[] = { 'h','e','l','l','o',',','w','o','r','l','d','\0' };
	const char stra1[] = "hello";
	const char stra2[] = "hello,world";
	cout << strlen(stra1) << endl;  //��stra1û���Կ��ַ�����ʱ��������ش���
	//�Ƚ�C����ַ����ĳ���
	if (stra1 > stra2) { cout << *stra1 << endl; }    //��ʱ�Ƚϵ���������ַ
	if (strcmp(stra1, stra2) != 0)
		cout << "stra1 != stra2" << endl;
	else {
		for (auto ix = strlen(stra1); ix != strlen(stra1); ++ix) {
			if (stra1[ix] != stra2[ix])
				cout << "stra1 != stra2" << endl;
		}
		cout << "stra1 == stra2" << endl;
	}

	
	system("pause");
	return 0;
}