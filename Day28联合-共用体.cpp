#include<stdio.h>



//������-������--����һ���ռ�

//union Un
//{
//	char a;
//	int b;
//};

//int main()
//{
//	union Un u;
//
//	//����һ���ռ�
//	//�ռ��С�ǳ�Ա�������Ǹ���Ա�Ĵ�С
//	printf("%d\n",sizeof(u));
//	printf("%p\n",&u);
//	printf("%p\n",&(u.a));
//	printf("%p\n",&(u.b));
//
//	return 0;
//}




//�жϴ�С��

//int check_sys()
//{
//	int a=1;
//	return *(char*)&a;
//}

//int check_sys()
//{
//	union Un{
//
//		char a;
//		int b;
//	}u;
//	u.b=1;
//	return u.b;
//}

//int main()
//{
//	int a=1;
//	int ret=check_sys();
//	if(ret==1)//(*(char*)&a==1)//((char)a==1)
//	{
//		printf("С��\n");
//	}else
//	{
//		printf("���\n");
//	}
//	
//	return 0;
//}




//������Ĵ�С

union Un
{
	int a;//4  8   4
	char arr[5];//5  1  8  1
	//���롣������Ա��С����������������������ʱ��
	//��Ҫ���뵽����������������
};

int main()
{
	union Un u;
	printf("%d\n",sizeof(u));
	return 0;
}


