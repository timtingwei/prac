#include <iostream>
#include <stdexcept>

using std::cin; using std::cout; using std::endl;
using std::runtime_error;

int main()
{
	//�ӱ�׼�����ȡ���������������һ�������Եڶ������Ľ��
	int ival1, ival2;
	cout << "Please enter two numbers: " << endl;
	cin >> ival1 >> ival2;
	try {
		cout << "ival1 divide ival2 equal: " << ival1 / ival2 << endl;
	}
	catch (runtime_error err) {
		cout << err.what() << endl;
	}
	

	system("pause");
	return 0;
}
