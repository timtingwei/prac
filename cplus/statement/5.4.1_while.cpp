#include <iostream>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::vector;

int while_541()
{
	//whiel for �ȼ��������ִ��ѭ����, do while��ִ��ѭ����
	//condition���֣�������һ�����ʽ��Ҳ�����Ǵ���ʼ���ı�������
	//�����������ѭ����Ӧ���跨�ı���ʽ��ֵ
	//������while�������ֻ���while���ڵı�����ÿ�ε����������Ӵ��������ٵĹ���

	//ʹ��whileѭ�� 
	vector<int> ivec;
	int x;
	while ((cin >> x) && (x != '`'))
		//��vector�����Ԫ��
		ivec.push_back(x);
	//Ѱ�ҵ�һ����Ԫ��
	auto beg = ivec.begin();
	while (beg != ivec.end() && *beg > 0)
		++beg;
	if (beg == ivec.end())
		;//����vector��û�и�ֵ
	else
		cout << "The first minus value is:\t" << *beg << endl;

	system("pause");
	return 0;

}