#include <iostream>
#include <vector>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

int prac_413()
{
	int i; double d;
	d = i = 3.5;   //i:3  d:3
	cout << " " << d << " " << i << endl;
	i = d = 3.5;   //d:3.5 i:3
	cout << " " << d << " " << i << endl;

	system("pause");
	return 0;
}