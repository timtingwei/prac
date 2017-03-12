#include <iostream>
#include <string>
#include <iterator>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;
using std::iterator;

int iterator03_342()
{
	//迭代器完成二分搜索

    //text必须是有序的
	vector<int> text{ 1,8,4,5,7,2,10,3 };
	int sought = 1;
	//beg和end表示我们搜索的范围
	auto beg = text.begin(), end = text.end();
	auto mid = beg + text.size() / 2;
	while (mid != end && *mid != sought) {
		if (sought < *mid)
			end = mid;
		else
			beg = mid + 1;
		mid = beg + (end - beg) / 2;
	}
	cout << *mid << endl;

	system("pause");
	return 0;
}