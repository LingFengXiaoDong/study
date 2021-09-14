#include<stdio.h>


//声明一个结构体类型
//声明一个学生类型，来创建学生变量(对象)
//struct stu
//{
//	//成员变量：学生属性-名字-电话-性别-年龄
//	char name[20];
//	char tele[12];
//	char sex[10];
//	int age;
//
//}s4,s5,s6;
//
//struct stu s3;//s3,s4,s5,s6全局变量
//int main()
//{
//	struct stu s1;
//	struct stu s2;
//
//	return 0;
//}



//匿名结构体类型
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
//	p=&x;//两个结构体类型不同，不合法
//	return 0;
//}




//结构体自引用
//struct Node
//{
//	int data;//数据域
//	struct Node* next;//指针域
//};
//
//int main()
//{
//
//	return 0;
//}




//重命名
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





//结构体初始化
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





//结构体内存对齐

//vc默认对齐数是8
//struct s1
//{
//	char c1;
//	int a;
//	char c2;
//
//};
//
//struct s2//对齐整数倍
//{
//	char c1;//让空间小的放一起可节省空间
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
//struct s4//嵌套对齐嵌套里最大的
//{
//	
//	char c2;
//	struct s3 a3;
//	double c1;
//};
////gcc无默认对齐数
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



//修改默认对齐数
//预处理指令
//#pragma pack(4)//设置默认对齐数为4
//
//struct s{
//	char c1;
//	double d;
//
//};
//
//#pragma pack()//取消设置的默认对齐数
//
//int main()
//{
//	struct s s1={0};
//	printf("%d\n",sizeof(s1));
//	return 0;
//}






//计算结构体成员相对于起始位置的偏移量
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