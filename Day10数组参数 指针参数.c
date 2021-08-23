#include<stdio.h>


//void test1(int* p)
//{}
//
//void test2(char* p)
//{}
//int main()
//{
//	int a=10;
//	int* p1=&a;
//	test1(&a);
//	test1(p1);
//
//	char ch='w';
//	char* pc=&ch;
//	test2(&ch);
//	test2(pc);
//
//	return 0;
//}



//void test(int **p)//二级指针
//{}
//int main()
//{
//	int* p;
//	int** pp=&p;
//	test(&p);
//	test(pp);
//	int *arr[10];
//	test(arr);
//	//二级指针可接受参数，一级指针变量地址，二级指针变量，指针数组
//	return 0;
//}


//函数指针-指向函数的指针-存放函数地址的指针
//int Add(int x,int y)
//{
//	int z=0;
//	z=x+y;
//	return z;
//
//}
//
//int main()
//{
//	int a=10;
//	int b=20;
//	//printf("%d\n",Add(a,b));
//	//&函数名和函数名 都是函数的地址
//	//printf("%p\n",&Add);
//	//printf("%p\n",Add);
//	int(*p)(int,int)=Add;
//	printf("%d\n",(*p)(2,3));//5
//
//	
//	return 0;
//
//}



//void Print(char*str)
//{
//	printf("%s\n",str);
//}
//int main()
//{
//	void(*p)(char*)=Print;
//	(*p)("hello world");
//	return 0;
//}


//int main()
//{
//	(*(void(*)())0);//把0强制类型转换：void(*)() 函数指针类型 - 0就是一个函数的地址
//					//调用0地址处的该函数
//
//	void(*signal(int,void(*)(int)))(int);
//	void(*      signal(int,void(*)(int))     )(int);
//	//函数名-signal   函数参数-(int,void(*)(int))
//	//signal是一个函数声明，它的参数有两个，第一个是int，第二个是函数指针，该
//	//函数指针指向的函数的参数是int，返回类型是void
//	//signal函数的返回类型也是一个函数指针，该函数指针指向的函数的参数是int，返回类型是void
//	pfun_t signal(int pfun_t);//简写
//	return 0;
//}
//typedef void(* )(int) pfun_t;//error
//typedef void(* pfun_t  )(int);//函数指针重新命名
//
//typedef unsigned int uint;





//int Add(int x,int y)
//{
//	int z=0;
//	z=x+y;
//	return z;
//}

//int main()
//{
//	int a=10;
//	int b=20;
//	
//	int(*p)(int,int)=Add;//Add=p
//	printf("%d\n",p(2,3));
//	printf("%d\n",Add(2,3));
//
//	printf("%d\n",(p)(2,3));
//	printf("%d\n",(*p)(2,3));//5
//	
//	//printf("%d\n",*p(2,3));//error
//	return 0;
//
//}




//函数指针数组-转移表

//int Add(int x,int y)
//{
//	int z=0;
//	z=x+y;
//	return z;
//}
//int Sub(int x,int y)
//{
//	int z=0;
//	z=x-y;
//	return z;
//}
//int Mul(int x,int y)
//{
//	int z=0;
//	z=x*y;
//	return z;
//}
//int Div(int x,int y)
//{
//	int z=0;
//	z=x/y;
//	return z;
//}
//
//int main()
//{
//	//指针数组
//	int* arr[5];
//	int(*pa)(int,int)=Add;
//	int(*parr[4])(int,int)={Add,Sub,Mul,Div};//函数指针的数组
//	int i=0;
//	for(i=0;i<4;i++)
//	{
//		printf("%d\n",parr[i](2,3));
//
//	}
//
//	return 0;
//}




//char* my_strcpy(char* dest,const char*src);
//char*(*pf)(char*,const char*)=my_strcpy;
//char*(*pfArr[4])(char*,const char*)={my_strcpy,my_strcpy,my_strcpy,my_strcpy};




//计算器

//void menu()
//{
//	printf("******************************\n");
//	printf("**  1.add            2.sub  **\n");
//	printf("**  3.mul            4.div  **\n");
//	printf("**  5.XOR            0.exit **\n");
//	printf("******************************");
//}
//
//
//int Add(int x,int y)
//{
//	int z=0;
//	z=x+y;
//	return z;
//}
//int Sub(int x,int y)
//{
//	int z=0;
//	z=x-y;
//	return z;
//}
//int Mul(int x,int y)
//{
//	int z=0;
//	z=x*y;
//	return z;
//}
//int Div(int x,int y)
//{
//	int z=0;
//	z=x/y;
//	return z;
//}
//int XOR(int x,int y)
//{
//	return x^y;
//}

//int main()
//{
//	int input=0;
//	int x=0;
//	int y=0;
//	do
//	{
//
//		menu();
//		printf("请选择：>");
//		scanf("%d",&input);
//		
//		switch(input)
//		{
//		case 1:
//			printf("请输入两个数：>");
//		scanf("%d%d",&x,&y);
//			printf("%d\n",Add(x,y));
//			break;
//		case 2:
//			printf("请输入两个数：>");
//		scanf("%d%d",&x,&y);
//			printf("%d\n",Sub(x,y));
//			break;
//		case 3:
//			printf("请输入两个数：>");
//		scanf("%d%d",&x,&y);
//			printf("%d\n",Mul(x,y));
//			break;
//		case 4:
//			printf("请输入两个数：>");
//		scanf("%d%d",&x,&y);
//			printf("%d\n",Div(x,y));
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("错误，请重新输入\n");
//			break;
//		}
//
//	}while(input);
//
//
//	return 0;
//}


//int main()
//{
//	int input=0;
//	int x=0;
//	int y=0;
//	//int (*pArr[5])(int ,int)={0,Add,Sub,Mul,Div};
//	int (*pfArr[])(int ,int)={0,Add,Sub,Mul,Div,XOR};
//	do
//	{
//		menu();
//		printf("请选择：>");
//		scanf("%d",&input);
//		if(input>=1&&input<=5)
//		{
//			printf("请输入两个数：>");
//			scanf("%d%d",&x,&y);
//			printf("%d\n",pfArr[input](x,y));
//
//		}else if(input==0)
//		{
//			printf("退出\n");
//		}else
//		{
//			printf("错误，请重新输入\n");
//		}
//
//	}while(input);

//	return 0;
//}




//指向函数指针数组的指针

//int main()
//{
//	int arr[10]={0};
//	int(*p)[10]=&arr;//取出数组的地址
//	int(*pf)(int,int);//函数指针
//	
//	int(*pfArr[4])(int,int);//pfArr是一个数组-函数指针的数组
//	//ppfArr是一个指向[函数指针数组]的一个指针
//	int(*(*ppfArr)[4])(int,int)=&pfArr;//
//	//
//	//ppfArr是一个数组指针，指针指向的数组有4个元素
//	//指向的数组的每个元素类型是一个函数指针int(*)(int,int)
//
//	return 0;
//}





//回调函数

//void Calc(int(*pf)(int,int))
//{
//	int x=0;
//	int y=0;
//	printf("请输入两个数：>");
//	scanf("%d%d",&x,&y);
//	printf("%d\n",pf(x,y));
//}
//int main()
//{
//	int input=0;
//	int x=0;
//	int y=0;
//	do
//	{
//
//		menu();
//		printf("请选择：>");
//		scanf("%d",&input);
//		switch(input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("错误，请重新输入\n");
//			break;
//		}
//
//	}while(input);
//
//
//	return 0;
//}




