#include <iostream>
#include <vector>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;


int range_for_statement_543()
{
	//��Χfor��� 
	/*
	for (declaration:expression)
	    statement
	*/
	//expression������һ������:�����ų�ʼֵ�б����飬vector,string�����Ͷ��󣬹�ͬ�ص㶼���ܷ��ص�������begin��end��Ա
	//�ö�������� �滻 auto 
	for (int i : { 0,1,2,3,4,5 })
		cout << i << " ";
	cout << endl;
	
	int iarr[6] = { 0,1,2,3,4,5 };
	for (int i : iarr)   //iarr�Ƿ���ָ���һ��Ԫ�ص�ָ��  û�� �����������ȷ��
		cout << i << " ";
	cout << endl;

	vector<int> ivec = { 0,1,2,3 };
	for (int i : ivec)
		cout << i << " ";
	cout << endl;

	string s = "abccd";
	for (char i : s)
		cout << i << " ";
	cout << endl;
	//forѭ����ʵ��
	for (auto beg = ivec.begin(), end = ivec.end(); beg != end; ++beg)
		cout << *beg << " ";
	cout << endl;

	//��vector�����е�Ԫ�ض�����
	vector<int> v = { 0,1,2,3,4,5,6,7,8,9 };
	for (auto &r : v)  //��v�е�ÿһ��Ԫ��
		r *= 2;        //��v�е�ÿ��Ԫ�ض�����
	//�뷶Χfor�ȼ۵Ĵ�ͳfor
	for (auto beg = v.begin(), end = v.end(); beg != end; ++beg) {
		auto &r = beg;     //����ָ�뻹������ָ��ָ���Ԫ�أ����ǿ��Ե�
		(*r) *= 2;         //��beg��ָ���Ԫ�ط���
	}
	for (auto i : v)
		cout << i << " ";
	cout << endl;
		
	//����ͨ����Χfor�������vector�����Ԫ�ء��ڷ�Χfor����У�Ԥ����end()��ֵ��һ��Ԫ�������ı䣬end������ֵ�Ϳ��ܱ����Ч




	system("pause");
	return 0;


}