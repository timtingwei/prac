#include <iostream>
using std::cin; using std::cout; using std::endl;

int prac_411()
{
	//���� abcd��ϵ��ȷ��a>b,b>c,c>d
	int a(3), b(2), c(1), d(0);
	bool t = a > b && b > c && c > d ? true : false;
	cout << t << endl;

	system("pause");
	return 0;
}