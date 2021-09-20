#include<stdio.h>
#include<string.h>
#include<errno.h>
#include<stdlib.h>



/*预处理：1.包含头文件
		  2.删除注释，用空格替换注释
		  3.#defind替换
*/



//gcc -E test.c 预处理（会生成.i文件）
//gcc -E test.c > test.i 预处理的内容输出到指定文件



/*编译
把c代码翻译成汇编代码
1.语法分析
2.语义分析
3.词法分析
4.符号汇总（函数名，全局变量等）


*/

//gcc -S test.i（编译生成.s文件-汇编代码）



/*汇编
汇编代码转换成二进制指令

形成符号表

*/

//gcc -c test.s （生成.o文件-目标文件-汇编代码转换成二进制指令）


/*链接
合并段表
符号表的合并
符号表的重定位

*/




//预定义符号

//int main()
//{
//	//printf("%s\n",__FILE__);//绝对路径+每次
//	//printf("%d\n",__LINE__);//行号
//	//printf("%s\n",__DATE__);//日期
//	//printf("%s\n",__TIME__);//时间
//
//	//日志文件
//	//
//	FILE* pf=fopen("log.txt","w");
//	int i=0;
//	int arr[10]={0};
//	for(i=0;i<10;i++)
//	{
//		arr[i]=i;
//		fprintf(pf,"file:%s line:%d date:%s time%s i=%d\n",__FILE__,__LINE__,__DATE__,__TIME__,i);
//		printf("%s\n",__FUNCTION__);//打印函数名字
//	}
//	fclose(pf);
//	pf=NULL;
//	for(i=0;i<10;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//
//	return 0;
//}


//int main()
//{
//	printf("%d\n",__STDC__);//linux可以，定义为1
//	return 0;
//}





//#define MAX 5
//int main()
//{
//	int a=MAX;
//	printf("%d",a);
//	return 0;
//}



//#define SQUARE(X) X*X
//int main()
//{
//	//int ret=SQUARE(5);
//	//printf("%d",ret);//25
//
//	//int ret=SQUARE(5+1);//=5+1*5+1
//	//printf("%d",ret);//11
//
//	int ret=SQUARE((5+1));//参数是替换的
//	printf("%d",ret);//36
//
//	return 0;
//}




//#define DOUBLE(x) x+x//(x+x)
//int main()
//{
//	int a=5;
//	int ret=10*DOUBLE(a);//参数是替换的
//	//ret=10*x+x=10*5+5
//	printf("%d\n",ret);
//
//
//	return 0;
//}



//     #  和  ##
//参数插入字符串

//#define PRINT(x) printf("the value of "#x" is %d\n",x)
//
//int main()
//{
//	int a=10;
//	int b=20;
//
//	PRINT(a);//printf("the value of ""a"" is %d\n",a);
//	PRINT(b);//printf("the value of ""b"" is %d\n",b);
//	return 0;
//}


//##把两边的符号合成一个符号

//#define CAT(x,y) x##y
//
//int main()
//{
//	int Class84=2021;
//	//printf("%d\n",Class84);
//	printf("%d\n",CAT(Class,84));
//	//printf("%d\n",Class##84);
//	//printf("%d\n",Class84);
//
//	return 0;
//}


//带有副作用的参数
//#define MAX(X,Y) (X>Y ? X:Y)
//int main()
//{
//	int a=10;
//	int b=11;
//
//	int max=MAX(a++,b++);
//	//int max=MAX((a++)>(b++)?(++a):(b++));
//	printf("%d\n",max);
//	printf("%d\n",a);
//	printf("%d\n",b);//b++了两次
//
//	return 0;
//}




//简单计算的对比
//int Max(int x,int y)
//{
//	return(x>y?x:y);
//}
//
//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//
//int main()
//{
//	int a=10;
//	int b=20;
//	float c=3.0f;
//	float d=4.0f;
//
//	int max=MAX(a,b);
//	//预处理阶段替换，没有函数调用和返回的开销
//	//不需要声明特定类型
//	printf("%d\n",max);
//	max=Max(a,b);
//	//函数调用时会有函数调用和返回的开销
//	//需要声明特定类型
//	printf("%d\n",max);
//
//	printf("%lf\n",MAX(c,d));
//	printf("%d\n",Max(c,d));
//
//	return 0;
//}


//宏太长会增加代码长度
//宏不可调试
//与类型无关，不严谨
//带来运算符优先级的问题，易出错





//#define SIZEOF(type) sizeof(type)
////宏可传类型，函数不行
//int main()
//{
//	int ret=SIZEOF(int);
//	//int ret=sizeof(int);
//	printf("%d\n",ret);
//
//	return 0;
//}

//
//#define MALLOC(num,type) (type*)malloc(num*sizeof(type))
//
//int main()
//{
//	int* p=(int*)malloc(10*sizeof(int));
//	int* p=MALLOC(10,int);
//
//
//#undef MALLOC//移除一条宏定义
//	return 0;
//}





