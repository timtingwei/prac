#include <iostream>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::string;

int prac_436()
{
	int i = 1;
	double d = 2.2;
	//i*=dʹ��ִ���������ͳ˷� �����Ǹ��� 
	//i *= d;  //����˷�,���Ƿ��ص������� int����
	i *= static_cast<int>(d);

	cout << i << endl;

	system("pause");
	return 0;


}