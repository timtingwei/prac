#include <iostream>
#include <string>
#include <vector>
using std::begin; using std::end;
using std::cin; using std::cout; using std::endl;
using std::string;
using std::vector;

void print(const char *cp);
void print(const int *beg, const int *end);
void print(const int ia[], size_t size);


//���غ�const�β�
bool lookup(int i);
bool lookup(const int i);    //�ظ�������constû�취���β������ֿ���

bool lookup(int*);
bool lookup(int* const);    //����const 

//����β���ĳ������ָ������ã�const�ײ�
bool lookup(int &);         //������int����
bool lookup(const int&);    //�����볣��int����

bool lookup(int *);
//bool lookup(const int*);

/*
//const_cast����
const string &shorterString(const string &s1, const string &s2)
{
	return s1.size() <= s2.size() ? s1 : s2;    //��������size��С
}


//�Ժ������أ�����ǳ�����Ϊʵ��ʱ�򣬷��ص�Ҳ�Ƿǳ������� 
string &shorterString(string &s1, string &s2)
{
	auto &r = shorterString(const_cast<const string &>(s1), const_cast<const string &>(s2)  );//��������ǰ�ĺ��������س�������
	//�������ʵ���ϰ���  ĳ����ʼ�ķǳ���ʵ���� 
	return const_cast<string&>(r);  //ת����string&
}*/


int main_overloaded_64()
{
	/*//����������ͬ���β��б�ͬ����֮Ϊ���غ���

	//����ʱ�����������ݴ��ݵ�ʵ���ƶ���Ҫ�ĺ���
	int j[2] = { 0,1 };
	print("Hello World");
	//print(j.begin(), j.end());
	print(j, end(j) - begin(j));
	print(begin(j),end(j));
	//һ���̶��ϼ������Ա�����֡������ֵĸ�����


	//�����������������˷����������������е�Ҫ�ض���ͬ
	//Record lookup(const Account &acct);
	//bool lookup(const Account&);     //����һ��ֻ�з������Ͳ�ͬ   */
	
	//����shorterString����
	//�������ð汾
	//shorterString("myname", "hu");


	system("pause");
	return 0;
}

