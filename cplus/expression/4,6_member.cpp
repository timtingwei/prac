#include <iostream>
#include <vector>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

int member_46()
{
	//��Ա��������� 
	// ptr->mem  �ȼ���  (*ptr).mem
	//����ָ����ֵ����ĳ�Ա
	string s = "some thing";
	auto *ptr = &s;
	auto n = s.size();
	auto n1 = (*ptr).size();
	auto n2 = ptr->size();
	cout << n << n1 << n2 << endl;

	//������*�����ȼ�����.�������
	//n = *ptr.size();   //����ptr��ָ�� û��size��Ա

	//��ͷ�����������һ��ָ���������󣬽����һ����ֵ��
	//��������ֳ����������
	//�����Ա�����Ķ�������ֵ���ǽ������ֵ����������ֵ���ǽ������ֵ;


	system("pause");
	return 0;

}