#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>


//int is_prime(int i)
//{
//	int j;
//	for(j=2;j<=sqrt((float)i);j++)//�汾��������iҪǿ��ת��
//	{
//		if(i%j==0)
//		{
//			return 0;
//				//break;
//		}
//	}
//	return 1;
//}
//
//
//int main()
//{
//	int i;
//	
//	int count=0;
//	for (i=101;i<=200;i+=2)//ż����������������ֱ������
//	{
//		if(is_prime(i)==1)
//		{
//			printf("%d ",i);
//		}
//	}
//	return 0;
//}





//int is_leap_year(int y)//�ж�����
//{
//	if((y%4==0&&y%100!=0)||(y%400==0))
//		{
//			return 1;
//		}else
//		{
//			return 0;
//		}
//}
//
//int main()
//{
//	int y;
//	int count=0;
//	for (y=1000;y<=2000;y++)
//	{
//		if(is_leap_year(y)==1)
//		{
//			printf("%d������\n",y);
//		}
//	}
//	return 0;
//}



//
//int binary_search(int arr[],int k,int se)
//{
//	int left=0;
//	int right=se-1;
//	while(left<=right)
//	{
//		
//		int mid =(left+right)/2;
//		if(arr[mid]>k)
//		{
//			right=mid-1;
//		}
//		else if(arr[mid]<k)
//		{
//			left=mid+1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//
//	return -1;
//}
//
//
//int main()
//{
//	int k=17;
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int se=sizeof(arr)/sizeof(arr[0]);
//	int ret=binary_search(arr,k,se);
//		if (ret==-1)
//		{
//			printf("û�ҵ�");
//		}else
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d",ret);
//		}
//	
//	
//	return 0;
//}




//




//int main()
//{
//	printf("%d",printf("%d",printf("%d",43)));
//	//��ӡ43������2����ӡ2������1����ӡ1.���4321
//	return 0;
//}



#include"add.h"
//int main()
//{
//	int a=1;
//	int b=2;
//	int sum=0;
//	sum=Add(a,b);
//	printf("%d\n",sum);
//	return 0;
//}



//void print(int n )
//{
//	if (n>9)
//	{
//		print(n/10);
//	}
//	printf("%d ",n%10);
//}
//
//
//int main()//��ӡ������ÿһλ
//{
//	unsigned int num=0;
//	scanf("%d",&num);
//	print(num);
//	return 0;
//}




////ģ��strlen
//int my_strlen(char* str)
//{
//	int count=0;
//	while(*str!='\0')
//	{
//		count++;
//		str++;
//	}
//		
//	return count;
//}
//
//
//int main()
//{
//	
//	
//	char arr[]="abc";
//	int len=my_strlen(arr);
//	
//	printf("len=%d\n",len);
//	
//	
//	return 0;
//}





//int my_strlen(char* str)
//{
//	if(*str !='\0')
//	{
//		return 1+my_strlen(str+1);
//	}else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	
//	
//	char arr[]="abc";
//	int len=my_strlen(arr);
//	
//	printf("len=%d\n",len);
//	
//	
//	return 0;
//}




//int Facl(int n)
//{
//	int i=0;
//	int sum=1;
//	for (i=1;i<=n;i++)
//	{
//		sum*=i;
//	}
//	return sum;
//}
//
//int main()//��n�Ľ׳�
//{
//	int c;
//	int ret=0;
//	scanf("%d",&c);
//	ret=Facl(c);
//	printf("%d\n",ret);
//	return 0;
//}



//
//int Fac1(int n)
//{
//	if (n<=1)
//	{
//		return 1;
//	}else
//	{
//		return n*Fac1(n-1);
//	}
//}
//
//int main()
//{
//	int c;
//	int ret=0;
//	scanf("%d",&c);
//	ret=Fac1(c);
//	printf("%d\n",ret);
//	return 0;
//}




//int fbn(int n)
//{
//	if (n<=2)
//	{
//		return 1;
//	}else
//	{
//		return fbn(n-1)+fbn(n-2);
//	}
//}
//
//int main()
//{
//	int n;
//	int ret=0;
//	scanf("%d",&n);
//	ret=fbn(n);
//	printf("��%d��쳲���������%d\n",n,ret);
//	return 0;
//}



int fbn(int n)
{
	int a=1;
	int b=1;
	int c=1;
	while(n>2)
	{
		c=a+b;
		a=b;
		b=c;
		n--;
	}
	return c;
}

int main()
{
	int n;
	scanf("%d",&n);
	int ret;
	ret=fbn(n);
	printf("��%d��쳲���������%d\n",n,ret);
	return 0;
}


//int main()
//{
//	char arr[]="abcdef";
//	printf("%d\n",sizeof(arr));//�������\0�����ַ�����)��������������������顢���͵Ĵ�С-��λ���ֽ�
//	printf("%d\n",strlen(arr));//��\0��ǰ���ַ����� )�⺯����ֻ����ַ������䳤��
//	return 0;
//}



//int main()
//{
//	int arr[10]={'abc'};
//	int i=sizeof(arr);
//	int j=sizeof(arr[0]);
//	printf("%d\n",i);
//	printf("%d\n",j);
//	return 0;
//}




