#include <iostream>
#include <string>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::string;
using std::vector;

//�ж��ĸ����úϷ����ĸ����Ϸ������ڲ��Ϸ��ĵ��ã�˵��ԭ��
double calc(double d) { return 0; }
int count(const string & csr, char c) { return 0; }
int sum(vector<int>::iterator iter1, vector<int>::iterator iter2, int i) { return 0; }

int main_prac_619()
{
	//���ú��� 
	//calc(23.4, 55.1);					//���󣺺������ô���Ĳ�������
	count("abcda", 'a');				//��ȷ���������ý����ַ�������ֵ
	calc(66);							//��ȷ��ʵ�γ�ʼ���β�ʱ��������ʽת��
	
	vector<int> vec = { 0,1,2,3,4 };
	sum(vec.begin(), vec.end(), 3.8);   //��ȷ��ʵ�γ�ʼ���β�ʱ��������ʽת��



	system("pause");
	return 0;
}