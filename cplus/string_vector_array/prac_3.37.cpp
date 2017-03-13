#include <iostream>
#include <string>
#include <vector>
#include <iterator>
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;
using std::begin; using std::end;

int prac_337()
{
	const char ca[] = { 'h','e','l','l','o' };
	const char *cp = ca;
	while (*cp) {
		cout << *cp << endl;
		++cp;
	}

	system("pause");
	return 0;
}