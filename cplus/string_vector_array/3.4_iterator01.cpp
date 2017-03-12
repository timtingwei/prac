#include <iostream>
#include <string>
#include <iterator>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;
using std::iterator;

int iterator01_34()
{
	//���õ������������±������string����ĵ�һ����ĸ��Ϊ��д
	string s("some string!");
	if (s.begin() != s.end()) {   //begin == endʱ�򣬴���գ�!=����ǿ�
		//s.begin() = toupper(s.begin());   //s.begin()��һ��������������Ԫ��
		auto it = s.begin();      //it��ʾs�ĵ�һ���ַ�
		*it = toupper(*it);       //*iter ���ܷ��ص�����iter��ָ���Ԫ��
	}
	for (auto i : s)
		cout << i;
	cout << endl;

	//��string���Ͷ���ĵ�һ�����ʸ�Ϊ��д ++iter����
	//if ((s.begin()) != s.end()) {
		//for (decltype(s.begin()) it1 = s.begin(); (*it1 != " "); ++it1)
			//*it1 = toupper(*it1);
	//}
	//����Ϊ�ҵ�����

	for (auto it = s.begin(); (it != s.end() && !isspace(*it)); ++it)  //itָʾ��s�е�һ���ַ�
		*it = toupper(*it);
	for (auto i : s)
		cout << i;
	cout << endl;
	//���ͱ�̣�
	//forѭ����ʹ�� ��= ������ <��ԭ����Ϊ���б�׼�ĵ������������˵� ==�� ��=�����������д����û�ж���<�����
	/*for (decltype(s.begin()) it = s.begin(); (it != s.end() && !isspace(*it)); ++it)
		*it = toupper(*it);
	for (auto i : s)
		cout << i;
	cout << endl; */
	
	/*//����������
	vector<int>::iterator it1;       //it1�ܶ�дvector<int>��Ԫ��
	string::iterator it2;            //it2�ܶ�дstring�����е��ַ�

	vector<int>::const_iterator it3;   //ֻ����д
	string::const_iterator it4;*/

	//��������ǳ��� ֻ����const_iterator

	/*
	//begin��end�����
	vector<int> v;
	const vector<int> cv;
	auto it1 = v.begin();        //it1��������vector<int>::iterator
	auto it2 = cv.begin();       //it2��������vector<int>::const_iterator
	*it1 = 2;   //it1���޸�
	//*it2 = 2;   //�޷���������ֵ*/

	//�������ֻ���������������д�����Ļ��� const_iterator
	vector<int> ivec(10, 0);

	/*for (vector<int>::const_iterator it3 = ivec.begin(); it3 != ivec.end(); ++it3) {
		//*it3 *= *it3;    //�������Ϊconst_iteratorʱ������дֻ�ܶ�
		cout << *it3;
	}
	for (auto i : ivec)
		cout << i;
	cout << endl;*/

	// c++11�±�׼����cbegin��cend��Ϊ�˷���ר�ŵõ�const_iterator;
	//auto it3 = v.cbegin();
	for (auto cit = ivec.cbegin(); cit != ivec.cend(); ++cit)
		cout << *cit;
		//*cit *= *cit;   //cit������Ϊ vector<int>::const_iterator ֻ����д
	for (auto i : ivec)
		cout << i;
	cout << endl;

	//��ͷ����� ����Ͻ����úͷ������������
	vector<string> v1{ "a","b","c" };
	auto it = v1.begin();
	(*it).empty();   //��ȷ��it��ʱָ���һ��Ԫ�أ�*it�����ã�����һ��Ԫ���Ƿ�Ϊ��
	//*it.empty();  //����it��һ����������û��empty��Ա���޷�ʹ��.empty()
	vector<string> istr{ "timtingwei" };
	auto it2 = istr.begin();
	it2->empty();   //it2->empty() �ȼ���(*it2).empty()�ѽ����úͷ��ʽ����һ��
	vector<string> text{ "word1","word2","word3","","word4" };
	for (auto it = text.cbegin();
	it != text.cend() && !it->empty(); ++it)
		cout << *it;
	cout << endl;

	//ʹ���˵�������ѭ���壬�����������������Ԫ����
	vector<int> tvec(10, 3);
	for (auto it = tvec.cbegin(); it != tvec.end(); ++it)
		//tvec.push_back(7);  //��������Ӹı�������������
	for (auto i : tvec)
		cout << i;
	cout << endl;



	system("pause");
	return 0;
}