#include <iostream>
#include <vector>

using std::cin; using std::cout; using std::endl;
using std::vector;

int basic_411()
{
	//��������

	//����ʽ��һ�����߶�����������ɣ��Ա���ʽ��ֵ���õ�һ�����������ֵ�ͱ�������򵥵ı���ʽ�������������ֵ�ͱ�����ֵ��
	//�ַ���һ�����߶�����������������������ɽ�Ϊ���ӵı���ʽ

    //һԪ�������ȡ��ַ�� & �������� *
	//��Ԫ������� == * 
	//��Ԫ������� ��������������������Ԫ�����
	//���ż�����ΪһԪ�������Ҳ����Ϊ��Ԫ�����

	//�����������������
	//���������ĸ��ӱ���ʽ��Ҫ����������� ���ȼ� ����� �Լ��������Ľ��˳��

	//�������ת��
	//һ��Ķ�Ԫ����Ҫ��������������������ͬ��
	//������ת���ɸ��㣬������ת������������ָ�벻��ת���ɸ�����
	//С���ͣ�bool��char��short�ȣ�ͨ���ᱻ ����(promoted) �ϴ���������ͣ���Ҫ�� int 

	//���������
	//���� �Ѿ����ڵ������ ��������һ�㺬��
	//ʹ�� ���������ʱ�� �����������ͺͷ���ֵ�����ͣ������ɸ����������ġ���������������ĸ���������������ȼ��ͽ���ɶ����޷��ı��


	//��ֵ����ֵ
	//c�� ��ֵ����λ�ڸ�ֵ������࣬��ֵ���ܡ�
	//c++�бȽϸ��ӡ�
	//��һ������������ֵʱ���õ��Ƕ����ֵ�����ݣ�������������ֵ��ʱ���õ��Ƕ�������ݣ��ڴ��е�λ�ã�
	//��ͬ���������������Ҫ�������ͬ������Ҫ��ֵ�������Ҳ����ֵ������󣻷���ֵ����ֵ�����Ҳ����ֵ���
	//��һ����ֵ��������ֵʱ���õ����������ݣ�ֵ������ֵ���Գ䵱��ֵ����ֵ���ܳ䵱��ֵ(��ַ)

	//��ֵ����� ��Ҫһ�����ǳ�������ֵ��Ϊ����ֵ���󣬵õ��Ľ��Ҳ��Ȼ��һ����ֵ
	int i, j;
	i = 24;
	//24 = j;    //���󣺱���ʽ�����ǿ����޸ĵ���ֵ��������һ������
	
	//ȡ��ַ�� ������һ����ֵ������󣬷���һ��ָ�����������ָ�룬ָ����һ����ֵ��
	auto p = &i;     //i��Ϊ��ֵ�䵱���ݣ�p��Ϊ��ֵ��Ϊ���ݡ�
	cout << *p << endl;

	//���ݽ�������������±���������������������������string��vector���±����������ֵ���������ֵ.
	*p;
	vector<int> iarr = { 1,2,3,4 };
	iarr[1];     //Ϊʲô���ǵ���ֵ�������ֵ����������ֵ

	//�������ͺ͵������ĵ����ݼ����������������ֵ������ǰ�ð汾���õĽ��Ҳ����ֵ
	vector<int> iarr1 = { 0,1,2,3,4 };
	//for (decltype(iarr1.size()) ix = 0; ix != iarr1.size(); ++ix)
	    //cout << iarr1[ix] << endl;
	for (auto ix = iarr1.begin(); ix != iarr1.end();++ix)   //++ix����ǰ�����ͣ����ý������ֵ����һ��λ��
		cout << *ix << endl;

	//ʹ�ùؼ�ֵdecltype����ֵ������ͬ
	//�������ʽ����ֵ�������ֵ��decltype������ñ���ʽ�����Ǳ������õ�һ����������
	//decltype(*p) ix =      //�����õõ���ֵ������decltype(*p)�Ľ����һ��int&


	system("pause");
	return 0;

}

/*//ȡ��ַ�� ������һ����ֵ������󣬷���һ��ָ�����������ָ�룬ָ����һ����ֵ��
auto p = &i;     //i��Ϊ��ֵ�䵱���ݣ�p��Ϊ��ֵ��Ϊ���ݡ�
cout << *p << endl;
//���ݽ�������������±���������������������������string��vector���±����������ֵ���������ֵ.
*p;
vector<int> iarr = { 1,2,3,4 };
iarr[1];     //�±�������õ�iarr[1]�����ݣ�Ϊʲô�������ֵ����������ֵ����*/