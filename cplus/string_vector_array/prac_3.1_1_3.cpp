#include <iostream>

using std::cin; using std::cout; using std::endl;

int prac_3113()
{
	//提示用户输入两个数，打印出这两个整数所指定范围内的所有整数
	cout << "Please write down two numbers" << endl;
	int d0, d1;
	int temp = 0;
	cin >> d0 >> d1;    //cin中无法提示
	if (d0 > d1){
		temp = d0;
		d0 = d1;
		d1 = temp;
	}
	int i = d0;
	for (i; i <= d1; ++i){
		cout << i << endl;
	}

	system("pause");
	return 0;
}