#include <iostream>

//using可以放在单行上，也可以放在多行上，每个语句都要有自己的声明，都要以;结尾
//using std::cin;
//using std::cout; using std::endl;
using std::cin; using std::cout; using std::endl;    //正确，注意声明和分号

int using02()
{
	cout << "Enter Two numbers:" << endl;    //endl说明这个语句要换行
	int v1, v2;
	cin >> v1 >> v2;
	cout << " The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << endl;
	
	system("pause");
	return 0;

}