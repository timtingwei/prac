#include <iostream>
#include <vector>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

int break_551()
{
	//break��� ������ֹ���������while,do while,for �� switch ��䣬������Щ���֮��ĵ�һ����俪ʼ����ִ��
	
	/*int ival1 = 5, ival2 = 10;
	if (ival1 > ival2)
		break;   //breakֻ����ѭ��(����)�Ϳ���(switch)����� ʹ��*/

	string buf;
	while (cin >> buf && !buf.empty()) {
		switch (buf[0]) {
		case '-':    //buf[0]������Ϊchar������õ�����
			for (auto it = buf.begin() + 1; it != buf.end(); ++it) {
				if (*it == ' ')
					break;  //#1  �뿪forѭ��
			}
			//break #1������Ȩ�ƶ�������
			//ʣ���'-'����
			break;  //#2 �뿪switch���  //�����뿪forѭ����ĵ�һ�����
		case '+':
			break;
		}
		//����switch��break#2 ������Ȩת�Ƶ�����
	}//����whileѭ��

	system("pause");
	return 0;
}