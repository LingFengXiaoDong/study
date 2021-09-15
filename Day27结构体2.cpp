#include<stdio.h>




////结构体传参
//struct s
//{
//	int a;
//	char b;
//	double c;
//};
//
//void Init(struct s* ps)
//{
//	ps->a=100;
//	ps->b='w';
//	ps->c=3.14;
//
//}
//
////传值
//void Printf1(struct s tmp)
//{
//	printf("%d %c %lf\n",tmp.a,tmp.b,tmp.c);
//
//}
//
////传址，更好
//void Printf2(const struct s* ps)
//{
//	printf("%d %c %lf\n",ps->a,ps->b,ps->c);
//}
//
//int main()
//{
//	struct s s1={0};
//	s1.a=10;
//	Init(&s1);
//	Printf1(s1);
//	Printf2(&s1);
//
//	return 0;
//}





//位段-二进制位


//struct s
//{
//	int a:2;//2bit
//	int b:5;//5个比特位
//	int c:10;//10
//	int d:30;
//
//};
////47bit-6个字节-48bit。1字节8bit
//int main()
//{
//	struct s s1;
//	printf("%d\n",sizeof(s));
//	return 0;
//}



//
//struct s
//{
//	char a:3;//2bit
//	char b:4;//5个比特位
//	char c:5;//10
//	char d:4;
//
//};
//
//int main()
//{
//	struct s s1={0};
//	s1.a=10;
//	s1.b=20;
//	s1.c=3;
//	s1.d=4;
//	return 0;
//}