#include <iostream>
#include <string>
#include <vector>
#include <iterator>
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;
using std::begin; using std::end;

int pointer_array06_353()
{
	//�±��ָ��
	//��������±�����ڱ������ڲ��и�ת��

	int ia[] = { 0,2,4,6,8 };
	int i = ia[2];   //iaת����ָ����Ԫ�ص�ָ��
	                 //ia[2]�õ� (ia + 2)��ָ��Ԫ��  *(ia + 2)
	int *p = ia;
	i = *(p + 2);    // �ȼ��� i = ia[2]

	//ֻҪָ��ָ�������е�Ԫ�أ�������ִ���±�����
	//int *p = &ia[2];   //pָ��ia�ĵ�2��Ԫ��
	int *ip = ia + 2;
	int j = ip[1];      //p[1]�ȼ��� *(p + 1),���� ia[3]��ʾ���Ǹ�Ԫ��
	int k = ip[-2];      //p[-2]�ȼ�  *(p - 2),���� ia[0]ָ���Ԫ��
	cout << j << "   " << k << endl;

	//�������ӿ��Եõ������õ��±����Ϳ��Դ���ֵ�������vector��string��ͬ
	
	
	system("pause");
	return 0;

}