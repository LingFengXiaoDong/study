#include <stdio.h>
#include <assert.h>


//����һ��ѧ��

//struct Stu//sturct �ṹ��ؼ���  Stu�ṹ���ǩ  sturct Stu�ṹ������
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;//s1,s2,s3������ȫ�ֵĽṹ�����

//typedef struct Stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;//struct Stu������ΪStu(�����ض���)
//
//
//int main()
//{
//	struct Stu s;//�ֲ�����
//	Stu s2;
//	return 0;
//}


//typedef struct Stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//
//int main()
//{
//	struct Stu s={"����",18,"1234567890","��"};//��ʼ��
//	Stu s2={"����",20,"13245678950","Ů"};
//	return 0;
//}


//struct s
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//
//struct T
//{
//	char ch[10];
//	struct s s;
//	char* pc;
//};
//
//int main()
//{
//	char arr[]="hello";
//	struct T t={"hehe",{100,'q',"hello world",3.14},arr};
//	printf ("%s\n",t.ch);//hehe
//	printf ("%s\n",t.s.arr);//hello world
//	printf ("%lf\n",t.s.d);
//	printf ("%s\n",t.pc);
//	return 0;
//}


//�ṹ�崫��

//typedef struct Stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//
//void Print1(Stu tmp)
//{
//	printf("name: %s\n",tmp.name);
//	printf("age: %d\n",tmp.age);
//	printf("tele: %s\n",tmp.tele);
//	printf("sex: %s\n",tmp.sex);
//}
//
//void Print2(Stu* ps)
//{
//	printf("name: %s\n",ps->name);
//	printf("age: %d\n",ps->age);
//	printf("tele: %s\n",ps->tele);
//	printf("sex: %s\n",ps->sex);
//}
//
//int main()
//{
//	struct Stu s={"����",18,"1234567890","��"};
//	Stu s2={"����",20,"13245678950","Ů"};
//	Print1(s);
//	Print2(&s2);
//	return 0;
//}



//int main()
//{
//	int i=0;
//	int sum=0;
//	int n=0;
//	int ret=1;
//	scanf("%d",&n);
//	for(i=1;i<=n;i++)
//	{
//		int j=0;
//		ret=1;
//		for(j=1;j<=i;j++)
//		{
//			ret*=j;
//		}
//		sum+=ret;
//	}
//	printf("%d\n",sum);
//	return 0;
//}

//
//int main()
//{
//	int i=0;
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	for(i=0;i<=11;i++)
//	{
//		printf("he\n");
//		arr[i]=0;
//	}
//	return 0;
//}





//ģ��strcpy
//void my_strcpy(char* dest,char* src)
//{
//	while(*src!='\0')
//	{
//	*dest=*src;
//	src++;
//	dest++;
//	}
//	*dest=*src;
//}


//void my_strcpy(char* dest,char* src)
//{
//	while(*dest++=*src++)
//	{
//		;
//	}
//
//}

//void my_strcpy(char* dest,char* src)
//{
//	if(dest!=NULL&&src!=NULL)
//	{
//		while(*dest++=*src++)
//		{
//			;
//		}
//	}
//}

//void my_strcpy(char* dest,char* src)
//{
//	assert(dest!=NULL);//����
//	assert(src!=NULL);//����
//	while(*dest++=*src++)
//	{
//		;
//	}
//}

//void my_strcpy(char* dest,const char* src)//const�����Բ��ܱ��ı�
//{
//	assert(dest!=NULL);//����
//	assert(src!=NULL);//����
//	while(*dest++=*src++)
//	{
//		;
//	}
//}
//

//int main()
//{
//	int num=0;
//	int n=100;
//	//const����ָ�������*���ʱ�����ε���*p��Ҳ����˵������ͨ��p���ı�*p��num����ֵ
//	const int* p=&num;
//	*p=20;
//	//const����ָ�������*�ұ�ʱ�����ε���ָ�����p����p���ܱ��ı�
//	int* const p=&num;
//	p=&n;
//	//�����ܱ�
//	const int* const p=&num;
//	printf("%d\n",num);
//
//	return 0;
//}


//char* my_strcpy(char* dest,const char* src)//const�����Բ��ܱ��ı�
//{
//	char* ret=dest;
//	assert(dest!=NULL);//����
//	assert(src!=NULL);//����
//	//��srcָ����ַ�������destָ��Ŀռ䣬����'\0'�ַ�
//	while(*dest++=*src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[]="###############";
//	char arr2[]="bit";
//	
//	printf("%s\n",my_strcpy(arr1,arr2));
//
//	return 0;
//}



int my_strlen(const char* str)
{
	assert(str!=NULL);
	int count=0;
	while(*str!='\0')
	{
		count++;
		str++;
	}
	return count;
}

int main()
{
	char arr[]="abcdef";
	int len=my_strlen(arr);
	printf("%d\n",len);
	return 0;
}