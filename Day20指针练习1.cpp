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
//}*p;//�ṹ��ָ�����p
//
////����p��ֵΪ0x100000,���±��ʽ��ֵ�ֱ�Ϊ����
////��֪���ṹ��Test���͵ı�����С��20�ֽ�
//
//int main()
//{
//	p=(struct Test*)0x100000;
//	printf("%p\n",p+0x1);//0x100000+20=00100014//20ת��ʮ������14//p+1����һ���ṹ��ָ��
//	printf("%p\n",(unsigned long)p+0x1);//00100001  = 0x100000ת����ʮ����1048576+1=1048577
//	printf("%p\n",(unsigned int*)p+0x1);//00100004  �޷��ŵ�ַ��������һ����һ������ָ��4�ֽ�=00100000+4
//	return 0;
//}



//int main()
//{
//	int a[4]={1,2,3,4};
//	int* ptr1=(int*)(&a+1);//����һ������
//	int* ptr2=(int*)((int)a+1);//����һ���ֽڣ�һ�������ĸ��ֽ�
//	printf("%x,%x",ptr1[-1],*ptr2);
//
//	return 0;
//}



//int main()
//{
//
//	int a[3][2]={(0,1),(2,3),(4,5)};//���ű��ʽ--ֵΪ���һ��
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
//	int* ptr1=(int*)(&aa+1);//�����ַ+1������ָ��
//	int* ptr2=(int*)(*(aa+1));//��Ԫ�ص�ַ+1��*(aa+1)=aa[1]�ҵ��ڶ��У�6�ĵ�ַ
//
//	printf("%d,%d",*(ptr1-1),*(ptr2-1));//10,5
//	return 0;
//}


//int main()
//{
//	char* a[]={"work","at","alibaba"};//����ĸ��ַ�浽a
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
//	printf("%s\n",*--*++cpp + 3);//cpp����ص���ʼλ��-ER
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
//�ַ�������
#include <string.h>
//void reyerse(char* str)
//{
//	assert(str);//����
//	char* left=str;
//	int len=strlen(str);
//	char* right=str+len-1;
//	while(left<right)
//	{
//		char tmp=*left;
//		*left=*right;
//		*right=tmp;
//		left++;//ָ��Ҫ��
//		right--;
//	}
//
//}
//
//int main()
//{
//	char arr[256]={0};
////	scanf("%s",arr);//abcdef-fedcba
//	gets(arr);//��ȡһ��
//	reyerse(arr);
//	printf("%s",arr);
//	return 0;
//}


//2+22+222+2222....�ĺ�
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



//ˮ�ɻ���-������
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



//��ӡ����
//    *
//   ***
//  *****
//int main()
//{
//	int line=0;
//	scanf("%d",&line);
//	//��
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
//	//��
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

//����ˮ
//int main()
//{
//
//	int money=0;
//	int total=0;
//	int empty;
//	scanf("%d",&money);
//	////��صĺȵ�
//	//total=money;
//	//empty=money;
//	////���ص���ˮ
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
//	printf("%d ��Ǯ�ɵ� %dƿ��ˮ\n",money,total);
//	return 0;
//}



////��ż��λ
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
//	c=a+b;//��������-�޷��Ų���
//	//00000000 00000000 00000000 11001000
//	//00000000 00000000 00000000 01100100
//	//00000000 00000000 00000001 00101100
//	//00101100-c//����
//	//00000000 00000000 00000000 00101100//����
//	printf("%d %d",a+b,c);//300��44
//	return 0;
//}



//int main()
//{
//	unsigned int a=0x1234;
//	unsigned char b=*(unsigned char*)&a;
//	printf("%d",b);//32λ���=00��С��=52
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



////�������
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


////������
//int main()
//{
//	int killer=0;
//	for(killer='a';killer<='d';killer++)
//	{
//		if((killer!='a')+(killer=='c')+(killer=='d')+(killer!='d')==3)
//		{
//			printf("������%c\n",killer);
//		}
//	}
//	return 0;
//}



//������
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
//	//����ռ�
//	int *p=(int*)malloc(10*sizeof(int));
//	//ʹ��
//	//�ͷſռ�
//	free(p);//�����p��ΪNULL
//	return 0;
//}
//


//��ת�ַ���
//void left_move(char arr[],int k)
//{}
#include<string.h>
#include<assert.h>
//�������
//void left_move(char* arr,int k)
//{
//	assert(arr!=NULL);
//	int i=0;
//	int len=strlen(arr);
//	for(i=0;i<k;i++)
//	{
//		//����һ���ַ�
//		char tmp=*arr;
//		int j=0;
//		for(j=0;j<len-1;j++)
//		{
//			*(arr+j)=*(arr+j+1);
//		}
//		*(arr+len-1)=tmp;
//	}
//}

//������ת
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

//void right_move(char* arr,int k)//����
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



//������
//int is_left_move(char* str1,char* str2)
//{
//	int len1=strlen(str1);
//	int len2=strlen(str2);
//	if(len1!=len2)
//		return 0;
//	//str1׷��
//	strncat(str1,str1,len1);//�ַ���ƴ��strcat�����Լ����Լ�
//	//׷�Ӻ����Ӵ�
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




//���Ͼ���
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
	//�����Ͳ���
	int x=3;
	int y=3;
	int ret =FindNum(arr,k,&x,&y);
	if(ret==1)
	{
		printf("�ҵ���\n");
		printf("�±��ǣ�%d %d",x,y);
	}else
	{
		printf("û�ҵ�\n");
	}
	return 0;
}





//
//int main()
//{
//
//	return 0;
//}