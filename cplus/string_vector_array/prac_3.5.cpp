#include <iostream>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::string;

int prac_35()
{
	//从标准输入读入多个字符串，并把它们连接在一起，输出连接成的大字符串
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