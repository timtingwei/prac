#include <iostream>
#include <string>
#include <vector>
#include <iterator>
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;
using std::begin; using std::end;

int pointer_array03_353()
{
	//��׼�⺯����begin��end
	//����Ͼ����������ͣ�begin��end�����Ͳ����ǳ�Ա����
	//��Ա�����ĵ��÷�����  .begin()  �ǳ�Ա�����ĵ��� begin() ������Ϊ����
	int ia[] = { 0,1,2,3,4,5,6,7,8,9 };
	int *beg = begin(ia);      //begָ�������first item
	int *last = end(ia);     //last���൱��ָ������βԪ�ص���һλ��
	cout << *beg << "   " << *(last-1) << endl;
	

	//��begin��end�ҵ�arr�еĵ�һ������
	int arr[] = { 5,0,2,9,-9,3,-2,4,0 };
	int *pbeg = begin(arr), *pend = end(arr);
	//�����ȫ �� item <0����ѭ��
	while (pbeg != pend && *pbeg >= 0)  //β��ָ�벻��ִ�н����ú͵�������
		++pbeg;
	cout << *pbeg << endl;


	system("pause");
	return 0;
}