#include<iostream>
#include<string>
#include<vector>
using std::begin; using std::endl;
using std::cin; using std::cout; using std::endl;
using std::string;
using std::vector;


//�������������������չ���������ڹ�ģ��С������ֱ�ӣ�Ƶ�����õĺ����У���������ٶ� 
inline const string&
shorterString3(const string &s1, const string &s2)
{
	return s1.size() <= s2.size() ? s1 : s2;
}

//constexpr
//ֻ�����ڳ������ʽ�ĺ���
//�����涨��
//�������ͺ����е��βζ�������ֵ
//��������ֻ��һ������ֵ
constexpr int func() { return 42; };
constexpr int foo = func();          //func()�������س������ʽ

constexpr size_t scale(size_t cnt) { return func() * cnt; };
int arr[scale(2)];
int a = 5;
//int arr[scale(a)];    //���󣺺��������ڳ������ʽ�б���Ҫ����ֵ

int main_inline_constexpr()
{
	cout << shorterString3("tim", "cooper") << endl;

	system("pause");
	return 0;
}