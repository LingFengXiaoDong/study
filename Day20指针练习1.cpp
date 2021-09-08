#include<stdio.h>



//int main()
//{
//	int a[5]={1,2,3,4,5};
//	int* ptr=(int*)(&a+1);
//	printf("%d,%d",*(a+1),*(ptr-1));
//	return 0;
//}


//struct Test
//{
//	int Num;
//	char* sDatre;
//	short cha[2];
//	short sBa[4];
//}*p;//结构体指针变量p
//
////假设p的值为0x100000,如下表达式的值分别为多少
////已知，结构体Test类型的变量大小是20字节
//
//int main()
//{
//	p=(struct Test*)0x100000;
//	printf("%p\n",p+0x1);//0x100000+20=00100014//20转换十六进制14//p+1跳过一个结构体指针
//	printf("%p\n",(unsigned long)p+0x1);//00100001  = 0x100000转换成十进制1048576+1=1048577
//	printf("%p\n",(unsigned int*)p+0x1);//00100004  无符号地址整型跳过一个，一个整型指针4字节=00100000+4
//	return 0;
//}



//int main()
//{
//	int a[4]={1,2,3,4};
//	int* ptr1=(int*)(&a+1);//跳过一个数组
//	int* ptr2=(int*)((int)a+1);//跳过一个字节，一个整型四个字节
//	printf("%x,%x",ptr1[-1],*ptr2);
//
//	return 0;
//}



//int main()
//{
//
//	int a[3][2]={(0,1),(2,3),(4,5)};//逗号表达式--值为最后一个
//	int* p;
//	p=a[0];
//	printf("%d\n",p[0]);//p[0]=*(p+0)
//	return 0;
//}


//int main()//*******************************************
//{
//	int a[5][5];
//	int(*p)[4];
//	p=a;
//	printf("%p,%d\n",&p[4][2]-&a[4][2],&p[4][2]-&a[4][2]);//0xFFFFFFFC,-4
//	return 0;
//}

//
//int main()
//{
//	int aa[2][5]={1,2,3,4,5,6,7,8,9,10};
//
//	int* ptr1=(int*)(&aa+1);//数组地址+1，数组指针
//	int* ptr2=(int*)(*(aa+1));//首元素地址+1，*(aa+1)=aa[1]找到第二行，6的地址
//
//	printf("%d,%d",*(ptr1-1),*(ptr2-1));//10,5
//	return 0;
//}


//int main()
//{
//	char* a[]={"work","at","alibaba"};//首字母地址存到a
//	char**pa=a;
//	pa++;
//	printf("%s\n",*pa);
//	return 0;
//}


//int main()
//{
//	char* c[]={"ENTER","NEW","POINT","FIRST"};
//	char**cp[]={c+3,c+2,c+1,c};
//	char***cpp=cp;
//
//	printf("%s\n",**++cpp);//POINT
//	printf("%s\n",*--*++cpp + 3);//cpp不会回到初始位置-ER
//	printf("%s\n",*cpp[-2]+3);//ST
//	printf("%s\n",cpp[-1][-1] + 1);//EW
//
//	return 0;
//}



//int main()
//{
//	unsigned long pulArray[]={6,7,8,9,10};
//	unsigned long *pulPtr;
//	pulPtr=pulArray;
//	*(pulPtr+3)+=3;
//	printf("%d,%d\n",*pulPtr,*(pulPtr+3));//6,12
//
//	return 0;
//}


#include <assert.h>
//字符串逆序
#include <string.h>
//void reyerse(char* str)
//{
//	assert(str);//断言
//	char* left=str;
//	int len=strlen(str);
//	char* right=str+len-1;
//	while(left<right)
//	{
//		char tmp=*left;
//		*left=*right;
//		*right=tmp;
//		left++;//指针要变
//		right--;
//	}
//
//}
//
//int main()
//{
//	char arr[256]={0};
////	scanf("%s",arr);//abcdef-fedcba
//	gets(arr);//读取一行
//	reyerse(arr);
//	printf("%s",arr);
//	return 0;
//}


//2+22+222+2222....的和
//int main()
//{
//	int a=0;
//	int n=0;
//	scanf("%d%d",&a,&n);//2 5
//	int i=0;
//	int sum=0;
//	int ret=0;
//	for(i=0;i<n;i++)
//	{
//		ret=a+ret*10;
//		sum+=ret;
//	}
//	printf("%d\n",sum);
//	return 0;  
//}



//水仙花数-自幂数
#include<math.h>
//int main()
//{
//	int i=0;
//	for(i=0;i<100000;i++)
//	{
//		int n=1;
//		int sum=0;
//		int tmp=i;
//		while(tmp/=10)
//		{
//			n++;
//		}
//		tmp=i;
//		while(tmp)
//		{
//			sum+=pow(((double)(tmp%10)),n);
//			tmp/=10;
//		} 
//		if(sum==i)
//		{
//			printf("%d\n",sum);
//		}
//	}
//	return 0;
//}



