#include<iostream>
#include<string>
#include<vector>
#include"cassert"
using std::begin; using std::endl;
using std::cin; using std::cout; using std::endl;
using std::string;
using std::vector;

void print_d(const int ia[], size_t size)
{
#ifndef NDEBUG   //���NDEBUGδ���壬ִ��#ifnef��#endif֮��Ĵ���
	//_ _func_ _ �Ǳ����������һ���ֲ���̬���������ڴ�ź���������
	cout << __func__ << ":array size is" << size << endl;
#endif
	const string word = "tim";
	size_t threshold = 5;
	if (word.size() < threshold)
		cout << "Error:" << __FILE__         //����ļ������ַ�������ֵ
		<< " : in function " << __func__
		<< " at line " << __LINE__ << endl   //��ǰ�кŵ���������ֵ
		<< "    Compiled on " << __DATE__    //����ļ��������ڵ��ַ�������ֵ
		<< " at " << __TIME__ << endl        //��ű���ʱ����ַ�������ֵ
		<< "    Word read was \"" << word
		<< "\": Length too short" << endl;
}


int main_assert653()
{
	//assert(expr)���ʽΪ0,�����Ϣ����ֹ���򣻱��ʽΪ1,assertʲôҲ����
	int a = 12, threshold = 10;
	assert(a > threshold);
	cout << "skip assert..." << endl;
	//assert����������֤ȷʵ�����ܷ��������顣
	//ֻ������һ�ָ����ֶΡ����ǲ����������������������߼���飬Ҳ���ܴ��������Ӧ�ð����Ĵ����顣
	//assert������cassertͷ�ļ��У���ҪΪ������Ŀ��ʹ��assert
	const int ia[5] = {};
	print_d(ia, 5);

	system("pause");
	return 0;

}