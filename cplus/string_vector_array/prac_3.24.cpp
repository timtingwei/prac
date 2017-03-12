#include <iostream>
#include <string>
#include <iterator>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;
using std::iterator;

int prac_324()
{
	//输出容器中 第1个和最后1个的和，第2个最后第2个的和，类推
	vector<int> ivec{ 1,2,3,4,5 };
	for (auto it = ivec.begin(); it != ivec.end(); it++) {
		cout << *it + *(ivec.end()-1-(it-ivec.begin())) << " ";     //最后一个迭代器指向是 .end()-1
	
		//cout << *(ivec.end() - 1 - (it - ivec.begin())) << endl;
	} 
	cout << endl;

	system("pause");
	return 0;
}