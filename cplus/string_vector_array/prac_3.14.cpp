#include <iostream>
#include <vector>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::string; using std::vector;

int prac_314()
{
	//用cin读入一组整数，并存入vector对象
	int number;
	vector<int> numberList;
	while (cin >> number)
		numberList.push_back(number);

	system("pause");
	return 0;
}