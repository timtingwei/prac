#include <iostream>
int right_comment()
{
	//std::cout << "/*";          it's right 
	//std::cout << "*/";          it's right
	//std::cout << /* "*/" */;      it's wrong
	//std::cout << /* "*/" /* "/*" */;      it's right    /*
	system("pause");
	return 0;
}