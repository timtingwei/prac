#include <iostream>
#include <vector>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

int for_542()
{
	//for (initializer;condition;expression)
	//expression����init-statement��ʼ���ı���,����������þ���condition���Ķ����޸ķ�����ѭ������֮��

	//�ظ�����s�����ַ�ת���ɴ�д��ֱ�����Ǵ�����ȫ���ַ���������һ����ʾ�հ׵��ַ�
	/*string s = "aabbsd aoiwew";
	for (decltype(s.size()) ix = 0;
	ix != s.size() && !isspace(s[ix]); ++ix)
		s[ix] = toupper(s[ix]);*/
	
	/*//cout << ix << endl;    for���ͷ����Ķ���ֻ��ix�пɼ���������ix������
	string s = "aabbsd aoiwew";
	decltype(s.size()) ix = 0;
	for (ix;
	ix != s.size() && !isspace(s[ix]); ++ix)
		s[ix] = toupper(s[ix]);
	cout << ix << endl;    //6 ��Ϊ��ʱix������for���ͷ�ڱ�����


	for (auto i : s)
		cout << i << " ";
	cout << endl;*/

	/*//for���ͷ�еĶ��ض���
	//init-statement���������󣬵�ֻ����һ���������,���б����Ļ���������ͬ
	vector<int> vec = { 0,1,2,3,4 };
	//��forѭ����vector����һ�ݵ�����
	for (decltype(vec.size())ix = 0, sz = vec.size(); ix != sz; ++ix)   //һ��������䶨��������
		vec.push_back(vec[ix]);
	
	for (auto i : vec)
		cout << i << " ";
	cout << endl;*/

	//ʡ��for���ͷ��ĳЩ����
	vector<int> v = { 0,1,2,3,4 };
	//auto beg = v.begin();
	//for (/*...*/; beg != v.end(); ++beg)   //ʡ��for���ĳ�ʼ������
		//cout << *beg << " ";
	//cout << endl;
	
	//for (auto beg = v.begin();/*...*/; ++beg)  //ʡ��for����������� �ò����б�Ϊtrue��ѭ����һֱ����
		//����Ϊ��ʱ��ѭ���ڲ���Ҫ������ֹ��������
	//cout << endl;

	//������������whileѭ����д��forѭ��
	for (int i; cin >> i;/*���ʽΪ��*/)
		v.push_back(i);
	

	system("pause");
	return 0;

}