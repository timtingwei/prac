#include <iostream>
//#include <string>
using std::string; using std::cout; using std::endl;

int string01_321()
{
	string s1;                //默认初始值,s1是一个空串
	//string s2 = s1;           //s2是s1的副本 
	string s2(s1);             //等价于string s2 = s1;
	//string s3 = "hiya";       //s3是该字符串字面值的副本
	string s3("hiya");         //等价于 string s3 = "hiya";
	//string s4(10, "c");     //错误：需要用单引号将c引起
	string s4(10, 'c');       //用 string sn(n,'c') 把sn初始化为连续n个字符c组成的串

	//cout << s4 << endl;  cout无法接受std::string类型

	//上面这句话等价于下面两句，但是可读性差 没有任何补偿优势
	string temp(10, 'c');
	string s5 = temp;

	system("pause");
	return 0;
}