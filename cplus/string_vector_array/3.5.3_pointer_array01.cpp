#include <iostream>
#include <string>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

int pointer_array01_353()
{
	//c++�У�ʹ�������ʱ�򣬱����������ת����ָ��
	//ȡ��ַ���ţ�����ȡ�κζ�������Ԫ��Ҳ�Ƕ���
	string nums[] = { "one","two","three" };
	string *p = &nums[0];     //ָ��pָ��num�ĵ�һ��Ԫ��

	//���������ԣ��ںܶ��õ��������ֵĵط��������������Զ��ؽ����滻Ϊһ��ָ��������Ԫ�ص�ָ��
	string *p2 = nums;   //�ȼ� string *p = &nums[0]

	//�ڴ�������ʽ�У�ʹ�����������ʵ��ʹ��һ��ָ���������Ԫ�ص�ָ��

	//��ʹ��������Ϊһ��auto�����ĳ�ʼֵʱ���ƶϵõ�����ָ���������
	int ia[] = { 0,1,2,3,4,5,6,7,8,9 };
	auto ia2(ia);          //auto ia2(&ia[0])ʵ�ʱ�����ִ��
	//ia2 = 42;    //ia2��һ��ָ��
	*ia2 = 42;
	for (auto i : ia)
		cout << i << " ";
	cout << endl;

	//decltype�ؼ���ʱ�򣬲��ᷢ�� auto ia2(ia)  --> auto ia2(&ia[0])������ת��
	int i = 9;
	decltype(ia) ia3 = { 0,1,2,3,4,5,6,7,8,9 };
	//ia3 = p;   //����:ia3��һ������,���ܸ�ֵָ��
	ia3[4] = i;


	system("pause");
	return 0;
}