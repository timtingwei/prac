#include <iostream>
#include <vector>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::vector;
using std::begin; using::std::end;
using std::string;

int main()
{
	//++运算符
	int s[3] = { 0,1,2 };
	for (auto &i : s) {
		i++;    //i++和++i效果看起来一样，是尽量用++i;
		cout << i << " ";
	}
	cout << endl;

	//|| 逻辑或运算符
	int a = 1, b = 2;
	if ((a == 1) && (b == 2))   //有一个false总体false 且
		cout << "entering if" << endl;
	if ((a == 1) || (b != 2))   //有一个true总体true   或
		cout << "entering if" << endl;

	system("pause");
	return 0;
}