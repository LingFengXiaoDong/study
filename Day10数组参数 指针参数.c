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



//void test(int **p)//����ָ��
//{}
//int main()
//{
//	int* p;
//	int** pp=&p;
//	test(&p);
//	test(pp);
//	int *arr[10];
//	test(arr);
//	//����ָ��ɽ��ܲ�����һ��ָ�������ַ������ָ�������ָ������
//	return 0;
//}


//����ָ��-ָ������ָ��-��ź�����ַ��ָ��
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
//	//&�������ͺ����� ���Ǻ����ĵ�ַ
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
//	(*(void(*)())0);//��0ǿ������ת����void(*)() ����ָ������ - 0����һ�������ĵ�ַ
//					//����0��ַ���ĸú���
//
//	void(*signal(int,void(*)(int)))(int);
//	void(*      signal(int,void(*)(int))     )(int);
//	//������-signal   ��������-(int,void(*)(int))
//	//signal��һ���������������Ĳ�������������һ����int���ڶ����Ǻ���ָ�룬��
//	//����ָ��ָ��ĺ����Ĳ�����int������������void
//	//signal�����ķ�������Ҳ��һ������ָ�룬�ú���ָ��ָ��ĺ����Ĳ�����int������������void
//	pfun_t signal(int pfun_t);//��д
//	return 0;
//}
//typedef void(* )(int) pfun_t;//error
//typedef void(* pfun_t  )(int);//����ָ����������
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




//����ָ������-ת�Ʊ�

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
//	//ָ������
//	int* arr[5];
//	int(*pa)(int,int)=Add;
//	int(*parr[4])(int,int)={Add,Sub,Mul,Div};//����ָ�������
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




//������

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
//		printf("��ѡ��>");
//		scanf("%d",&input);
//		
//		switch(input)
//		{
//		case 1:
//			printf("��������������>");
//		scanf("%d%d",&x,&y);
//			printf("%d\n",Add(x,y));
//			break;
//		case 2:
//			printf("��������������>");
//		scanf("%d%d",&x,&y);
//			printf("%d\n",Sub(x,y));
//			break;
//		case 3:
//			printf("��������������>");
//		scanf("%d%d",&x,&y);
//			printf("%d\n",Mul(x,y));
//			break;
//		case 4:
//			printf("��������������>");
//		scanf("%d%d",&x,&y);
//			printf("%d\n",Div(x,y));
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("��������������\n");
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
//		printf("��ѡ��>");
//		scanf("%d",&input);
//		if(input>=1&&input<=5)
//		{
//			printf("��������������>");
//			scanf("%d%d",&x,&y);
//			printf("%d\n",pfArr[input](x,y));
//
//		}else if(input==0)
//		{
//			printf("�˳�\n");
//		}else
//		{
//			printf("��������������\n");
//		}
//
//	}while(input);

//	return 0;
//}




//ָ����ָ�������ָ��

//int main()
//{
//	int arr[10]={0};
//	int(*p)[10]=&arr;//ȡ������ĵ�ַ
//	int(*pf)(int,int);//����ָ��
//	
//	int(*pfArr[4])(int,int);//pfArr��һ������-����ָ�������
//	//ppfArr��һ��ָ��[����ָ������]��һ��ָ��
//	int(*(*ppfArr)[4])(int,int)=&pfArr;//
//	//
//	//ppfArr��һ������ָ�룬ָ��ָ���������4��Ԫ��
//	//ָ��������ÿ��Ԫ��������һ������ָ��int(*)(int,int)
//
//	return 0;
//}





//�ص�����

//void Calc(int(*pf)(int,int))
//{
//	int x=0;
//	int y=0;
//	printf("��������������>");
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
//		printf("��ѡ��>");
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
//			printf("�˳�\n");
//			break;
//		default:
//			printf("��������������\n");
//			break;
//		}
//
//	}while(input);
//
//
//	return 0;
//}




