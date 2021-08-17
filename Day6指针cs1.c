#include <stdio.h>
#include <string.h>


//int count_mun(int arr[],int i)
//{
//
//	int j=0;
//	int dp1=1;
//	int dp2=1;
//	int result=0;
//	for(j=0;j<=i;j++)
//	{
//		int k=arr[j-1]*10+arr[j];//j=1时,k=2*10+2=22
//		if(k==0)//0不表示字母
//		{
//			return 0;
//		}
//		if(10<=k&&k<=26)//10<=22<=26 符合
//		{
//			result = dp1;
//		}
//		if(arr[j]!=0)//1-9
//		{
//			result += dp2;
//		}
//		 dp1 = dp2;
//		 dp2 = result;
//		 result = 0;
//	}
//	return dp2;
//}
//
//void Reverse(int arr[],int sz)
//{
//	//从两边向中间，左右互换
//	int left=0;
//	int right=sz;
//	while(left<right)
//	{
//	int tmp=arr[left];
//	arr[left]=arr[right];
//	arr[right]=tmp;
//	left++;
//	right--;
//	}
//}
//
//int main()
//{
//	int n=0;
//	int i=0;
//	int sz=0;
//	//输入
//	printf("请输入数字：");//226
//	scanf("%d",&n);
//	int mun[100]={0};
//	//将输入的存入数组
//	while(n)
//	{
//		sz=i;//长度 2（0 1 2）
//		mun[i]=n%10;//6 2 2
//		i++;
//		n=n/10;
//	}
//	//将存入的数据调换位置
//	Reverse(mun,sz);//2 2 6
//	//将数字进行组合
//	int c=count_mun(mun,sz);
//	printf("%d\n",c);
//	return 0;
//}




//
//#include<iostream>
//#include<stdlib.h>
//#define MAX(a,b) ((a)>(b)?(a):(b))
//using namespace std;
// 
//int maxSubSum(int Array[],int count);
//int main()
//{
//	int a[] = {1,-2,3,10,-4,7,2,-5};
//	int count = sizeof(a)/sizeof(int);
//	cout<<"输入的数组为："<<endl;
//	for(int i = 0;i<count;i++)
//	{
//		cout<<a[i]<<" ";
//	}
//	int maxNumber = maxSubSum(a,count);
//	cout<<endl<<"该数组最大子数组和为："<<maxNumber<<endl;
//	system("pause");
//	return 0;
//}
//int maxSubSum(int Array[],int count)
//{
//	int max_number = Array[0];
//	int sum_number = Array[0];
//	for(int i=1;i<count;i++)
//	{
//		if(sum_number>0)
//			sum_number += Array[i];
//		else
//			sum_number = Array[i];
//		max_number = MAX(sum_number,max_number);
//	}
//	return max_number;
//}

//int main()
//{
//	while(1)
//	{
//		char A[30];
//		int i=0,j;
//		printf("请输入一个字符串：(回车键结束)\n");
//		do{
//			scanf("%c",&A[i]);
//			i++;
//			}while(i<30&&(A[i-1]!='\n'));
//    
//    
//		for(j=0;j<i;j++)
//		{
//		  printf("%c",A[j]);
//		 } 
//	}
//	return 0;
//}
//
//



//
//int  main()
//{
//	int i=0;
//	int j=0;
//	int k=0;
//	char a[]={"hello"};
//	char b[]={"hello,i am lilei,hello"};
//	char* pa=a;
//	char* pb=b;
//	char c[50]={0};
//	int d=sizeof(b)/sizeof(b[0]);
//	int f=sizeof(a)/sizeof(a[0]);
//	for(i=0;i<d&*pb!='\0';i++)
//	{
//			if(*pb=='h')
//			{
//				for(j=0;j<f&*pb!='\0';j++)
//					if(*pa==*pb)
//					{
//						pa=pa+1;//1 2 3 4
//						pb=pb+1;//1 2 3 4
//					}else
//					{
//						c[k]=*pb;
//						//printf("%c",*pb);//5
//						pb=pb+1;//6
//						k++;
//					}
//				pa=pa-5;
//			}
//			else
//			{
//				c[k]=*pb;
//				//printf("%c",*pb);//5
//				pb=pb+1;//6
//				k++;
//			}	
//	}
//	printf("%s\n",c);
//	return 0;
//}














