#include <iostream>
#include <vector>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

int prac_421()
{
	//ʹ���������������vector<int>���ҵ���ЩԪ����������Ȼ����Щֵ����
	vector<int> ivec = { 0,1,2,3,4,5,6,7 };
	for (auto it = ivec.begin(); it != ivec.end(); ++it) {
		*it = ((*it) % 2 == 0) ? (*it) : 2 * (*it);
	}

	for (auto i : ivec)
		cout << i << " ";
	cout << endl;

	system("pause");
	return 0;
}