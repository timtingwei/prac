#include <iostream>

int name_scope() //main�ں�����֮�� ӵ�� ȫ��������(global scope)
{
	int sum = 0;  //sum����main�����Ͳ��ܷ���  ��������(block scope)
	for (int val = 1; val <= 10; ++val)
		sum += val;
	std::cout << "Sum of 1 to 10 inclusive is" << sum << std::endl;
	system("pause");
	return 0;
}
//�����Ķ���������һ�α�ʹ�õĵط��ӽ�ʱ������Ҳ�ḳ����һ���ȽϺ���ĳ�ʼֵ����������