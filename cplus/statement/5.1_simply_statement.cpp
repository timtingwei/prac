#include <iostream>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::string;

int simply_statement_51()
{
	//�������䶼�ԷֺŽ���
	//���ʽ���(expression statement)
	//������ִ�б�ʾʽ���������
	int ival = 0;
	ival + 5;           //ʵ��ûʲô�ô�
	cout << ival;       //����

	//����� null statement ֻ��һ�������ķֺ�
	;   //�����
	//�ظ��������ݣ�ֱ�������ļ�ĩβ������ֵ���� "thought"
	string s, thought = "thought";
	while (cin >> s&&s != thought)
		;//�����
	//�����Ӧ�ü���ע��

	//���ƷǷ���;�ţ�����ֻ������һ�������
	int v1 = 1, v2 = 2;
	ival = v1 + v2;;   //�ڶ����ֺű�ʾһ������Ŀ����
	//����ֹ��ѭ��
	//while (iter != svec.end());   //whileѭ���������������
		//++iter;                   //�������㲻����ѭ��һ����

	//������䣨�飩
	//��ָ�������������ģ�����Ϊ�յģ��������������У��������Ҳ������"��"��Block��
	//һ�������һ�������򣬿������������ֻ���ڿ��е��ӿ������
	//����ڳ����ĳ���ط����﷨����Ҫһ����䣬�����߼�����Ҫ������䣬��Ӧ��ʹ�ø������
	int val = 0, sum = 0;
	while (val <= 10) {
		sum += val;
		++val;
	}
	cout << sum << endl;  //55

	system("pause");
	return 0;
}