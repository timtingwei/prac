#include <iostream>
using std::cin; using std::cout; using std::endl;

int abs(int val) {
	//����ʵ�εľ���ֵ
	return (val > 0 ? val : -val);
}

int prac_65()
{
	int val = 5;
	cout << abs(val) << endl;

	system("pause");
	return 0;
}