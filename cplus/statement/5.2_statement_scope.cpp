#include <iostream>
#include <string>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::string; using std::vector;

int statement_scope_52()
{
	//��if,switch,while,for���Ŀ��ƽṹ�ж��������
	//�����ڿ��ƽṹ�еı���ֻ����Ӧ����пɼ���һ���������������ͳ��������÷�Χ��
	//while (int i = 5)   //ÿ�ε���ʱ�򴴽�����ʼ��i
		//cout << i << endl;
	//i = 0;    //����:��ѭ���ⲿ i��δ�����ı�ʶ

	//�����������Ҳ��Ҫ���ʿ��Ʊ������������붨��������ⲿ
	//Ѱ�ҵ�һ����ֵ
	vector<int> v = { 0,9,8,-5,3,1 };
	auto beg = v.begin();   //��ѭ���ⲿ����������ⲿ    //�����Ͷ���Ĳ��??
	//vector������ϻ�begָ��ֵ���˳�ѭ��
	while ((beg != v.end()) && (*beg >= 0)) {
		++beg;
	}
	if (beg == v.end())
		cout << "there is no minus value in vector" << endl;
	else
		cout << "the first minus is " << *beg << endl;

	system("pause");
	return 0;


}