#include <iostream>
using std::cin; using std::cout; using std::endl;


int prac_438()
{
	//˵��������ʽ�ĺ��� 

	int i = 2, j = 3;
	double slope = 2 / 3;
	//int����õ�0,��ֵ��slopeת���� double
	cout << slope << endl;   //0.0

	double slope1 = static_cast<double>(2 / 3);
	cout << slope1 << endl;   //0.0 

	//��int���͵�2ǿ��ת����double���ͣ���int���ʱ��3ת����double���͵õ�double���͵Ľ��
	double slope2 = static_cast<double>(2) / 3;
	cout << slope2 << endl;  //0.6666667
	


	system("pause");
	return 0;

}