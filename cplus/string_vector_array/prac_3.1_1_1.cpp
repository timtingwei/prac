#include <iostream>
using std::cout; using std::cin; using std::endl;

int prac_3111()
{
	//ʹ��whileѭ����50��100���������
	int i = 50, sum = 0;
	while (i <= 100){
		sum += i;
		++i;
	}
	cout << "Sum of 50 to 100 is " << sum << endl;
	
	system("pause");
	return 0;
}