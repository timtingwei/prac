#include <iostream>
#include <vector>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;


int prac_514()
{
	//��׼�����������string���󣬲����������ظ����ֵĵ��ʡ�
	//Ҫ���¼�ظ����ֵ��������Լ���Ӧ�ĵ���
	//how now now now brown cow cow   ��� now 3
	vector<string> svec;
	string st;
	while ((cin >> st) && (st != "`")) {  //����st������"`"�˳�ѭ��
		svec.push_back(st);   //��st׷�ӵ�vectorĩβ
	}

	int maxCnt = 1, curCnt = 0;   //maxCnt���ڼ�¼���ִ�������ֵ��curCnt��¼��ǰ�����������ֵĸ���
	string maxStr;
	auto beg = svec.begin() + 1;  //beg��ʼ��ָ��svec�ڶ���Ԫ��
	while (beg != svec.end()) {  //������vector����ѭ��
		if ((*beg) == *(beg - 1)) {  //�����ǰֵ��ǰһ��ֵ��ͬ
			curCnt += 1;
		}
		else { curCnt = 1; }
		if (curCnt > maxCnt) {  //�����ǰ�������ĸ�������֮ǰ���ĸ���
			maxStr = *beg;      //�������ĵ��ʸı�ɵ�ǰ�ĵ���
			maxCnt = curCnt;    //�������ı�Ϊ��ǰ�Ĵ���
		}
		++beg;                  //��������ǰ�ƶ�
	}//whileѭ������
	//����κε���û���������ֹ�
	if (maxCnt == 1)
		cout << "there is no one continue appeared " << endl;
	else
		cout << maxStr << " appeared " << maxCnt << " times " << endl;

	system("pause");
	return 0;
}