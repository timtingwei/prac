#include <iostream>
#include <vector>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

int pp_operator_45()
{
	//�����͵ݼ������ 
	//�ܶ��������֧���������㣬�õ����͵ݼ������������д����⻹�Ǳ����
	//ǰ�� ���� ���� 
	//ǰ�� ++i�� ��ֵ����+1���ı��Ľ����Ϊ��ֵ���  
	//���� i++�� ��ֵ����+1����ֵ����� �������ı�ǰ�ĸ���
	int i = 0, j;
	j = ++i;    //i=1,j=1
	cout <<i << " "<<j << endl;
	i = 0; j = 0;
	j = i++;    //i=1,j=0    //j�ĸ�ֵ������ i�ı�ǰ�ĸ���
	cout << i << " " << j << endl;
	//���������������������ֵ����
	//ǰ�ð汾������ ������Ϊ��ֵ����
	//���ð汾������ ԭʼֵ�ĸ�����Ϊ��ֵ����

	//�����ú͵�������� 
	//���ð汾���Խ�����+1 ������ԭ����ֵ
	vector<int> ivec = { 0,2,3,-4,2,3 };
	auto pbeg = ivec.begin();
	while (pbeg != ivec.end() && *pbeg >= 0)
		cout << *pbeg++ << endl;
	// *pbeg++ ���÷� �ձ�
	// ����* �� ++ �����ȼ��ǲ��е�,�ҽ���� ++��Ϊ���ú�ǰ��
	//��ȷ�� * �� ����++�����ȼ���++����
	//pbeg++  ʹ��ָ��ǰ�ƶ������Ƿ�����ȷʵԭ����ָ��
	//* �����õ����������ԭ����ָ��
	//����Ľ�� ���� ������ԭ����ָ�룬ָ��ǰ��һλ

	/*cout << *iter << endl;
	++iter;*/

	/*cout << *iter++ << endl;*/    //д����࣬���׳���

	//�������ֵ˳��
	string s = "hello world";
	for (auto it = s.begin(); it != s.end() && !isspace(*it); ++it)
		*it = toupper(*it); 

	//for (auto i : s)
		//cout << i;
	//cout << endl;
	
	/*//����ѭ����δ�����
	auto it = s.begin();
	while (it!=s.end() && !isspace(*it))
		*it = toupper(*it++);
	//��ֵ������������߶��õ���it�����Ҳ��������ı���it��ֵ�����Ը�ֵ�����δ�����
	*it = toupper(*it);         //�����������ֵ
	*(it + 1) = toupper(*it);    //�����Ҳ��ֵ
	//������������������ǲ�ȷ����*/

	for (auto i : s)
		cout << i;
	cout << endl;


	system("pause");
	return 0;
}