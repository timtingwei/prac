#include <iostream>
#include <vector>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::string; using std::vector;

int prac_314()
{
	//��cin����һ��������������vector����
	int number;
	vector<int> numberList;
	while (cin >> number)
		numberList.push_back(number);

	system("pause");
	return 0;
}