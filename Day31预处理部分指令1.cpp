//#include<stdio.h>
//#include<string.h>
//#include<errno.h>
//#include<stdlib.h>




//�����ж���
//gcc test.c -D SZ=10  //�����в���//=gcc -D SZ=10 test.c
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




//��������
//Ԥ����׶�
//#define DEBUG
//
//int main()
//{
//	int arr[10]={1,2,3,4,5,6,7,8,9,0};
//	int i=0;
//	for(i=0;i<10;i++)
//	{
//		arr[i]=0;
//#ifdef DEBUG//ǰ�涨���˾ͱ���
//		printf("%d ",arr[i]);
//#endif
//	}
//
//	return 0;
//}



//if������������ʽ
//int main()
//{
//	int arr[10]={1,2,3,4,5,6,7,8,9,0};
//	int i=0;
//	for(i=0;i<10;i++)
//	{
//		arr[i]=0;
//#if 1//if������������ʽ
//		printf("%d ",arr[i]);
//#endif
//	}
//
//	return 0;
//}




//���֧����������
//int main()
//{
//	
//#if 1==0
//	printf("haha\n");
//#elif 2==0
//	printf("hehe\n");
//#else
//	printf("�ٺ�\n");
//#endif
//
//	return 0;
//}



//�ж��Ƿ񱻶���
#define DEBUG
//int main()
//{
//#if defined(DEBUG)//������ͱ���
//	printf("haha\n");
//#endif
//��ͬ
//#ifdef DEBUG//������ͱ���
//printf("haha\n");
//#endif

//#if !defined(DEBUG)//������Ͳ����루���棩
//printf("haha\n");
//#endif
//	return 0;
//}

//#ifndef DEBUG//������Ͳ����루���棩
//	printf("haha\n");
//#endif



//Ƕ��ָ��
//������˼������



//#include"  "-�����ļ�����-�ٱ�׼·��include�������
//#include<  >-ֱ�ӱ�׼·�����Ұ���


//.h��ֹ�ظ����õ�д��
//��ֹ�ظ�����
// 1
//#ifndef __TEST_H__//û�ж����ִ�У����˾Ͳ�ִ��
//#define __TEST_H__
//
//#endif

// 2
//#pragma once
//
//int Add(int x,int y);



