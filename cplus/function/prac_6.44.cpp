#include<iostream>
#include<string>
#include<vector>
using std::begin; using std::endl;
using std::cin; using std::cout; using std::endl;
using std::string;
using std::vector;

//��isShorter�����ĳ���������
inline bool isShorter1(const string& s1, const string& s2)
{
	return s1.size() < s2.size();
}
//�����������ã���ģС������ֱ�ӣ�Ƶ������
int main_prac644()
{
	cout << isShorter1("tim", "cooper") << endl;
	system("pause");
	return 0;
}