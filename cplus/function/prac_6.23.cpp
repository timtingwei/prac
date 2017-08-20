#include <iostream>
#include <string>
#include <iterator>
using std::cin; using std::cout; using std::endl;
using std::string;
using std::begin; using std::end;

void myPrint_1(const int &i)
{
	cout << i << endl;
}

void myPrint2_1(const int *arr, size_t size)
{
	for (size_t ix = 0; ix != size; ++ix)
		cout << arr[ix] << endl;
}

void myPrint2_2(const int *beg, const int *end)
{
	while (beg != end) {
		cout << *beg++ << endl;
	}
}

int main_myPrint()
{
	//调用每个函数使其输入下面定义的i和j 
	int i = 0, j[2] = { 0,1 };
	myPrint_1(i);
	myPrint2_1(j, end(j) - begin(j));
	myPrint2_2(begin(j), end(j));

	system("pause");
	return 0;
}