#include<iostream>
#include<string>
#include<vector>
#include"cassert"
using std::begin; using std::endl;
using std::cin; using std::cout; using std::endl;
using std::string;
using std::vector;
 
int main_prac648()
{
	//����ѭ���ĺ��壬��assert��ʹ�ú�����?
	string s;
	string sought = "tim";
	while (cin >> s && s != sought) {
		cout << s << endl;
	}
	assert(cin);  //������assert����cinΪfalseʱ����ֹ����

	system("pause");
	return 0;
}