#include<iostream>
#include<string>
#include<vector>
#include"cassert"
using std::begin; using std::endl;
using std::cin; using std::cout; using std::endl;
using std::string;
using std::vector;

//ʲô�Ǻ�ѡ������ʲô�ǿ��к���?
void print5();
void print5(int);
void print5(int, int);
void print5(double, double=3.4);

//��ѡƥ�䣺��������ͬ�������ڿɵ��õ�
//����ƥ�䣺�β������뱾�ε����ṩ��ʵ��������ȣ�ʵ�����Ӧ�βε�������ͬ�������ܹ�ת�����β�����

/*int main_prac66()
{
	print5(6.2);   //����  void print4(double, double=3.4);
	
	//print4(2.56, 42);  //���þ��ж�����
	print5(42);        //void print4(int);
	print5(42, 0);     //void print4(int, int);
	print5(2.56, 3.14);//void print4(double, double=3.4);


	system("pause");
	return 0;
}*/
