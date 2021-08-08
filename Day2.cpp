#include "StdAfx.h"

#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main()
{
	int i;
	int count=0;
	for (i=0;i<=100;i++)
	{
		
		 if ((i%10==9)||(i/10==9)||(i%9==0))
		 {
			 printf("%d ",i);
			 count++;
		 }
		 
	}
	printf("count=%d",count);


	return 0;


}




//
//void swap(int* x,int* y)
//{
//	int tmp;
//	tmp=*x;
//	*x=*y;
//	*y=tmp;
//}
//
//int main()
//{
//	int a=10;
//	
//	int b=20;
//	
//	
//	printf ("a=%d b=%d\n",a,b);
//	swap(&a,&b);
//	printf ("a=%d b=%d\n",a,b);
//
//	return 0;
//
//}


//void swap(int* x,int* y)
//{
//	int* tmp;
//	tmp=x;
//	x=y;
//	y=tmp;
//}
//
//int main()
//{
//	int a=10;
//	int b=20;
//	int tmp;
//	printf ("a=%d b=%d\n",a,b);
//	swap(&a,&b);
//	printf ("a=%d b=%d\n",a,b);
//
//	return 0;
//
//}






//
//int getmax(int x,int y)
//{
//	if(x>y)
//	{
//		return x;
//	}else
//	{
//		return y;
//	}
//}
//
//
//int main()
//{
//
//	int a=10;
//	int b=20;
//	int max=getmax(a,b);
//	printf("%d\n",max);
//
//
//
//	return 0;
//}