#include <iostream>
#include <string>
#include <vector>
#include <iterator>
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;
using std::begin; using std::end;

int pointer_array05_353()
{
	//�����ú�ָ������Ļ���
	int ia[] = { 0,2,4,6,8 };
	int last = *(ia + 4);  //iaָ��ָ��0��ia+4ָ��8��������ia+4�õ�8 �൱��ia[0+4]
	cout << last << endl;
	//����������͵���������б�Ҫ�ĵط�����Բ����
	last = *ia + 4;      //������ia�õ�0��0+4�õ�4 �൱��ia[0] + 4

	system("pause");
	return 0;
}