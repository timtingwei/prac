#include <iostream>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::vector;

int prac_517()
{
	//检验两个vector对象，其中一个是否为另外的一个的前缀
	//如 0,1,1,2 和 0,1,1,2,3,5,8  结果为true
	
	vector<int> v1 = { 0,1,1,2 };
	vector<int> v2 = { 0,1,1,2,3,5,8 };
	vector<int> vtmp;
	bool result = true;
	if (v1.size() > v2.size()) {  //比较v1,v2的长度，挑选出长度较小的
		vtmp = v1; v1 = v2; v2 = vtmp;  //交换位置,较小的成为v1
	}
	for (decltype(v1.size()) ix = 0; ix != v1.size(); ++ix) {
		if (v1[ix] != v2[ix])
			result = false;
	}
	result ? (cout << "true") : (cout << "false");

	system("pause");
	return 0;
		


}