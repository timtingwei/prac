#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>
#include <exception>
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;
using std::runtime_error;
using std::overflow_error;
using std::exception;

int stdexception_563()
{
	int i = 5;
	try {
		int i = 2;
	}
	catch (runtime_error err) {
		cout << err.what() << endl;
	}
	//²»¶®


	system("pause");
	return 0;
}