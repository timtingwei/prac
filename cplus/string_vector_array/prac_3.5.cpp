#include <iostream>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::string;

int prac_35()
{
	//�ӱ�׼����������ַ�������������������һ��������ӳɵĴ��ַ���
	string lastStr, currStr;
	
	/*cin >> currStr;
	lastStr += currStr;
	cout << lastStr << endl;
	system("pause");
	return 0;*/

	while (cin >> currStr){
		lastStr += currStr + " ";
		cout << lastStr << endl;
	}
	system("pause");
	return 0;

}