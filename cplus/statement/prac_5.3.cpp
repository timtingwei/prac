#include <iostream>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::string;

int prac_53()
{
	//ʹ�ö������������д1.4.1whileѭ����1�ӵ�10,������Ҫ��
	int i = 0, sum = 0;
	while (++i, i <= 10)
		sum += i;
	//����Ŀɶ��Իή��

	cout << sum << endl;
	system("pause");
	return 0;
}