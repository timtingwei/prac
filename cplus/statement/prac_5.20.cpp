#include <iostream>
#include <vector>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

int prac_520()
{
	//�ӱ�׼�����ȡstring���������ֱ����������������ͬ�ĵ��ʻ������õĵ��ʶ���Ϊֹ
	//��������ظ����ֵĵ��ʣ��������һ����Ϣ˵��û���κε����������ظ�����
	
	string s;
	cin >> s;
	string stmp = s;    //�ȴ洢��һ������
	bool b = false;     //��ʼֵfalse����û�е����ظ�����
	while ((cin >> s) && (s!="`")) {  //һ�ζ���һ������
		if (s == stmp) {
			b = true;    //�е����ظ�����
			cout << "the common word is :" << s << endl;
			break;    //�����ǰ������ǰһ��������ͬ����ѭ��
		}
		stmp = s;     //��ǰ������Ϊ��һ�����ʵ�ǰһ������
	}
	if (!b) { cout << "There is no common word" << endl;; }  //b��ֵΪfalse������û�е����ظ����� 
	
	system("pause");
	return 0;
}