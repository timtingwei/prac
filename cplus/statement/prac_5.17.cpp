#include <iostream>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::vector;

int prac_517()
{
	//��������vector��������һ���Ƿ�Ϊ�����һ����ǰ׺
	//�� 0,1,1,2 �� 0,1,1,2,3,5,8  ���Ϊtrue
	
	vector<int> v1 = { 0,1,1,2 };
	vector<int> v2 = { 0,1,1,2,3,5,8 };
	vector<int> vtmp;
	bool result = true;
	if (v1.size() > v2.size()) {  //�Ƚ�v1,v2�ĳ��ȣ���ѡ�����Ƚ�С��
		vtmp = v1; v1 = v2; v2 = vtmp;  //����λ��,��С�ĳ�Ϊv1
	}
	for (decltype(v1.size()) ix = 0; ix != v1.size(); ++ix) {
		if (v1[ix] != v2[ix])
			result = false;
	}
	result ? (cout << "true") : (cout << "false");

	system("pause");
	return 0;
		


}