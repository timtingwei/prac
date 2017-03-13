#include <iostream>
#include <string>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

int prac_330()
{
	//´úÂëË÷Òı´íÎó
	constexpr size_t array_size = 10;
	int ia[array_size];
	for (size_t ix = 1; ix <= array_size-1; ++ix)
		ia[ix] = ix;
	for (auto i : ia)
		cout << i << " ";
	cout << endl;

	system("pause");
	return 0;
}