#include <iostream>
#include <vector>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::string; using std::vector;

int vector02_332()
{
	//��vector���������Ԫ��

	vector<int> v1;
	for (int i = 0; i < 100; ++i){
		v1.push_back(i);
	}
	//ѭ��������v2��100��Ԫ�أ�ֵ��0��99
	//cout << v2 << endl;
	
	//�ӱ�׼������뵥�ʣ�������Ϊvector�����Ԫ�ش���
	string word;
	vector<string> text;
	while (cin >> word){
		text.push_back(word);
	}


	//��Χfor������ڲ�Ӧ�ı������������еĴ�С


	system("pause");
	return 0;
}