#include <iostream>
#include "Chapter6.h"

void fcn(const int i){/*fcn�ܹ���ȡi�����ǲ�����iдֵ*/}
void fcn(char i){/*������ͬ����,��ͬ�������β��б� ����*/}
//void fcn(int i){/*...*/}    //�����ظ�������fcn(int)
//��ʽ�в��죬ʵ���Ϻ͵�һ��fcn���β�ûʲô��ͬ

int main_const_fcn()
{
	const int ci = 42;   //���ܸı�ci��ֵ������const
	int i = ci;          //��ȷ��������ciʱ�򣬺��������Ķ���const
	int *const p = &i;   //const�Ƕ���ģ����ܸ�p��ֵ
	*p = 0;
	//ʵ�γ�ʼ���β�ʱ����Ե�����const,���β��Ƕ���constʱ�����볣��������߷ǳ��������ǿ��Ե�
	
	char ca = 'a';
	fcn(ca);             //����fcn����char���͵ĺ���
	int fi = 7;
	fcn(fi);             //����fcn����int���͵ĺ��������Զ���const 

	system("pause");
	return 0;
}

int main_normal_const()
{
	//ָ��������β���const
	//�����÷ǳ�����ʼ��һ���ײ�const���󣬵��Ƿ��������У�ͬʱһ����ͨ�����ñ���ͬ���͵Ķ����ʼ��
	int i = 42;
	const int *cp = &i;   //��ȷ���ײ�const������ͨ��cp�ı�i
	const int &r = i;     //��ȷ�������������õ�const���ǵײ�const,����ͨ��r�޸�i,Ҳ�����޸�r
	const int &r2 = 42;   //��ȷ������������ֵ��ʼ��һ����������
	//int *p = cp;        //����p��cp�����Ͳ�ƥ��
	//int &r3 = r;        //����r3�����ͺ�r�����Ͳ�ƥ��
	//int &r4 = 42;       //���󣺲���������ֵ��ʼ��һ���ǳ�������  

	return 0;
}

int main_reset_findChar()
{
	//const��ʼ��Ӧ�õ�����������
	int i = 0;
	const int ci = i;
	std::string::size_type ctr = 0;
	reset_p(&i);             //��ȷ�������β�������int*��resest����
	//reset_p(&ci);          //���󣺲�����ָ��const int�����ָ��ָ���ʼ��int*
	reset_r(i);              //��ȷ�������β�������int&��reset����
	//reset_r(ci);           //���󣺲��ð���ͨ���ð󶨵�const����ci��
	//reset_r(42);           //���󣺲��ܰ���ͨ���ð󶨵�����ֵ��
	//reset_r(ctr);          //�������Ͳ�ƥ��ctr���޷�������
	//��ȷ��find_char�ĵ�һ���β��ǶԳ��������ã����Կ���������ֵ������Ϊʵ��
	//find_char("Hello World!", 'o', ctr);

	//�������ð汾��ֻ��ʹ��int���Ͷ��󣬹̲���ʹ������ֵ����ֵ���Ϊint�ı��ʽ����Ҫת���Ķ������const int���͵Ķ���
	//����ָ��汾��ֻ��ʹ��int*���Ͷ���
	//find_char�������ܴ���һ���ַ�������ֵ��Ϊfind_char��һ��ʵ�Σ��ú����������β��ǳ������ã�c++��������������ֵ��ʼ����������

	return 0;
}

//������ƣ���һ���βε�����Ӧ����const string&
//std::string::size_type find_char_nc(std::string &s, char c, std::string::size_type &occurs);

bool is_sentence(const std::string &s)
{
	//�����s��ĩβ����ֻ��һ����ţ���s��һ������
	std::string::size_type ctr = 0;
	//std::string local_s = s;
	return  find_char(s, '.', ctr) == s.size() - 1 && ctr == 1;   //����find_charֻ�ܽ�����ͨ���ã���s�ǳ�������
	//��ȷ��˼·���޸�find_char���β�Ϊ��������
	//���ʵ�ڲ����޸ģ���is_sentence�ڲ�����һ��string���͵ı���������Ϊs����
	//return  find_char(local_s, '.', ctr) == s.size() - 1 && ctr == 1;

}


int main_const_reference()
{
	//����ʹ�ó�������
	//�Ѳ���ı���βζ����������һ�ֱȽϳ����Ĵ��󣬸�������һ���󵼣����������޸�����ʵ�ε�ֵ
	//���÷ǳ������ã�����ʵ�����͡����ܰ�const��������ֵ������Ҫת�����͵Ķ��󴫵ݸ���ͨ�������β�
	
	//std::string s = "Hello World!";
	std::string::size_type ctr = 0;
	find_char("Hello World", 'o', ctr);           //�����޷���������ֵ������ʼ���β�
	//find_char(s, 'o', ctr);                         //��ȷ��ֻ��������string����

	return 0;
}


