#include<stdio.h>




////�ṹ�崫��
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
////��ֵ
//void Printf1(struct s tmp)
//{
//	printf("%d %c %lf\n",tmp.a,tmp.b,tmp.c);
//
//}
//
////��ַ������
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





//λ��-������λ


//struct s
//{
//	int a:2;//2bit
//	int b:5;//5������λ
//	int c:10;//10
//	int d:30;
//
//};
////47bit-6���ֽ�-48bit��1�ֽ�8bit
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
//	char b:4;//5������λ
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