#include <iostream>
#include <vector>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

int prac_515()
{
	//˵������ѭ���ĺ��壬���������еĴ���
	
	//for (int i = 0; i != sz;++i){/*...*/}    //sz��������size_t��i��������int,û��̫������⣬size_t��ת����int���бȽ�
	//if (i!=sz)             //�������������� ��for���ͷ�ж����i ����������ⲿ���ܱ�ʹ��
		//...

	//��������
	//vector<int> v = { 0,1,2,3,4,5 };
	//auto sz = v.size();
	//int i = 0;       //��i������ѭ�����ⲿ������������ 
	//for (i; i != sz; ++i) { cout << v[i] << endl; }
	//if (i != sz){/*...*/}


	//int ix;
	//for (ix != sz;/*ѭ��������Ϊ��*/; ++ix) {/*...*/}
		

	//for (int ix = 0; ix != sz;++ix,++sz){/*...*/} //ͬʱ����ix��sz��ʹ�����������Զ true


	system("pause");
	return 0;
}