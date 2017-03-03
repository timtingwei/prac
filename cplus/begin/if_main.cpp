#include <iostream>
int if_main()
{
	// currVal是正在统计的数;将读入的新值存入val
	int currVal = 0, val = 0;
	// 读取第一个数,并确保确实又数据可以处理
	if (std::cin >> currVal){
		int cnt = 1;                    //保存正在处理的当前值的个数
		while (std::cin >> val){        //读取剩余的数
			if (val == currVal)         //如果值相同
				++cnt;
			else{
				std::cout << currVal << " occurs " << cnt << " times " << std::endl;
				currVal = val;          //记住新值
				cnt = 1;                 //重置计数器
			}
		}//while循环在这里结束
		//记住打印文件中最后一个值的个数
		std::cout << currVal << " occurs " << cnt << " times " << std::endl;
	}//最外层的if语句在这里结束
	system("pause");
	return 0;
}