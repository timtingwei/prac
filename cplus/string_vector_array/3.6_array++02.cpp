#include <iostream>
#include <vector>

using std::cin; using std::cout; using std::endl;
using std::vector;

int array02_36()
{
	int a[3][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};
	int a2[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };  //��֮ǰ�ĳ�ʼ������ǵȼ۵�

	//��ʾ��ʼ��ÿ�е���Ԫ��
	int a3[3][4] = { {1},{5},{9} };
	//��ʾ��ʼ����һ��
	int a4[3][4] = { 1,2,3,4 }; 

	int ia[3][4];
	int arr[10][20][30] = {0};
	//arr����Ԫ��-> / ��ia���һ�е����һ��Ԫ��
	ia[3][4] = arr[0][0][0];   //ia[3][4] = ***arr;  �Ƿ����  ����
	//ia[3][4] = ***arr;    //��ȷ
	cout << ia[3][4] << endl;

	/*                                       //test bind pointer
	int ival = 5;
	//int b = &ival;  ����
	int &b = ival;        //ival��b��
	b = 1;                //1 -> ival
	cout << ival << endl;   
	int *p = &ival;       //p��ָ��ival��ָ��
	cout << *p << endl;*/

	//��row bind��ia�ĵڶ���4Ԫ��������;
	int(&row)[4] = ia[1];   //�ڶ�����Ԫ�� �±���1  //�ǵ�rowҲ�����飬Ҳ��Ҫ����

	//����Ƕ�׵�forѭ���������ά�����Ԫ��
	constexpr size_t rowCnt = 3, colCnt = 4;   //�������е�����
	int iarr[rowCnt][colCnt];
	for (size_t j = 0; j != rowCnt; ++j) {
		for (size_t k = 0; k != colCnt; ++k) {
			iarr[j][k] = j*colCnt + k;       //j,k�����Ͷ�Ϊsize_t,colCnt����ͬ
		}
	}
	
	//ʹ�÷�Χfor��䴦������
	//for (auto row : iarr) {
		//for (auto item : *row) {
			//cout << item << " ";
		//}
		//cout << endl;
	//}

	//�±�� ׼�����ά����
	for (size_t i = 0; i != rowCnt; ++i) {
		for (size_t j = 0; j != colCnt; ++j)
			cout << iarr[i][j] << " ";
		cout << endl;
	}

	//ʹ�÷�Χfor��䴦������
	size_t cnt = 0;
	for (auto &row : iarr) {
		for (auto &i : row) {
			i = cnt;
			++cnt;
		}
	}
	
	//��ȷ�ķ�Χfor���
	for (auto &row : iarr) {    //i��row������������ 
		for (auto &i : row)
			cout << i << " ";
	}
	cout << endl;

	/*//�����ָ��Ĺ�ϵ
	//������Ϊauto��������ʼֵ
	int ia_test[] = { 0,1,2,3,4,5,6,7 };
	auto ia2_test(ia_test);       //ia2��һ��ָ�룬ָ��ia�ĵ�һ��Ԫ��
	//ia2_test = 42;              //���󣺲��ܽ�int��ֵ��int*
	//auto ia2_test(ia_test[0]);    //ʵ���ϱ�������ִ�е���
	//��ʹ��decltypeʱ�����ᷢ������ת��
	int ival_t = 5;
	int *p_t = &ival_t;
	decltype(ia_test) ia3_test = { 0,1,2,3,4,5 };
	//ia3_test = p_t;     //���� ���ܰ�����ָ�븳ֵ������
	ia3_test[4] = 1;    //��ȷ��ia3_test��һ����������*/
	


	system("pause");
	return 0;
}

