#include <iostream>
//#include <string>
using std::string; using std::cout; using std::endl;

int string01_321()
{
	string s1;                //Ĭ�ϳ�ʼֵ,s1��һ���մ�
	//string s2 = s1;           //s2��s1�ĸ��� 
	string s2(s1);             //�ȼ���string s2 = s1;
	//string s3 = "hiya";       //s3�Ǹ��ַ�������ֵ�ĸ���
	string s3("hiya");         //�ȼ��� string s3 = "hiya";
	//string s4(10, "c");     //������Ҫ�õ����Ž�c����
	string s4(10, 'c');       //�� string sn(n,'c') ��sn��ʼ��Ϊ����n���ַ�c��ɵĴ�

	//cout << s4 << endl;  cout�޷�����std::string����

	//������仰�ȼ����������䣬���ǿɶ��Բ� û���κβ�������
	string temp(10, 'c');
	string s5 = temp;

	system("pause");
	return 0;
}