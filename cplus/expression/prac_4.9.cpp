#include <iostream>
#include <string>
#include <vector>

using std::cin; using std::cout; using std::endl;
using std::string;
using std::vector;

int prac_49()
{
	//����if������������ֵ��жϹ���
	const char *cp = "Hello world";
	if (cp && *cp) { cout << "true" << endl; };
	// ���ж�cp�Ƿ�Ϊ�棬cp��һ��ָ���ַ������ķǿ�ָ�룬true��&&���Ϊ�����ж��ұߣ�������cp�õ�"Hello world"ҲΪtrue


	system("pause");
	return 0;
}