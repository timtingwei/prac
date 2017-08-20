#include <iostream>
#include <string>
#include <iterator>
using std::cin; using std::cout; using std::endl;
using std::string;
using std::begin; using std::end;





int main_625(int argc, char *argv[])
{
	argv[0] = "prog";    //或者 argv[0]也可以指向一个空字符串
	argv[1] = "-d";
	argv[2] = "-o";
	argv[3] = "ofile";
	argv[4] = "data0";
	argv[5] = 0;
	return 0;
}
