#include <string>
using std::string;


//ָ�����д���Ϊʲô��Ӧ������޸���Щ�����أ�

/*int f() {
	string s;
	//...
	return s;        //����:����Ӧ����int����,��s��string����
}*/

//f2(int l){/*...*/}  //�������void��������Ҫ�и�����ֵ;������Ҫ

//int f2(int l) {/*...*/ } //���󣺱����з���ֵ
void f2(int l) {/*...*/ }  //��ȷ��void�������κ�ֵ

//int calc(int v1, int v2) /*...*/}  //1 ����һ��{  2����Ҫ��һ������ֵ
int calc(int v1, int v2) { return 0; }  //��ȷ

//������û�л����ţ�
//double square(double x)  return x*x;  //������û�л�����
double square(double x) { return x*x; }