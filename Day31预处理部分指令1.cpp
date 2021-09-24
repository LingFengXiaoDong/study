//#include<stdio.h>
//#include<string.h>
//#include<errno.h>
//#include<stdlib.h>




//命令行定义
//gcc test.c -D SZ=10  //命令行参数//=gcc -D SZ=10 test.c
//int main()
//{
//	int arr[SZ]={0};
//	int i=0;
//	for(i=0;i<SZ;i++)
//	{
//		arr[i]=i;
//	}
//	for(i=0;i<SZ;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//
//	return 0;
//}


//ls -a
//ls -l
//ls -al




//条件编译
//预处理阶段
//#define DEBUG
//
//int main()
//{
//	int arr[10]={1,2,3,4,5,6,7,8,9,0};
//	int i=0;
//	for(i=0;i<10;i++)
//	{
//		arr[i]=0;
//#ifdef DEBUG//前面定义了就编译
//		printf("%d ",arr[i]);
//#endif
//	}
//
//	return 0;
//}



//if后面跟常量表达式
//int main()
//{
//	int arr[10]={1,2,3,4,5,6,7,8,9,0};
//	int i=0;
//	for(i=0;i<10;i++)
//	{
//		arr[i]=0;
//#if 1//if后面跟常量表达式
//		printf("%d ",arr[i]);
//#endif
//	}
//
//	return 0;
//}




//多分支的条件编译
//int main()
//{
//	
//#if 1==0
//	printf("haha\n");
//#elif 2==0
//	printf("hehe\n");
//#else
//	printf("嘿嘿\n");
//#endif
//
//	return 0;
//}



//判断是否被定义
#define DEBUG
//int main()
//{
//#if defined(DEBUG)//定义过就编译
//	printf("haha\n");
//#endif
//相同
//#ifdef DEBUG//定义过就编译
//printf("haha\n");
//#endif

//#if !defined(DEBUG)//定义过就不编译（反面）
//printf("haha\n");
//#endif
//	return 0;
//}

//#ifndef DEBUG//定义过就不编译（反面）
//	printf("haha\n");
//#endif



//嵌套指令
//字面意思，套娃



//#include"  "-本地文件包含-再标准路径include里面包含
//#include<  >-直接标准路径查找包含


//.h防止重复引用的写法
//防止重复引用
// 1
//#ifndef __TEST_H__//没有定义就执行，有了就不执行
//#define __TEST_H__
//
//#endif

// 2
//#pragma once
//
//int Add(int x,int y);



