#include <iostream>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::string;

int prac_437()
{
	//����ʽ��ת���ĳ���������ǿ������ת��
	int i; double d; const string *ps; char *pc; void *pv;
	//pv = (void*)ps;
	//i = int(*pc)
	//pv = &d;    //pv�Ƕ�d������
	//pc = (char*)pv;

	//pv = const_cast<void*>(ps);  �����޷���const std::string * ת���� void*
	//pv = static_cast<void*>(ps); ����
	//��const_castȥ��const���ʣ���ʱps�������ײ�const��������static_castת����������reinterpret�ڽϵͲ�������½���
	pv = static_cast<void*>(const_cast<string*>(ps));
	//pv = reinterpret_cast<void*>(const_cast<string*>(ps));
	i = static_cast<int>(*pc); //pc��ָ��char����ǿ��ת����int����
	//pv = static_cast<void>(d);  //����double���ͣ�ǿ��ת��Ϊ void*����������
	pv = static_cast<void*>(&d);  //��ȷ��ת���Ķ����� &d ���� d
	//pc = reinterpret_cast<char*>(pv);
	pc = reinterpret_cast<char*>(pv);




	//test
	const char *pc1;
	char *p = const_cast<char*>(pc1);


	system("pause");
	return 0;

}