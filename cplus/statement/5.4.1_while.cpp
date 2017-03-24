#include <iostream>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::vector;

int while_541()
{
	//whiel for 先检查条件再执行循环体, do while先执行循环体
	//condition部分，可以是一个表达式，也可以是带初始化的变量声明
	//条件本身或者循环体应该设法改变表达式的值
	//定义在while条件部分或者while体内的变量，每次迭代都经历从创建到销毁的过程

	//使用while循环 
	vector<int> ivec;
	int x;
	while ((cin >> x) && (x != '`'))
		//向vector中添加元素
		ivec.push_back(x);
	//寻找第一个负元素
	auto beg = ivec.begin();
	while (beg != ivec.end() && *beg > 0)
		++beg;
	if (beg == ivec.end())
		;//遍历vector后没有负值
	else
		cout << "The first minus value is:\t" << *beg << endl;

	system("pause");
	return 0;

}