
int declaration_definition()
{
    //c++语言支持分离式编译(separate compilation)
	//声明(declaration):一个文件如果想使用别处定义的名字则必须包含对那个名字的声明
	//定义(definition):负责创建与名字关联的实体
	extern int i;   //声明i而非定义i
	int j;          //声明并定义j

    //包含显示初始化的即为定义,初始化的时候会抵消extern
	//extern double pi = 3.1416;    //如果试图初始化一个由extern关键词标记的变量，将引发错误 
	return 0;
}

extern double pi = 3.1416;    //定义  