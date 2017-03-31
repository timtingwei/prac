#include <iostream>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::vector;

void more_return(int &i, int &j)
{
	++i, ++j;
}

void not_reference(vector<int>::iterator &i)
{
	++i;
}

int main_more_not()
{
	//һ���β�Ӧ�����������͵����ӣ�һ���ββ������������͵�����

	//Ӧ������������ -> ������Ҫ���ⷵ��
	int i = 1, j = 7;
	more_return(i, j);             //����more_return����
	cout << i << " " << j << endl; //��� 2 8

	//�������������� -> �ı�ָ��ָ��
	vector<int> ivec = { 0,1,2,3 };
	vector<int>::iterator beg = ivec.begin();                //iptrָ������i
	cout << "*beg = " << *beg << endl;
	not_reference(beg);
	cout << "*beg = " << *beg << endl;


	system("pause");
	return 0;
}



