#include<stdio.h>


//int main()
//{
//	char arr[]="abcdef";
//	char* pc=arr;//��Ԫ�ص�ַ
//	printf("%s\n",arr);
//	printf("%s\n",pc);
//
//	return 0;
//}


//int main()
//{
//	const char* p="abcdef";//"abcdef"��һ�������ַ���
//
//	//printf("%c\n",*p);
//	//printf("%s\n",p);
//	//*p='w';//�������ܸ�
//	printf("%s\n",p);
//	return 0;
//}



//int main()
//{
//	char arr1[]="abcdef";
//	char arr2[]="abcdef";
//	const char* p1="abcdef";
//	const char* p2="abcdef";
//	//if(arr1==arr2)//��Ԫ�ص�ַ��ͬ
//	//{
//	//	printf("hehe\n");
//	//}else
//	//{
//	//	printf("haha\n");
//	//}
//
//	if(p1==p2)//��������ͬ�����ܸı䣬��ʡ�ռ�ֻ����һ����p1p2ָ��ĵ�ַ��ͬ
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
//	int arr[10]={0};//��������
//	char ch[5]={0};//�ַ�����
//	int* parr[4];//�������ָ�������-ָ������
//	char* pch[5];//����ַ�ָ�������-ָ������
//	return 0;
//}


//
//int main()
//{
//	int arr1[]={1,2,3,4,5};
//	int arr2[]={2,3,4,5,6};
//	int arr3[]={3,4,5,6,7};
//	
//	int* parr[]={arr1,arr2,arr3};//�������ָ�������-ָ������
//	int i=0;
//	for (i=0;i<3;i++)
//	{
//		int j =0;
//		for(j=0;j<5;j++)
//		{
//			//parr[i]��ʾһ����ַ��+j���ƫ��
//			printf("%d",*(parr[i]+j));
//
//		}
//		printf("\n");
//
//	}
//	return 0;
//}



//����ָ��


//int main()
//{
//	//int* p=NULL;//p������ָ��-ָ�����͵�ָ��-���Դ�����͵ĵ�ַ
//	//char* pc=NULL;//pc���ַ�ָ��-ָ���ַ���ָ��-���Դ���ַ��ĵ�ַ
//	//				//����ָ��-ָ�������ָ��-���Դ������ĵ�ַ
//	
//	//int arr[10]={0};
//	//arr-��Ԫ�ص�ַ
//	//&arr[0]-��Ԫ�صĵ�ַ
//	//&arr-���ֵĵ�ַ
//
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	int(*p)[10]=&arr;//����ĵ�ַ������
//	//�����p��������ָ��
//	return 0;
//
//
//	//int*   p[10]ָ������-������p����С10-���ָ�������
//	//int(*p) [10]����ָ��-ָ����p,-ָ���С10������-�������ĵ�ַ
//}


//int main()
//{
//	char* a[5];
//	char* (*pa)[5]=&a;
//	//pa,ָ���������*pa-pa��ָ�룬5�����С����ŵ�����char*
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


//������������ʽ
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

//������ָ����ʽ
//void print2(int (*p)[5],int x,int y)
//{
//	int i=0;
//	int j=0;
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<5;j++)
//		{
//			//printf("%d ",(*p+i)[j]);
//			printf("%d ",*((*p+i)+j));//�ڼ��м�����������
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
//	print1(arr,3,5);//arr-������-��Ԫ�ص�ַ
//	print2(arr,3,5);
//
//
//	return 0;
//}



