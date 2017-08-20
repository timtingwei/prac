#include <iostream>
#include <string>
#include <iterator>
#include <initializer_list>
//#include <ErrCode>
using std::cin; using std::cout; using std::endl;
using std::string;
using std::begin; using std::end;
using std::initializer_list;
using std::error_code;

//��д�ܴ���ͬ����ʵ�εĺ�����c++11�±�׼�ṩ��������Ҫ�ķ�����
//������е�ʵ��������ͬ�����Դ���һ����Ϊinitializer_list�ı�׼������
//���ʵ�����Ͳ�ͬ�����Ա�дһ������ĺ�����Ҳ������ν�Ŀɱ����ģ��

//����һ��������β����ͣ�ʡ�Է������Դ��ݿɱ�������ʵ�Σ�һ��ֻ����C�����Ľ����ӿ� 

void error_msg(error_code e,initializer_list<string> il)
{
	//���������Ϣ�ĺ����������ڿɱ�������ʵ��
	cout << e.message() << ": ";
	for (const auto &elem : il)
		cout << elem << " ";
	cout << endl;
}


int main_error_msg()
{
	//initializer_list�β� 
	//������ʵ������δ֪����ȫ��ʵ�ε�������ͬ��
	//��һ�ֱ�׼�����ͣ����ڱ�ʾĳ���ض����͵����顣������ͬ����ͷ�ļ��С�
	//��vectorһ����Ҳ��һ��ģ�����ͣ�����initializer_list����ʱ������ishuoming�б�������Ԫ������
	initializer_list<string> ls;     //Ԫ��������string
	initializer_list<int> li;        //Ԫ��������int
    //��vector ��ͬ���� initalizer_list�����е�Ԫ����Զ�ǳ������޷��ı�

	string expected = "Tim", actual = "Tim";
	//if (expected != actual)
		//error_msg(ErrCode(42), { "functionX",expected,actual });    //��һ�ε��ô�������ֵ
	//else
		//error_msg(ErrCode(0), { "functionX", "okay" });             //�ڶ��ε��ô�������ֵ

	system("pause");
	return 0;
}

