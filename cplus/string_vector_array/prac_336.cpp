#include <iostream>
#include <string>
#include <vector>
#include <iterator>
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;
using std::begin; using std::end;

int prac_336()
{
	//比较两个数组是否相等
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 1,2,3,4,5 };
	int arr3[] = { 5,4,3,2,1 };
	//if (*arr1 == *arr2)
		//cout << arr1 <<"   " << arr2<< endl;
	int *pbeg1 = arr1, *pend1 = end(arr1);
	int *pbeg2 = arr2, *pend2 = end(arr2);
	//数列的长度不同数列不相等
	if ((pend1 - pbeg1) != (pend2 - pbeg2)) {
		cout << "arr1 != arr2" << endl;
		return 0;
	}
	//数列长度相同，比较每个元素是否相同
	else {
		//数列检测完成 循环结束
		while (pbeg1 < pend1) {
			if (*pbeg1 != *pbeg2) {
				cout << "arr1 != arr2" << endl;
				return 0;
			}
			++pbeg1, ++pbeg2;
		}
		cout << "arr1 == arr2" << endl;
	}


	//比较两个vector是否相等
	vector<int> ivec1(3, 4);
	vector<int> ivec2(3, 5);
	//检测两个vector容量是否相同
	if (ivec1.size() != ivec2.size()) {
		cout << "ivec1 != ivec2" << endl;
		system("pause");
		return 0;
	}
	//容量相同
	else {
		//检测每个元素是否相同
		for (decltype(ivec1.size()) ix = 0; ix != ivec1.size(); ++ix) {
			if (ivec1[ix] != ivec2[ix]) {
				cout << "ivec1 != ivec2" << endl;
				system("pause");
				return 0;
			}
		}
		cout << "ivec1 == ivec2" << endl;
	}

	system("pause");
	return 0;

}