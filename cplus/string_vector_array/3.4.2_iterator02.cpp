#include <iostream>
#include <string>
#include <iterator>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;
using std::iterator;

int iterator02_342()
{
	//����������

	//vector �� string֧�ֵ���������  ����ÿ�ο�����Ԫ�أ�Ҳ֧�ֵ��������й�ϵ����
	
	//����������
	vector<int> vi{1,2,3,4,5};
	auto mid = vi.begin() + vi.size() / 2;    //mid��������vector<int>::iterator 
	cout << *mid << endl;                     //�����õõ�mid��ָ���Ԫ��

	//��ϵ����
	auto it = vi.begin();
	if (it < mid)
		cout << "first half iterator" << endl;  //����viǰ�벿�ֵ�Ԫ��
	else
		cout << "last half is dealing with" << endl;   //����vi��벿�ֵ�Ԫ��
	
	//����������ָ��ͬһ�����е�Ԫ�ػ���βԪ�ص���һλ��,�������
	auto it2 = vi.end();
	auto di = it2 - it;
	cout << "the difference between two iterator is " << di << endl;    //5
	//����ָ���� �Ҳ�ĵ�������ǰ�ƶ�����λ�þ���׷����������
	//�������� difference_type�Ĵ���������


	system("pause");
	return 0;
}