#include<stdio.h>


//����һ���ṹ������
//����һ��ѧ�����ͣ�������ѧ������(����)
//struct stu
//{
//	//��Ա������ѧ������-����-�绰-�Ա�-����
//	char name[20];
//	char tele[12];
//	char sex[10];
//	int age;
//
//}s4,s5,s6;
//
//struct stu s3;//s3,s4,s5,s6ȫ�ֱ���
//int main()
//{
//	struct stu s1;
//	struct stu s2;
//
//	return 0;
//}



//�����ṹ������
//struct
//{
//	char a;
//	int x;
//}x;
//
//
//struct 
//{
//	char a;
//	int x;
//}* p;
//
//int main()
//{
//	p=&x;//�����ṹ�����Ͳ�ͬ�����Ϸ�
//	return 0;
//}




//�ṹ��������
//struct Node
//{
//	int data;//������
//	struct Node* next;//ָ����
//};
//
//int main()
//{
//
//	return 0;
//}




//������
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//
//}Node;
//
//int main()
//{
//	struct Node n1;
//	Node n2;
//	return 0;
//}





//�ṹ���ʼ��
//struct T
//{
//	double weight;
//	short age;
//};
//
//struct s
//{
//	char c;
//	struct T st;
//	int a;
//	double d;
//	char arr[20];
//};
//int main()
//{
//	//struct s c={'c',100,3.14,"hello bit"};
//	struct s c={'c',{55.6,30},100,3.14,"hello bit"};
//	printf("%c %d %lf %s\n",c.c,c.a,c.d,c.arr);
//	printf("%lf\n",c.st.weight);
//
//	return 0;
//}





//�ṹ���ڴ����

//vcĬ�϶�������8
//struct s1
//{
//	char c1;
//	int a;
//	char c2;
//
//};
//
//struct s2//����������
//{
//	char c1;//�ÿռ�С�ķ�һ��ɽ�ʡ�ռ�
//	char c2;
//	int a;
//};
//
//struct s3
//{
//	double c1;
//	char c2;
//	int a;
//};
//
//struct s4//Ƕ�׶���Ƕ��������
//{
//	
//	char c2;
//	struct s3 a3;
//	double c1;
//};
////gcc��Ĭ�϶�����
//int main()
//{
//	struct s1 a1={0};
//	printf("%d\n",sizeof(a1));
//	struct s2 a2={0};
//	printf("%d\n",sizeof(a2));
//	struct s3 a3={0};
//	printf("%d\n",sizeof(a3));
//	struct s4 a4={0};
//	printf("%d\n",sizeof(a4));
//
//	return 0;
//}



//�޸�Ĭ�϶�����
//Ԥ����ָ��
//#pragma pack(4)//����Ĭ�϶�����Ϊ4
//
//struct s{
//	char c1;
//	double d;
//
//};
//
//#pragma pack()//ȡ�����õ�Ĭ�϶�����
//
//int main()
//{
//	struct s s1={0};
//	printf("%d\n",sizeof(s1));
//	return 0;
//}






//����ṹ���Ա�������ʼλ�õ�ƫ����
//offsetof

//#include<stddef.h>
//
//struct S
//{
//	char a;
//	int b;
//	double c;
//};
//
//int main()
//{
//	
//	printf("%d\n",offsetof(struct S,a));
//	printf("%d\n",offsetof(struct S,b));
//	printf("%d\n",offsetof(struct S,c));
//	return 0;
//}