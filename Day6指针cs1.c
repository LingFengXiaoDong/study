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
//		int k=arr[j-1]*10+arr[j];//j=1ʱ,k=2*10+2=22
//		if(k==0)//0����ʾ��ĸ
//		{
//			return 0;
//		}
//		if(10<=k&&k<=26)//10<=22<=26 ����
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
//	//���������м䣬���һ���
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
//	//����
//	printf("���������֣�");//226
//	scanf("%d",&n);
//	int mun[100]={0};
//	//������Ĵ�������
//	while(n)
//	{
//		sz=i;//���� 2��0 1 2��
//		mun[i]=n%10;//6 2 2
//		i++;
//		n=n/10;
//	}
//	//����������ݵ���λ��
//	Reverse(mun,sz);//2 2 6
//	//�����ֽ������
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
//	cout<<"���������Ϊ��"<<endl;
//	for(int i = 0;i<count;i++)
//	{
//		cout<<a[i]<<" ";
//	}
//	int maxNumber = maxSubSum(a,count);
//	cout<<endl<<"����������������Ϊ��"<<maxNumber<<endl;
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
//		printf("������һ���ַ�����(�س�������)\n");
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
//	//int* p=arr;//������-��Ԫ�ص�ַ
//	//int i=0;
//	//for(i=0;i<10;i++)
//	//{
//	//	*(p+i)=1;
//	//	printf("%d\n",arr[i]);
//	//}
//	
////Ұָ��
//	//int a;//�ֲ���������ʼ����Ĭ�������ֵ
//	//int* p;//�ֲ���ָ��������ͱ���ʼ�����ֵ
//	//*p=20;
//
//	//int arr[10]={0};
//	//int* p=arr;//������-��Ԫ�ص�ַ
//	//int i=0;
//	//for(i=0;i<12;i++)
//	//{
//	//	*p++;//Խ�����
//	//}
//
////int* test()
////{
////	int a=10;
////	return &a;
////}
////int main()
////{
////	int* p=test();//ָ��ָ��Ŀռ䱻�ͷ�
////	*p=20;
////	return 0;
////}
//
//	//int* p=NULL;//��֪����ô��ֵʱ���ɳ�ʼ��ΪNULL
//	//int a=10;
//	//int* p=&a;
//	////���ͷŻ���Ҫʱ�ɸ�NULL
//	//p=NULL;
//	//if(p!=NULL)//��Ϊ��ʱ����
//	//{
//	//	*p=20;
//	//}
//
//
////ָ������
//	//int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	//int i=0;
//	//int se=sizeof(arr)/sizeof(arr[0]);
//	//int* p=arr;
//	//for(i=0;i<10;i++)
//	//{
//	//	printf("%d ",*p);
//	//	//ָ��+-����
//	//	p=p+1;
//	//}
//
//
//	//char ch[5]={0};
//	//int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	////ָ��-ָ������м�Ԫ�ظ��������ַ-С��ַ��С-�������ֵ�Ǹ�����
//	//printf("%d",&arr[9]-&arr[0]);
//	//printf("%d",&arr[9]-&ch[0]);//ָ��-ָ��Ҫͬһ���ռ��
//
//	
//
//	return 0;
//}




////ģ��strlen����
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
//	printf("%p\n",arr);//��ַ-��Ԫ�ص�ַ
//	printf("%p\n",arr+1);
//	printf("%p\n",&arr[0]);
//	printf("%p\n",&arr[0]+1);
//	printf("%p\n",&arr);
//	printf("%p\n",&arr+1);
//	//1.&arr-&������������Ԫ�ص�ַ-��������ʾ��������-&������ ȡ��������������ĵ�ַ
//	//2.sizeof��arr��-sizeof����������-��������ʾ��������-sizeof�������������������������Ĵ�С
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
//	int* pa=&arr;//һ��ָ��
//	int** ppa=&pa;//ppa���Ƕ���ָ��
//
//	printf("%d\n",**ppa);
//
//	return 0;
//}


//ָ������-����-���ָ�������
//����ָ��-ָ��

//int main()
//{
//	int a=10;
//	int b=20;
//	int c=30;
//	/*int* pa=&a;
//	int* pb=&b;
//	int* pc=&c;*/
//	//��������-�������
//	//�ַ�����-����ַ�
//	//ָ������-���ָ��
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

















