#include <iostream>
#include <string>
#include <vector>
#include <iterator>
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;
using std::begin; using std::end;

int prac_336()
{
	//�Ƚ����������Ƿ����
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 1,2,3,4,5 };
	int arr3[] = { 5,4,3,2,1 };
	//if (*arr1 == *arr2)
		//cout << arr1 <<"   " << arr2<< endl;
	int *pbeg1 = arr1, *pend1 = end(arr1);
	int *pbeg2 = arr2, *pend2 = end(arr2);
	//���еĳ��Ȳ�ͬ���в����
	if ((pend1 - pbeg1) != (pend2 - pbeg2)) {
		cout << "arr1 != arr2" << endl;
		return 0;
	}
	//���г�����ͬ���Ƚ�ÿ��Ԫ���Ƿ���ͬ
	else {
		//���м����� ѭ������
		while (pbeg1 < pend1) {
			if (*pbeg1 != *pbeg2) {
				cout << "arr1 != arr2" << endl;
				return 0;
			}
			++pbeg1, ++pbeg2;
		}
		cout << "arr1 == arr2" << endl;
	}


	//�Ƚ�����vector�Ƿ����
	vector<int> ivec1(3, 4);
	vector<int> ivec2(3, 5);
	//�������vector�����Ƿ���ͬ
	if (ivec1.size() != ivec2.size()) {
		cout << "ivec1 != ivec2" << endl;
		system("pause");
		return 0;
	}
	//������ͬ
	else {
		//���ÿ��Ԫ���Ƿ���ͬ
		for (decltype(ivec1.size()) ix = 0; ix != ivec1.size(); ++ix) {
			if (ivec1[ix] != ivec2[ix]) {
				cout << "ivec1 != ivec2" << endl;
				system("pause");
				return 0;
			}
		}
		cout << "ivec1 == ivec2" << endl;
	}

	system("pause");
	return 0;

}