//打印下列
//    *
//   ***
//  *****
//int main()
//{
//	int line=0;
//	scanf("%d",&line);
//	//上
//	int i=0;
//	for(i=0;i<line;i++)
//	{
//		int j=0;
//		for(j=0;j<line-1-i;j++)
//		{
//			printf(" ");
//		}
//		for(j=0;j<2*i+1;j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//下
//	for(i=0;i<line-1;i++)
//	{
//		int j=0;
//		for(j=0;j<=i;j++)
//		{
//			printf(" ");
//		}
//		for(j=0;j<2*(line-1-i)-1;j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//喝汽水
//int main()
//{
//
//	int money=0;
//	int total=0;
//	int empty;
//	scanf("%d",&money);
//	////买回的喝掉
//	//total=money;
//	//empty=money;
//	////换回的汽水
//	//while(empty>=2)
//	//{
//	//	total+=empty/2;
//	//	empty=empty/2+empty%2;
//	//}
//	if(money==0)
//	{
//		total=0;
//	}else
//	{
//		total=2*money-1;
//	}
//	printf("%d 块钱可得 %d瓶汽水\n",money,total);
//	return 0;
//}



////奇偶换位
//void move(int arr[],int sz)
//{
//	int left=0;
//	int right=sz-1;
//	while(left<right)
//	{
//	while((left<right) && (arr[left]%2==1))
//	{
//		left++;
//	}
//	while((left<right) && (arr[right]%2==0))
//	{
//		right--;
//	}
//	if(left<right)
//	{
//		int tmp=arr[left];
//		arr[left]=arr[right];
//		arr[right]=tmp;
//	}
//	}
//}
//void Print(int arr[],int sz)
//{
//	int i=0;
//	for(i=0;i<sz;i++)
//	{
//		printf("%d",arr[i]);
//	}
//}
//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	move(arr,sz);
//	Print(arr,sz);
//	return 0;
//}



//int main()
//{
//	unsigned char a=200;//00000000 00000000 00000000 11001000-11001000
//	unsigned char b=100;//00000000 00000000 00000000 01100100-01100100
//	unsigned char c=0;
//	c=a+b;//整型提升-无符号补零
//	//00000000 00000000 00000000 11001000
//	//00000000 00000000 00000000 01100100
//	//00000000 00000000 00000001 00101100
//	//00101100-c//正数
//	//00000000 00000000 00000000 00101100//提升
//	printf("%d %d",a+b,c);//300，44
//	return 0;
//}



//int main()
//{
//	unsigned int a=0x1234;
//	unsigned char b=*(unsigned char*)&a;
//	printf("%d",b);//32位大端=00，小端=52
//	return 0;
//}


//int main()
//{
//	char a[1000]={0};
//	int i=0;
//	for(i=0;i<1000;i++)
//	{
//		a[i]=-1-i;
//	}//-1...-128 127...1 (128+127=255)| 0 -1....
//	printf("%d\n",strlen(a));//255
//	return 0;
//}



////杨辉三角
//int  main()
//{
//	int arr[10][10]={0};
//	int i=0;
//	int j=0;
//	for(i=0;i<10;i++)
//	{
//		for(j=0;j<10;j++)
//		{
//			if(j==0)
//			{
//				arr[i][j]=1;
//			}
//			if(i==j)
//			{
//				arr[i][j]=1;
//			}
//			if(i>=2 && j>=1)
//			{
//				arr[i][j]=arr[i-1][j]+arr[i-1][j-1];
//			}
//		}
//	}
//
//	for(i=0;i<10;i++)
//	{
//		int k=10-i;
//			while(k)
//			{
//				printf(" ");
//				k--;
//			}
//		for(j=0;j<=i;j++)
//		{
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


////猜凶手
//int main()
//{
//	int killer=0;
//	for(killer='a';killer<='d';killer++)
//	{
//		if((killer!='a')+(killer=='c')+(killer=='d')+(killer!='d')==3)
//		{
//			printf("凶手是%c\n",killer);
//		}
//	}
//	return 0;
//}



//猜名次
//int main()
//{
//	int a=0;
//	int b=0;
//	int c=0;
//	int d=0;
//	int e=0;
//	for(a=1;a<=5;a++)
//	{
//		for(b=1;b<=5;b++)
//		{
//			for(c=1;c<=5;c++)
//			{
//				for(d=1;d<=5;d++)
//				{
//					for(e=1;e<=5;e++)
//					{
//						if(((b==2)+(a==3)==1)&&
//							((b==2)+(e==4)==1)&&
//							((c==1)+(d==2)==1)&&
//							((c==5)+(d==3)==1)&&
//							((e==4)+(a==1))==1)
//						{
//							if(a*b*c*d*e==120)
//							{
//								printf("a=%d b=%d c=%d d=%d e=%d",a,b,c,d,e);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//
//	return 0;
//}



