#include <iostream>
#include <string>
#include <iterator>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;
using std::iterator;

int iterator02_342()
{
	//迭代器运算

	//vector 和 string支持迭代器运算  可以每次跨过多个元素，也支持迭代器进行关系运算
	
	//迭代器运算
	vector<int> vi{1,2,3,4,5};
	auto mid = vi.begin() + vi.size() / 2;    //mid的类型是vector<int>::iterator 
	cout << *mid << endl;                     //解引用得到mid所指向的元素

	//关系运算
	auto it = vi.begin();
	if (it < mid)
		cout << "first half iterator" << endl;  //处理vi前半部分的元素
	else
		cout << "last half is dealing with" << endl;   //处理vi后半部分的元素
	
	//两个迭代器指向同一容器中的元素或者尾元素的下一位置,就能相减
	auto it2 = vi.end();
	auto di = it2 - it;
	cout << "the difference between two iterator is " << di << endl;    //5
	//距离指的是 右侧的迭代器向前移动多少位置就能追上左侧迭代器
	//类型名是 difference_type的带符号整数


	system("pause");
	return 0;
}