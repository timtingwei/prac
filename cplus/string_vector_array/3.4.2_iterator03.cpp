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
	//��������ɶ�������

    //text�����������
	vector<int> text{ 1,8,4,5,7,2,10,3 };
	int sought = 1;
	//beg��end��ʾ���������ķ�Χ
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