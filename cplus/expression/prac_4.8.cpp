#include <iostream>
using std::cin; using std::cout; using std::endl;


int prac_48()
{
	//while�ӱ�׼ѭ���ж�������������42ֹͣ
	int i;
	while (cin >> i && i != 42)              //��Ҫ��׼���i,���Ϊ��󣬲��ܶ��ұ߽����ж�
	//while (i!=42 && cin>>i)              //����
		cout << endl;
	//�������ȼ��ͽ���ɣ�>> && !=

	return 0;

}