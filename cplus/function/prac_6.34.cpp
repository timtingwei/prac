#include <iostream>
#include <string>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::string;
using std::vector;

int factorial_634(int val)
{
	//ֹͣ�����ı�󣬷���ʲô���
	if (val != 0) 
		return factorial_634(val - 1) *val;
	return 1;
	//�����һ������
}

int factorial_val1(int val)
{
	//����val--������ʲô���
	if (val > 1 )
		return factorial_val1(val--) *val;
	return 1;
	
}

int main_factorial_val1()
{
	cout << factorial_634(5) << endl;
	cout << factorial_val1(5) << endl;
	system("pause");
	return 0; 
}