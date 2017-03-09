#include <iostream>

int prac_236()
{
	int a = 3, b = 4;
	decltype (a) c = a;
	decltype ((b)) d = a;  //这里((b))的作用只是说明d的类型是int&，并不是d和b绑定，而是 int &d = a,d和a绑定
	++c;
	++d;
	std::cout << a << " " << b << " " << c << " " << d << std::endl;  // 4 4 4 4

	system("pause");
	return 0;
}