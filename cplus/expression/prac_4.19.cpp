#include <iostream>
#include <vector>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

int prac_419()
{
	int ival=0, i;
	int *ptr = &i;
	vector<int> vec = { 0,1,2,3 };
	//���б��ʽ ʲô���壬�Ƿ���ȷ������޸�
	cout << (ptr != 0 && *ptr++) << endl;  
	//cout << (bool (*ptr)) << endl;
	// && �����������󣬵õ�boolֵ true,�������Ҳ�����boolֵ����*ptr��ֵ��Ϊ0����Ϊtrue������false

	//cout << (ival++ && ival) << endl;
	cout << ival++ << ival << endl;    // 0 1
	//������ң�ival++����ֵ��ԭ����ĸ�������ֵ��Ϊ0,��һ�����Ϊtrue


	ival = 0; //��ʼ��
	//vec[ival++] <= vec[ival];    //�ȼ���vec[ival] <= vec[ival + 1];  �ط� true
	cout << vec[ival++] << vec[ival] << endl;
	
	

	system("pause");
	return 0;



}