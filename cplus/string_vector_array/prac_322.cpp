#include <iostream>
#include <string>
#include <iterator>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;
using std::iterator;

int prac_322()
{
	//���Ȱ�text�ĵ�һ��ȫ����Ϊ��д��ʽ��Ȼ�����
	vector<string> text{ string("my name is tim"),
		string("now i'm learning c plus plus"),
		string("well"),
		string(""),
		string("that's all") };
	/*for (auto it = text.cbegin(); (it != text.cend() && !it->empty()); ++it) {
		for (auto &s : *it) {    //��������it�������� vector<string>::const_iterator ����s���ܸı�
			s = toupper(s);
		}
	}
	for (auto i : text)
		cout << i << endl;*/
	for (auto it = text.begin();        //��Ȼʹ��.begin() ���� cbegin()
	it != text.end() && !it->empty(); ++it) {
		for (auto &s : *it)
			s = toupper(s);
		cout << *it << endl;
	}
		

	system("pause");
	return 0;
}