#include <iostream>
#include <string>
#include <iterator>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;
using std::iterator;

int prac_332()
{
	//定义一个含10个int的数组，令每个元素的值都是其下标值
	int ia[10] = {};   //10个0的数组
	//for (size_t ix = 0; ix <= 9; ++ix)
	for (size_t ix = 0; ix != 10; ++ix)      //数组是维度已知
		ia[ix] = ix;

	//vector<int> ivec(10,0);   //ivec[i]只能用于访问已经存在的元素，而不能用于添加元素
	vector<int> ivec;    // push_back之前定ivec的声明
	//iterator的做法
	//for (auto it = ivec.begin(); it != ivec.end(); ++it)   //使用迭代器不能扩容
		//*it = 1;                    //不适合用迭代器，还是使用下标
	//vector中的for
    for (size_t i = 0; i != 10; ++i)
		//ivec[i] = ia[i];    // vector中的下标类型 和 ia中的下标类型不同
		ivec.push_back(ia[i]);   //push_back的做法

	for (auto i : ivec)
		cout << i << " ";
	cout << endl;


	system("pause");
	return 0;

}