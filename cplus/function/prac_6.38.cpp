#include <iostream>
#include <string>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::string;
using std::vector;

int odd1[] = { 1,3,5,7,9 };
int even1[] = { 0,2,4,6,8 };
decltype(odd1) &arrPtr638(int i)
{
	return (i % 2) ? odd1 : even1;
}

int main_arrPtr638()
{
	int i = 5;
	arrPtr638(i);

	system("pause");
	return 0;
}