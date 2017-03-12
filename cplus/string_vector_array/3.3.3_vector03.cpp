#include <iostream>
#include <vector>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::string; using std::vector;

int vector03_333()
{
	vector<int> s{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	//对s中的每个元素平方后输出
	for (auto &i : s)
		i *= i;       //等价于 i = i*i;
	for (auto i : s)
		cout << i << " ";
	cout << endl;

	//要使用size_type首先要知道是哪种类型定义的
	vector<int>::size_type;    //正确
	//vector::size_type;         //错误:没有讲清楚类型
    
	//成绩分段统计程序
	vector<unsigned> scores(11, 0);     //11个分段初始化为0
	unsigned grade;
	while (cin >> grade){
		if (grade <= 100)    //只认有效成绩
			++scores[grade / 10];
	}
	for (auto i : scores)
		cout << i << " ";
	cout << endl;

	//不能用下标来添加对象
	//vector<int> ivec;
	//for (decltype(ivec.size()) ix = 0; ix != 10; ++ix)
		//ivec[ix] = ix;   //严重错误:ivec不包含任何元素
	//不包含任何元素就不能通过下标去访问任何元素，这是规定
	vector<int> ivec;
	for (decltype(ivec.size()) ix = 0; ix != 10; ++ix)
		ivec.push_back(ix);
	for (auto i : ivec)
		cout << i << " ";
	cout << endl;



	system("pause");
	return 0;


}