#include <iostream>
#include <string>
#include <iterator>
using std::cin; using std::cout; using std::endl;
using std::string;
using std::begin; using std::end;

void print_624(const int ia[10])
{
	for (size_t i = 0; i != 10; ++i)
		cout << ia[i] << endl;
	//如果ia对应的实参的数组大小不等于10，那么会产生未定义
}

void print_revise_624(const int *ia, size_t size)
{
	for (size_t i = 0; i != size; ++i)
		cout << ia[i] << endl;
}

int main_print_624()
{
	int arr[8] = { 0,1,2,3,4,5,6,7 };
	print_624(arr);

	size_t size = end(arr) - begin(arr);
	print_revise_624(arr, size);

	system("pause");
	return 0;
}