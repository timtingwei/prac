#include <iostream>
#include <vector>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

int comma_operator_410()
{
	//���������
	//��������������󣬰��մ������ҵ�˳��������ֵ
	//��������������ȶ����ı��ʽ��ֵ��Ȼ����ֵ�����������
	//��������������Ľ�����Ҳ���ʽ��ֵ������Ҳ������������ֵ����ô���յ���ֵ���Ҳ����ֵ��

	//�������������������for�����
	vector<int> ivec = { 0,1,2,3 };
	vector<int>::size_type cnt = ivec.size();
	//���Ѵ�size��1��ֵ����ivec��Ԫ��
	for (vector<int>::size_type ix = 0; ix != ivec.size(); ++ix, --cnt)
		ivec[ix] = cnt;
	for (auto i : ivec)
		cout << i << " ";  //4 3 2 1
	cout << endl;

	int i = 1, j = 5;
	auto k = (++i, ++j);   //���صĽ�����Ҳ���ʽ��ֵ������Ҳ���ʽ����ֵ���������ֵ��
	cout << k << endl; //���6

	system("pause");
	return 0;
}
