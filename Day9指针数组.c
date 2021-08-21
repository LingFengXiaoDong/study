#include<stdio.h>


//int main()
//{
//	char arr[]="abcdef";
//	char* pc=arr;//首元素地址
//	printf("%s\n",arr);
//	printf("%s\n",pc);
//
//	return 0;
//}


//int main()
//{
//	const char* p="abcdef";//"abcdef"是一个常量字符串
//
//	//printf("%c\n",*p);
//	//printf("%s\n",p);
//	//*p='w';//常量不能改
//	printf("%s\n",p);
//	return 0;
//}



//int main()
//{
//	char arr1[]="abcdef";
//	char arr2[]="abcdef";
//	const char* p1="abcdef";
//	const char* p2="abcdef";
//	//if(arr1==arr2)//首元素地址不同
//	//{
//	//	printf("hehe\n");
//	//}else
//	//{
//	//	printf("haha\n");
//	//}
//
//	if(p1==p2)//常量，相同，不能改变，节省空间只创建一个，p1p2指向的地址相同
//	{
//		printf("hehe\n");
//	}else
//	{
//		printf("haha\n");
//	}
//
//	return 0;
//}



//int main()
//{
//	int arr[10]={0};//整型数组
//	char ch[5]={0};//字符数组
//	int* parr[4];//存放整型指针的数组-指针数组
//	char* pch[5];//存放字符指针的数组-指针数组
//	return 0;
//}


//
//int main()
//{
//	int arr1[]={1,2,3,4,5};
//	int arr2[]={2,3,4,5,6};
//	int arr3[]={3,4,5,6,7};
//	
//	int* parr[]={arr1,arr2,arr3};//存放整型指针的数组-指针数组
//	int i=0;
//	for (i=0;i<3;i++)
//	{
//		int j =0;
//		for(j=0;j<5;j++)
//		{
//			//parr[i]表示一个地址，+j向后偏移
//			printf("%d",*(parr[i]+j));
//
//		}
//		printf("\n");
//
//	}
//	return 0;
//}



//数组指针


//int main()
//{
//	//int* p=NULL;//p是整型指针-指向整型的指针-可以存放整型的地址
//	//char* pc=NULL;//pc是字符指针-指向字符的指针-可以存放字符的地址
//	//				//数组指针-指向数组的指针-可以存放数组的地址
//	
//	//int arr[10]={0};
//	//arr-首元素地址
//	//&arr[0]-首元素的地址
//	//&arr-数字的地址
//
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	int(*p)[10]=&arr;//数组的地址存起来
//	//上面的p就是数组指针
//	return 0;
//
//
//	//int*   p[10]指针数组-数组名p，大小10-存放指针的数组
//	//int(*p) [10]数组指针-指针名p,-指向大小10的数字-存放数组的地址
//}


//int main()
//{
//	char* a[5];
//	char* (*pa)[5]=&a;
//	//pa,指针变量名，*pa-pa是指针，5数组大小，存放的类型char*
//
//	return 0;
//}


//int main()
//{
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	int (*pa)[10]=&arr;
//	int i=0;
//	/*for(i=0;i<10;i++)
//	{
//		printf("%d ",(*pa)[i]);
//	}*/
//
//
//	for(i=0;i<10;i++)
//	{
//		printf("%d ",*(*pa+i));//*pa==arr
//	}
//
//	return 0;
//}


//参数是数组形式
//void print1(int arr[3][5],int x,int y)
//{
//	int i=0;
//	int j=0;
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<5;j++)
//		{
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//
//}

//参数是指针形式
//void print2(int (*p)[5],int x,int y)
//{
//	int i=0;
//	int j=0;
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<5;j++)
//		{
//			//printf("%d ",(*p+i)[j]);
//			printf("%d ",*((*p+i)+j));//第几行几个，解引用
//			//printf("%d ",p[i][j]);
//			//printf("%d ",*(p[i]+j));
//			
//		}
//		printf("\n");
//	}
//
//}


//int main()
//{
//	int arr[3][5]={{1,2,3,4,5},{2,3,4,5,6,},{3,4,5,6,7}};
//	print1(arr,3,5);//arr-数组名-首元素地址
//	print2(arr,3,5);
//
//
//	return 0;
//}



