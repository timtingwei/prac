#include <iostream>
#include <vector>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::vector;
using std::begin; using::std::end;
using std::string;

int prac_344()
{
	//�������ia�е�Ԫ��
	//version1����Χfor�������������
	//version2����ͨfor���±������
	//version3��ָ��
	//ֱ��д���������ͣ�����ʹ�����ͱ�����auto�ؼ��ֻ���decltype�ؼ���
	//ʹ�����ͱ���������ѭ�����Ʊ���������

	//ia�Ƕ�ά����
	int ia[3][4] = { { 0,1,2,3 },{ 4,5,6,7 },{ 8,9,10,11 } };

	//�������ͱ���
	using int_array = int[4];       //Q�����ͱ���Ϊʲô��������  sloved
	//typedef int int_array[4]      
	using array_t = size_t;

	//version1:for��Χ�������
	//row�Ǻ���4������������
	for (int_array (&row) : ia) {     //Q��row��һ�����飬��ia����������ã������������ͣ��� ֻҪ������һ�����飬��һ��Ҫд����
								  //i���������е�����
		for (int i : row)
			cout << i << " ";
		cout << endl;
	}

	//version2:�±������
	//i��������±꣬�±��������size_t  ���׸�size_tŪ��������ʲô���� ����
	for (array_t i = 0; i != 3; ++i) {  //++i  or i++ ??
									   //��arr[i]�е�Ԫ���±����ѭ��
		for (array_t j = 0; j != 4; ++j)
			cout << ia[i][j] << " ";
		cout << endl;
	}

	//version3:ָ��
	//��ʼ����ָ��piָ��ia���׸����飬pi����Ҫ������
	//for (int *pi = ia; pi != ia + 3; ++pi) {
	for (int_array (*pi) = ia; pi != ia + 3; ++pi) {         //int *pi[4] ,int *(pi[4]) ,int (*pi)[4] ���ߵ�����??
														 //*pj�Ǹ�����, pjָ���������׸�Ԫ��
		for (int *pj = *pi; pj != *pi + 4; ++pj)         //pi��ָ��ia�׸����飨ָ�룩��ָ�룬��Ҫ��������pi��ָ������飨ָ�룩*pi��*pi��������4��*pi����һ��ָ�루���飩��ָ���׸�Ԫ��
			cout << *pj << " ";
		cout << endl;
	}



	system("pause");
	return 0;
}
/*//ia�Ƕ�ά����
int ia[3][4] = { { 0,1,2,3 },{ 4,5,6,7 },{ 8,9,10,11 } };
using int_array = int[4];
typedef int int_array[4];     //Ϊʲô���� typedef int[4] int_array����
//���ia��ÿ��Ԫ�ص�ֵ��ÿ���ڲ������ռһ��
for (int_array *p = ia; p != ia + 3; ++p) {  //Ϊʲô������int_array *p = ia ������ int (*p)[4] = ia 
	for (int *q = *p; q != *p + 4; ++q)
		cout << *q << " ";
	cout << endl;
}

//ia�Ƕ�ά����
int ia[3][4] = { { 0,1,2,3 },{ 4,5,6,7 },{ 8,9,10,11 } };
//for (int *pi = ia; pi != ia + 3; ++pi) {
for (int(*pi)[4] = ia; pi != ia + 3; ++pi) {         //int *pi[4] ,int *(pi[4]) ,int (*pi)[4] ���ߵ�����??
	//*pj�Ǹ�����, pjָ���������׸�Ԫ��
	for (int *pj = *pi; pj != *pi + 4; ++pj)         
		cout << *pj << " ";
	cout << endl;
}*/

/*typedef double wages;     //wages��double��ͬ���  ��ԭ
typedef wages base, *p;   //base��double/wages��ͬ��ʣ�p��double* ��ͬ���

using db = double;  //db��double��ͬ���  ��ԭ

typedef char *pstring;   //ԭ������������char*   pstring��ָ��char��ָ�룬��һ�������ں����ǲ�����
const pstring cstr = 0;  //cstr��ָ��char�ĳ���ָ��
const pstring *ps;       //ps��ָ�룬���Ķ�����ָ��char�ĳ���ָ��   �����⣺Ϊʲô����ps�ǳ���ָ�룬��ָ�����ָ��char��ָ�룿��

int errNumb = 0;
int *const curErr = &errNumb;   //curErr��һ��������������һ��ָ�룬˵��һֱָ��errNum,��int���Ͷ���
const double pi = 3.14159;
const double *const pip = &pi;  //pip��һ������������һ��ָ�룬˵��һֱָ��pip��pip��pi�ĵ�ַ����ַ���䣩������ָ�������������ָ��������ĳ���ָ�롣
*/

string line("hello,world");
auto len = line.size();     //len��string::size_type����

string s1 = "hello";
string tmp = s1 + ", ";
string s2 = tmp + "world";  //����ֵ���Ϳ��Ժ�string������ӣ����ǲ�ͬ����