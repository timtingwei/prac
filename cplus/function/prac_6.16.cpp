#include <iostream>
using std::cin; using std::cout; using std::endl;

//bool is_empty(std::string &s) { return s.empty(); }           
//��ͷ�ļ���������������ͷ�ļ��ֺ��ڻ�������,û�к�����

bool is_empty(const std::string &s) { return s.empty(); }

int main_is_empty()
{
	//is_empty("hello");   //��������ֵ�����޷���Ϊ���ַ�������
	std::string s = "Hello";
	is_empty(s);           //����is_emptyֻ�ܽ���string����
	is_empty("hello");     //�޸ĺ�ĺ������ɽ����ַ�������ֵ
	is_empty("");

	return 0;
}