#include<stdlib.h>
//           free
//int main()
//{
//	//申请空间
//	int *p=(int*)malloc(10*sizeof(int));
//	//使用
//	//释放空间
//	free(p);//不会把p置为NULL
//	return 0;
//}
//


//旋转字符串
//void left_move(char arr[],int k)
//{}
#include<string.h>
#include<assert.h>
//暴力求解
//void left_move(char* arr,int k)
//{
//	assert(arr!=NULL);
//	int i=0;
//	int len=strlen(arr);
//	for(i=0;i<k;i++)
//	{
//		//左旋一个字符
//		char tmp=*arr;
//		int j=0;
//		for(j=0;j<len-1;j++)
//		{
//			*(arr+j)=*(arr+j+1);
//		}
//		*(arr+len-1)=tmp;
//	}
//}

//三步翻转
//void reverse(char* left,char* right)
//{
//	assert(left!=NULL);
//	assert(right!=NULL);
//	while(left<right)
//	{
//		char tmp=*left;
//		*left=*right;
//		*right=tmp;
//		left++;
//		right--;
//	}
//}
//void left_move(char* arr,int k)
//{
//	assert(arr);
//	int len=strlen(arr);
//	assert(k<=len);
//	reverse(arr,arr+k-1);
//	reverse(arr+k,arr+len-1);
//	reverse(arr,arr+len-1);
//}

//void right_move(char* arr,int k)//右旋
//{
//	assert(arr);
//	int len=strlen(arr);
//	assert(k<=len);
//	reverse(arr,arr+len-k-1);
//	reverse(arr+len-k,arr+len-1);
//	reverse(arr,arr+len-1);
//}
//
//int main()
//{
//	char arr[]="abcdef";
//	//left_move(arr,2);
//	right_move(arr,2);
//	printf("%s\n",arr);
//	return 0;
//}


////int is_left_move(char* s1,char* s2)
////{
////	int len=strlen(s1);
////	int i=0;
////	for(i=0;i<len;i++)
////	{
////		left_move(s1,1);
////		int ret=strcmp(s1,s2);
////		if(ret==0)
////		{
////			return 1;
////		}
////	}
////	return 0;
////}
//int main()
//{
//	char arr1[]="abcdef";
//	char arr2[]="cdefab";
//	int ret=is_left_move(arr1,arr2);
//	if(ret==1)
//	{
//		printf("Yes\n");
//	}else
//	{
//		printf("No\n");
//	}
//	return 0;
//}



//更简洁版
//int is_left_move(char* str1,char* str2)
//{
//	int len1=strlen(str1);
//	int len2=strlen(str2);
//	if(len1!=len2)
//		return 0;
//	//str1追加
//	strncat(str1,str1,len1);//字符串拼接strcat不能自己加自己
//	//追加后找子串
//	char* ret=strstr(str1,str2);
//	if(ret==NULL)
//	{
//		return 0;
//	}else
//	{
//		return 1;
//	}
//}
//
//int main()
//{
//	char arr1[30]="abcdef";
//	char arr2[]="cdefab";
//	int ret=is_left_move(arr1,arr2);
//	if(ret==1)
//	{
//		printf("Yes\n");
//	}else
//	{
//		printf("No\n");
//	}
//	return 0;
//}




//杨氏矩阵
//int FindNum(int arr[3][3],int k,int row,int col)
//{
//	int x=0;
//	int y=col-1;
//	while(x<=row-1&&y>=0)
//	{
//		if(arr[x][y]>k)
//		{
//			y--;
//		}else if(arr[x][y]<k)
//		{
//			x++;
//		}else
//		{
//			return 1;
//		}
//	}
//}

int FindNum(int arr[3][3],int k,int* px,int* py)
{
	int x=0;
	int y=*py-1;
	while(x<=*px-1&&y>=0)
	{
		if(arr[x][y]>k)
		{
			y--;
		}else if(arr[x][y]<k)
		{
			x++;
		}else
		{
			*px=x;
			*py=y;
			return 1;
		}
	}

}

int main()
{
	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int k=7;
	//返回型参数
	int x=3;
	int y=3;
	int ret =FindNum(arr,k,&x,&y);
	if(ret==1)
	{
		printf("找到了\n");
		printf("下标是；%d %d",x,y);
	}else
	{
		printf("没找到\n");
	}
	return 0;
}





//
//int main()
//{
//
//	return 0;
//}