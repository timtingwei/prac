#include <iostream>
#include <vector>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

int prac_418()
{
	vector<int> ivec = { 0,1,2,3,4,9,-2 };
	auto pbeg = ivec.begin();
	while (pbeg != ivec.end() && *pbeg >= 0 )
		cout << *++pbeg;
	cout << endl;
	//如果用前置递增
	//vector中有负值，最后一个输出是负
	//没有负值，最后一个迭代器指向尾后元素，是一个未定义的元素

	system("pause");
	return 0;



}