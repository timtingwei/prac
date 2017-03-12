#include <iostream>
#include <vector>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::string; using std::vector;

int vector03_333()
{
	vector<int> s{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	//��s�е�ÿ��Ԫ��ƽ�������
	for (auto &i : s)
		i *= i;       //�ȼ��� i = i*i;
	for (auto i : s)
		cout << i << " ";
	cout << endl;

	//Ҫʹ��size_type����Ҫ֪�����������Ͷ����
	vector<int>::size_type;    //��ȷ
	//vector::size_type;         //����:û�н��������
    
	//�ɼ��ֶ�ͳ�Ƴ���
	vector<unsigned> scores(11, 0);     //11���ֶγ�ʼ��Ϊ0
	unsigned grade;
	while (cin >> grade){
		if (grade <= 100)    //ֻ����Ч�ɼ�
			++scores[grade / 10];
	}
	for (auto i : scores)
		cout << i << " ";
	cout << endl;

	//�������±�����Ӷ���
	//vector<int> ivec;
	//for (decltype(ivec.size()) ix = 0; ix != 10; ++ix)
		//ivec[ix] = ix;   //���ش���:ivec�������κ�Ԫ��
	//�������κ�Ԫ�ؾͲ���ͨ���±�ȥ�����κ�Ԫ�أ����ǹ涨
	vector<int> ivec;
	for (decltype(ivec.size()) ix = 0; ix != 10; ++ix)
		ivec.push_back(ix);
	for (auto i : ivec)
		cout << i << " ";
	cout << endl;



	system("pause");
	return 0;


}