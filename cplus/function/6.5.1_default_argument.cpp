#include <iostream>
#include <string>
#include <vector>
using std::begin; using std::end;
using std::cin; using std::cout; using std::endl;
using std::string;
using std::vector;
/*
//Ĭ���β���Ϊ�βεĳ�ʼֵ���������β��б���
typedef string::size_type sz;
string screen(sz ht = 24, sz wid = 80, char backgrnd = ' ');
//һ��ĳ���βθ���Ĭ��ֵ���������ж�������Ĭ��ֵ��

//Ĭ��ʵ������
//��������ͨ��������ͷ�ļ��У�һ����������һ�κ�������ζ��ǿ��ԡ�
//����Ĭ��ʵ�εĺ�����˵�����������ֻ��Ϊ��Щû��Ĭ��ֵ���β����Ĭ���βΣ��Ҹ��β��Ҳ�������βζ�����Ҫ��Ĭ��ֵ
string screen1(sz, sz, char = ' ');
//string screen1(sz, sz, char = '*');     //�����ظ������������޸��Ѿ����ڵ�Ĭ��ֵ
//string screen1(sz = 24, sz = 80, char);


//Ĭ��ʵ�γ�ʼֵ

//ֻҪ���ʽ������ת��Ϊ�β�����Ҫ����
sz ht();
char def = ' ';
sz wd = 80;

string screen2(sz = ht(), sz = wd, char = def);
string window = screen2();       //screen2(ht(), 80, ' '); 

//���������ڽ���
void f2()
{
	def = '*';            //def���¸�ֵ
	sz wd = 100;          //��������㶨���wd,����û�иı�Ĭ��ֵ
	window = screen2();   //����screen2(ht(), 80, '*')
}
//�������ľֲ�������ֻ����������㶨��wd������ı�Ĭ��ֵ,�봫�ݸ�screen2��Ĭ��ʵ��û�й�ϵ.


int main_default_argument_651()
{
	//Ĭ���βκ����ĵ���
	string window;
	window = screen();        //����screen(24,80,' ');
	window = screen(66);      //����screen(66,80,' ');
	window = screen(66, 44);  //����screen(66,44,' ');
	window = screen(66, 44, '#');//����screan(66,44,'#')
	//Ĭ�ϸ��������β������ȱ�ٵ�β��ʵ��
	//window = screen(, , '?');      //����ֻ�ܺ���β����ʵ��
	window = screen('?');            //����screen('?',80,' ')
	//char����ת����string::size_type���ͣ�16������0x3F,ʮ����63

	//���ʱ��ע�⣬��Ĭ�ϵ��β���ǰ������ʹ��Ĭ��ֵ���ں�

	return 0;
}
*/