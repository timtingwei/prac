#include <iostream>
#include <vector>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

int goto_553()
{
	//��ʹ��goto���
	//goto �����﷨��ʽ��

	// goto label;
	//label�����ڱ�ʶһ�����ı�ʶ��������ǩ���(label statement)��һ���������䣬����֮ǰ����һ����ʾ���ͣ�
//end: return; //����ǩ��䣬������ΪgotoĿ��
	//goto�����ת��Ҫ��ͬһ������
	//goto����switchһ�������ܽ�����Ȩ �ӱ�����������֮�� ת�Ƶ�������֮��
	
	/*//...
	goto end;
	int ix = 10;  //����goto���������һ������ʼ���ı�������
end:
	//���󣺴˴��Ĵ�����Ҫʹ��ix������goto����ƹ�����������
	ix = 42;*/

	//��������Ѿ�ִ�еĶ����ǺϷ��ģ���ζ��ϵͳ�����ٱ�����Ȼ�����´���
begin:
	int sz = 5;
	if (sz < 0) {
		goto begin;
	}
	//goto���ִ�к�����sz.���ص�begin��������sz�Ķ�����䣬sz�����¶��岢��ʼ��

	return 0;
}