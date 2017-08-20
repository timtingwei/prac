#include<iostream>
#include<string>
#include<vector>
#include"cassert"
using std::begin; using std::endl;
using std::cin; using std::cout; using std::endl;
using std::string;
using std::vector;
 
int main_prac648()
{
	//下面循环的含义，对assert的使用合理吗?
	string s;
	string sought = "tim";
	while (cin >> s && s != sought) {
		cout << s << endl;
	}
	assert(cin);  //不合理，assert用于cin为false时，终止程序。

	system("pause");
	return 0;
}