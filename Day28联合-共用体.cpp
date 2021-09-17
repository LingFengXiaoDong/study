#include<stdio.h>



//联合体-共用体--共用一个空间

//union Un
//{
//	char a;
//	int b;
//};

//int main()
//{
//	union Un u;
//
//	//共用一个空间
//	//空间大小是成员中最大的那个成员的大小
//	printf("%d\n",sizeof(u));
//	printf("%p\n",&u);
//	printf("%p\n",&(u.a));
//	printf("%p\n",&(u.b));
//
//	return 0;
//}




//判断大小端

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
//		printf("小端\n");
//	}else
//	{
//		printf("大端\n");
//	}
//	
//	return 0;
//}




//联合体的大小

union Un
{
	int a;//4  8   4
	char arr[5];//5  1  8  1
	//对齐。当最大成员大小不是最大对齐数的整数倍的时候，
	//就要对齐到最大对齐数的整数倍
};

int main()
{
	union Un u;
	printf("%d\n",sizeof(u));
	return 0;
}


