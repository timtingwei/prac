#include <iostream>
#include <string>
#include <vector>
#include <iterator>
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;
using std::begin; using std::end;

int prac_335()
{
	//��дһ�γ�������ָ�뽫������Ϊ0
	int arr[] = { 5,4,3,2,1 };
	int *pbeg = arr, *pend = end(arr);
	while (pbeg < pend) {
		*pbeg = 0;
		++pbeg;
	}

	for (auto i : arr)
		cout << i << " ";
	cout << endl;

	system("pause");
	return 0;
}