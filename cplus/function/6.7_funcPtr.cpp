#include<iostream>
#include<string>
#include<vector>
using std::begin; using std::endl;
using std::cin; using std::cout; using std::endl;
using std::string;
using std::vector;

//����ָ��
//����ָ��ָ��ĳ���ض����͡����������������ķ������ͺ��β����͹�ͬ�������뺯�����޹ء�
//������ָ��Ĺ�ϵ


//���غ�����ָ��
void ff(int*);
void ff(unsigned int);

//����ָ���β�
//��Ȼ���ܶ��庯�����͵��βΣ����ǿ�����ָ������ָ��
//�������β��Ǻ������ͣ������Զ�ת����ָ������ָ��
void useBigger(const string &s1, const string &s2, bool pf(const string&, const string&));
//�ȼۣ���ʾ������ָ������ָ��
void useBigger(const string &s1, const string &s2, bool(*pf)(const string&, const string&));




/*int main_funcPtr67()
{

	//�Ƚ�����string���󳤶�
	bool lengthCompare(const string &, const string&) { return 0; };
	//������������bool(const string&, const string&)
	//��ָ���滻������
	bool(*pf)(const string&, const string&);   //δ��ʼ��
	//pf��һ��ָ������ָ�룬����������const string���ã�����ֵ��bool����

	//�������ŵ���ʽ
	//bool *pf(const string&, const string&); pf��һ������ֵΪboolָ��ĺ���
	//ʹ�ú���ָ�� 
	pf = lengthCompare;       //pfָ����ΪlengthCompare�ĺ���
	pf = &lengthCompare;      //ȡ��ַ�����Ժ���

	//ָ������ָ����ú��������������
	bool b1 = pf("Hello", "World");
	bool b2 = (*pf)("Hello", "goodbye");
	bool b3 = lengthCompare("Hello", "goodbye");

	//ָ��ͬ�������͵�ָ��֮�䲻����ת������
	//���ǿ���Ϊָ�븳һ��nullptr����ֵ0�����ͳ������ʽ����ʾû��ָ����һ����
	string::size_type sumLength(const string&, const string&);
	bool cstringCompare(const char&, const char&);
	pf = 0;                          //pf��ָ���κκ���
	//pf = sumLength;                //���󣺺���ָ���ڸ�ֵʱ���������Ͳ�ƥ��
	//pf = cstringCompare;           //���󣺷�������ƥ�䣬�����б�ƥ��
	pf = lengthCompare;              //��ȷ��������ָ���������ȫƥ�䡣
	//pf = 0;
	//bool b4 = pf("Hello", "World");     //���ò�ָ���κκ�����ָ��
	
	//���غ�����ָ��
	//void(*pf1)(unsigned int);         //pf1ָ��ff��δ����
	//pf1 = ff;                         //pf1��void ff(unsigned int);��׼ƥ�� 
	void(*pf1)(unsigned int) = ff;      //pf1ָ��ff(unsinged int)���ذ汾����׼ƥ��
	//ָ�����ͱ��������غ����е�ĳһ����׼ƥ��
	//void(*pf2)(int) = ff;             //�����β��б�ƥ��
	//double(*pf3)(int*) = ff;          //����ff��pf3�ķ������Ͳ�ƥ��
	
	//�Զ���lengthCompareת����ָ��ú�����ָ��
	useBigger("a", "b", lengthCompare);
	//ʹ��typdef��decltype��ָ�����Ĵ���
	//Func��Func2�Ǻ�������
	
	typedef bool Func(const string&, const string&);
	typedef decltype(lengthCompare) Func2;           //�ȼ۵�����
	//FuncP��FuncP2��ָ������ָ��
	typedef bool(*FuncP)(const string&, const string&);
	typedef decltype(lengthCompare) (*FuncP2);

	void useBigger(const string&, const string&, Func);    //�Զ���func��ʾ�ĺ�����ת����ָ��
	void useBigger(const string&, const string&, FuncP2);

	using F = int(int*, int);           //F�Ǻ������ͣ�����ָ��
	using PF = int(*)(int*, int);       //PF��ָ������

	PF f1(int);                         //��ȷ��PF��ָ������ָ�룬f1���غ�����ָ��
	//F f2(int);                        //����F�Ǻ������ͣ�f1���ܷ���һ������
	F* f2(int);                         //��ȷ����ʾָ����������
	
	//ֱ������f1
	int(*f1(int))(int*, int);
	//f1���β��б�����f1��һ��������f1ǰ����*������f1����һ��ָ�룻
	//��һ�����֣�ָ�����ͱ���Ҳ���β��б����ָ��ָ�������ú����ķ���������int
	//β�����ͷ���
	auto f2(int) -> int(*)(int*, int);

	//��auto��decltype���ں���ָ������
	string::size_type sumLength(const string&, const string&);
	string::size_type largerLength(const string&, const string&);
	//�������βε�ȡֵ,getFcn��������ָ��sumLength��ָ��
	decltype (largerLength) *getFcn(const string&);

	//��decltypeָ��ĳ������ʱ�������غ������Ͷ���ָ������
	//��Ҫ��ʾ*��ʹ�ú�������ָ������ָ��
	system("pause");
	return 0;
}*/