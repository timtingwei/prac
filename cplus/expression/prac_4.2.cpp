#include <iostream>
#include <vector>

using std::cin; using std::cout; using std::endl;
using std::vector;

int prac_42()
{
	//根据优先级和结合律添加括号
	// (a)*vec.begin()  (b)*vec.begin() + 1 
	vector<int> vec{ 1,2,3,4,5 };
	int p1 = *vec.begin();            //p1的值为vector第一个元素
	int p2 = *vec.begin() + 1;        //p2的值为vector一个元素+1
	cout << p1 << endl;
	cout << p2 << endl;

	//优先级 .和()并列1，满足左结合律，*第二满足右结合律，+第三，满足左结合律
	cout << (*(vec.begin())) << endl;
	cout << ((*(vec.begin())) + 1) << endl;


	system("pause");
	return 0;

}