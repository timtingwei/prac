#include <iostream>
#include <string>
#include <vector>
#include <iterator>
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;
using std::begin; using std::end;

int pointer_array04_353()
{
	//ָ������ 

	//ͳ�������п��ַ����ĸ���
	string sarr[] = { "","a","b","","","lss","","ss","" };  //4�����ַ���
	int result = 0;
	for (auto *pbeg = begin(sarr); pbeg != end(sarr); ++pbeg) {
		if (pbeg->empty())    //�����õ���������ȡ��Ԫ����Ϊempty�ĳ�Ա �ȼ�(*pbeg).empty()
			++result;
	}
	cout << result << endl;

	//ָ����˺��ǰ��
	constexpr size_t sz = 5;
	int arr[sz] = { 0,1,2,3,4 };
	int *ip = arr;          // int *p = &arr[0]
	int *ip2 = ip + 4;
	cout << *ip2 << endl;

	//ָ��Ҳ����ָ�������βԪ�ص���һλ��
	int *ip3 = arr + sz;   //������ʹ�ý�������   ʹ��arr��ʱ�� �ʹ�����&arr[0]
	cout << *ip3 << endl;   //-858993460
	int *ip4 = arr + 10;    //1899592  ����arr��Ԫ�ظ�����ip4ָ���ֵδ����
	cout << *ip4 << endl;

	//����ָ�����������������һ���Ǿ��룬����ָ��ͬһ�����е�Ԫ��
	auto n = end(arr) - begin(arr);  //n��ֵ��5��Ҳ����arr�е�Ԫ������
	//����Ľ���� ptrdiff_t�ı�׼�����ͣ���size_tһ����������cstddefͷ�ļ��С���ֵ�����Ǹ���������
	int *b = arr, *c = end(arr);    //*c = arr + sz
	while (b < c) {
		cout << *b << endl;
		++b;
	}

	/*//���ָ����ض��󣬲��ܱȽ�
	int i = 0, sz = 42;
	int *p = &i, *e = &sz;
	//δ����ģ�p��e�޹أ���˱ȽϺ�������
	while (p<e)*/



	system("pause");
	return 0;
		

}