//
//	//int a=0x11223344;
//	/*int* pa=&a;
//	printf("%x\n",a);
//	*pa=0;
//	printf("%x\n",a);*/
//
//	/*char* pc=&a;
//	printf("%x\n",a);
//	*pc=0;
//	printf("%p\n",pa);
//	printf("%x\n",a);
//*/
//
//
//	//int* pa=&a;
//	//char* pc=&a;
//	//printf("%p\n",pa);
//	//printf("%p\n",pa+1);
//	//printf("%p\n",pc);
//	//printf("%p\n",pc+1);
//
//	//int arr[10]={0};
//	//int* p=arr;//数组名-首元素地址
//	//int i=0;
//	//for(i=0;i<10;i++)
//	//{
//	//	*(p+i)=1;
//	//	printf("%d\n",arr[i]);
//	//}
//	
////野指针
//	//int a;//局部变量不初始化，默认是随机值
//	//int* p;//局部的指针变量，就被初始化随机值
//	//*p=20;
//
//	//int arr[10]={0};
//	//int* p=arr;//数组名-首元素地址
//	//int i=0;
//	//for(i=0;i<12;i++)
//	//{
//	//	*p++;//越界访问
//	//}
//
////int* test()
////{
////	int a=10;
////	return &a;
////}
////int main()
////{
////	int* p=test();//指针指向的空间被释放
////	*p=20;
////	return 0;
////}
//
//	//int* p=NULL;//不知道怎么赋值时，可初始化为NULL
//	//int a=10;
//	//int* p=&a;
//	////被释放或不需要时可附NULL
//	//p=NULL;
//	//if(p!=NULL)//不为空时可用
//	//{
//	//	*p=20;
//	//}
//
//
////指针运算
//	//int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	//int i=0;
//	//int se=sizeof(arr)/sizeof(arr[0]);
//	//int* p=arr;
//	//for(i=0;i<10;i++)
//	//{
//	//	printf("%d ",*p);
//	//	//指针+-整数
//	//	p=p+1;
//	//}
//
//
//	//char ch[5]={0};
//	//int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	////指针-指针等于中间元素个数（大地址-小地址。小-大则绝对值是个数）
//	//printf("%d",&arr[9]-&arr[0]);
//	//printf("%d",&arr[9]-&ch[0]);//指针-指针要同一个空间的
//
//	
//
//	return 0;
//}




////模拟strlen函数
//int my_strlen(char* str)
//{
//	char* star=str;
//	char* end=str;
//	while(*end!='\0')
//	{
//		end++;
//	}
//	return end-star;
//}
//int main()
//{
//	char arr[]="bit";
//	int len=my_strlen(arr);
//	printf("%d\n",len);
//
//
//	return 0;
//}



//int main()
//{
//	char A[]="hello";
//	char B[]="hello,i am lilei,hello";
//	char B[]=",ello,i am lilei,";
//	char B[]=",I am I am lilei,hello";
//	int d=sizeof(B)/sizeof(B[0]);
//	int f=sizeof(A)/sizeof(A[0]);
//	int C[5]={0};
//	char c[50]={0};
//	int T;
//	int i=0;
//	int j=0;
//	for(i=0;i<d-2;i++)
//	{ 
//		 for(j=0;j<f;j++)
//		{
//			if(B[i+j]==A[j])//i=0 j=0 i=1 2 3 //i=1 j=0
//			{
//				//printf("%c ",B[i+j]);
//				C[j]=0;
//			}else
//			{
//				C[j]=1;//00001 
//			}
//		}
//		for(j=0;j<f;j++)
//		{
//			if(C[j]!=0)//c[0]=0 
//			{
//				T=1;
//				break;
//			}else
//			{
//				T=0;
//			}if(T==0)
//			{
//				B[i]=B[i+5];
//			}
//		}
//	}
//	printf("%s\n",B);
//	return 0;
//}


//int main()
//{
//	int arr[10]={0};
//	printf("%p\n",arr);//地址-首元素地址
//	printf("%p\n",arr+1);
//	printf("%p\n",&arr[0]);
//	printf("%p\n",&arr[0]+1);
//	printf("%p\n",&arr);
//	printf("%p\n",&arr+1);
//	//1.&arr-&数组名不是首元素地址-数组名表示整个数组-&数组名 取出的是整个数组的地址
//	//2.sizeof（arr）-sizeof（数组名）-数组名表示整个数组-sizeof（数组名）计算的是整个数组的大小
//
//	return 0;
//}


//int main()
//{
//	int arr[10]={0};
//	int* p=arr;
//	int i=0;
//	for(i=0;i<10;i++)
//	{
//		*(p+i)=i;
//	}
//	for(i=0;i<10;i++)
//	{
//		//printf("%d ",arr[i]);
//		printf("%d ",*(p+i));
//	}
//	/*for(i=0;i<10;i++)
//	{
//		printf("%p  ==  %p\n",p+i,&arr[i]);
//	}*/

//	return 0;
//}


//int main()
//{
//	int arr=10;
//	int* pa=&arr;//一级指针
//	int** ppa=&pa;//ppa就是二级指针
//
//	printf("%d\n",**ppa);
//
//	return 0;
//}


//指针数组-数组-存放指针的数组
//数组指针-指针

//int main()
//{
//	int a=10;
//	int b=20;
//	int c=30;
//	/*int* pa=&a;
//	int* pb=&b;
//	int* pc=&c;*/
//	//整型数组-存放整型
//	//字符数组-存放字符
//	//指针数组-存放指针
//	//int arr[10];
//	int* arr2[3]={&a,&b,&c};
//	int i=0;
//	for(i=0;i<3;i++)
//	{
//		printf("%d ",*arr2[i]);
//	}
//
//
//	return 0;
//}

















