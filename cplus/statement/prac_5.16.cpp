#include <iostream>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::vector;

int prac_516()
{
	//�����Ƚ� forѭ����whileѭ�� 
	vector<int> v = { 0,1,-2,3,4,5 };
	//��ӡ���v�е�ÿ��Ԫ��
	//forѭ��
	for (decltype(v.size()) ix = 0; ix != v.size(); ++ix)
		cout << v[ix] << " ";
	cout << endl;

	//whileѭ��
	auto beg = v.begin();
	while (beg!=v.end()) {
		cout << *beg << " ";
		++beg;
	}
	cout << endl;

	//�ҳ�vector�еĵ�һ������
	//forѭ�� 
	decltype(v.size()) ix = 0;
	for (ix; v[ix] >= 0;++ix){/*ѭ���ڵ�һ����ֵ��ֹͣ*/}
	cout << "The first minus value is:\t"<< v[ix] << endl;

	//whileѭ��
	auto beg1 = v.begin();
	while (beg1 != v.end() && *beg1 >= 0)
		++beg1;                  //while��Ҫ������������ѭ�����ڲ��ı�������������
	cout << "The first minus value is:\t" << (*beg1) << endl;

	//for���д������࣬while����������Ȼ�߼�

	system("pause");
	return 0;
}