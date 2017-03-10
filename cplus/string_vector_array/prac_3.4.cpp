#include <iostream>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::string;

int prac_34()
{
	/*
	//输入两个字符串，比较其是否相等并输出结果，如果不相等，输出较大的那个字符串
	string str1, str2;
	cin >> str1 >> str2;
	if (str1 == str2)
		cout << "str1 = str2 = " << str1 << endl;
	else{
		//两者不相等，输出较大的字符串
		if (str1 > str2)
			cout << "longer is " << str1 << endl;
		else
			cout << "longer is " << str2 << endl;
	}
	*/
	//改写上述程序，比较是否等长，不等长输出较长的那个字符串
	string str1, str2;
	cin >> str1 >> str2;
	if (str1.size() == str2.size())
		cout << "str1.size() = str2.size() = " << str1.size() << endl;
	else{
		//两者不相等，输出较大的字符串
		if (str1.size() > str2.size())
			cout << "biger size is " << str1 << " size = " << str1.size() << endl;
		else
			cout << "biger size is " << str2 << " size = " << str2.size() << endl;
	}
	system("pause");
	return 0;
}