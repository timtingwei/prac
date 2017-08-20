#include<iostream>
#include<string>
#include<vector>
using std::begin; using std::endl;
using std::cin; using std::cout; using std::endl;
using std::string;
using std::vector;

//把isShorter函数改成内联函数
inline bool isShorter1(const string& s1, const string& s2)
{
	return s1.size() < s2.size();
}
//内联函数适用：规模小，流程直接，频繁调用
int main_prac644()
{
	cout << isShorter1("tim", "cooper") << endl;
	system("pause");
	return 0;
}