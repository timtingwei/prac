#include <iostream>
using std::cin; using std::cout; using std::endl;

int myFact()
{
	static int i = 3;
	i *= 2;
	return i++;
}