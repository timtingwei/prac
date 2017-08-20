#include <iostream>
#include <string>
#include <iterator>
using std::cin; using std::cout; using std::endl;
using std::string;
using std::begin; using std::end;

//��������ʣ������������飬ʹ������ʱ��ת����ָ��
//���ܰ�ֵ���ݣ�ʵ�ʴ��ݵ���ָ�������ָ��

void print01(const int* ia) { /*...*/ }
//void print(const int ia[] );          //��������ͼ��������һ������
//void print(const int ia[10]);        //�����ά�ȱ�ʾ�����������麬�ж���Ԫ�أ�ʵ�ʲ�һ��


int main_print01()
{
	int i = 0, j[2] = { 0,1 };
	print01(&i);                   //��ȷ��&i��������int*
	print01(j);                    //��ȷ��jת����int*��ָ��j[0]
	//����print������һ�����飬��ʵ�������βεĺ���ת����ָ��������Ԫ�ص�ָ��
	//���������βεĺ�����Ҫȷ��ʹ������ʱ����Խ��
	system("pause");
	return 0;
}

//��������ָ�����ʽ���ݸ������ģ�������Ӧ��Ϊ���ṩһЩ�������Ϣ��
//����ָ���β������ֳ��õļ���

//ʹ�ñ��ָ������ĳ���
void print02_1(const char *cp)
{
	if (cp) {                  //��cp����һ����ָ��
		while (*cp)            //ֻҪָ����ָ���ַ����ǿ��ַ�
			cout << *cp++;     //�����ǰ�ַ�������ָ����ǰ�ƶ�һ��λ��
	}
	cout << endl;
}

//ʹ�ñ�׼��淶
void print02_2(const int *beg, const int *end)  //��������ָ�룬һ��ָ���������Ԫ�أ�һ��ָ��βԪ�ص���һλ��  
{
	//���beg��end֮�䣨����end��������Ԫ��
	while (beg != end)
		cout << *beg++ << endl;     //�����ǰԪ�أ�ָ����ǰ�ƶ�һλ

}

//��ʾ����һ����ʾ�����С���β� 
void print02_3(const int ia[], size_t size)
{
	//ͨ���β�size��ֵȷ���������Ԫ��
	for (size_t i = 0; i != size; ++i) {
		cout << ia[i] << endl;
	}
}

int main_print02()
{
	//��������ָ�����ʽ���ݸ������ģ�������Ӧ��Ϊ���ṩһЩ�������Ϣ��
	//����ָ���β������ֳ��õļ���
	print02_1("tangsangshuang");

	//string s = "TangSangshuang";
	//const auto beg = s.begin(), end = s.end();
	int ia[] = { 1,2,3,4,5 };
	print02_2(begin(ia),end(ia));

	cout << endl;
	print02_3(ia, end(ia) - begin(ia));         //����print02_3�����������size_t��Ϊ�β�

	//�����鲻��Ҫ����д����ʱ��Ӧ�ö����ָ��const��ָ�롣������ȷʵҪ�ı�Ԫ��ֵ��ʱ�򣬲Ű��βζ����ָ��ǳ�����ָ�롣

	system("pause");
	return 0;
}


//��ȷ���β�����������ã�ά�������͵�һ����
void print03_1(int(&arr)[10])
{
	for (auto elem : arr) {
		cout << elem << endl;
	}

	//f(int &arr[10])      //���󣺽�arr���������õ�����
	//f(int (&arr)[10])    //��ȷ����arr���������������
}



int main_print03()
{
	//���������β� 
	int arr[10] = { 10,9,8,7,6,5,4,3,2,1 };
	print03_1(arr);

	//���������βο��Է��ĵĺ�������ʹ�����飬����������������print�����Ŀ����ԣ�ֻ�������ڴ�СΪ10������
	int i = 0, j[2] = { 0,1 };
	int k[10] = { 0,1,2,3,4,5,6,7,8,9 };
	//print03_1(&i);           //����ʵ�β��Ǻ���10������������
	//print03_1(j);            //����ʵ�β��Ǻ���10������������
	print03_1(k);              //��ȷ��ʵ���Ǻ���10������������
	system("pause");
	return 0;
}

void print04_1(int (*matrix)[2], int rowSize)
{
	//matrix������ָ����2�������������ָ��
	//for (auto &row:matrix)
		//for (auto &i : row) {
			//cout << i << endl;
		//}
}

void print04_2(int matrix[][2], int rowSize)
{
	//�ȼ۶���
	cout << matrix[1][0] << endl;
	//�����������ά���飬ʵ�����β���ָ����10�������������ָ��
}



int main_print04()
{
	//���ݶ�ά���� 
	int arr[3][2] = { {1,2},{3,4},{5,6} };  //����һ���������еĶ�ά���� 
	//�������ݵ���ָ��������Ԫ�ص�ָ�롣��Ԫ�ر�����һ�����飬ָ�����һ��ָ�������ָ�롣����ĵڶ�ά�Ĵ�С�����������͵�һ����
	print04_1(arr, 3);
	print04_2(arr, 3);
	system("pause");
	return 0;
}

