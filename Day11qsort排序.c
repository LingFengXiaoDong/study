#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//int Add(int x,int y)
//{
//	return x+y;
//}
//int main()
//{
//	//ָ������
//	//int* arr[10];
//	//����ָ��
//	//int*(*pa)[10]=&arr;
//	//����ָ��
//	int(*pAdd)(int,int)=Add;//&Add
//	//int sum=(*pAdd)(1,2);
//	//int sum=pAdd(1,2);
//	//		//Add(1,2);
//	//printf("%d\n",sum);
//	//����ָ�������
//	int(*pArr[10])(int,int)={Add};
//	//ָ����ָ��������ָ��
//	int(*(*ppArr)[10])(int,int)=&pArr;
//
//	return 0;
//}



//void bubble_sort(int arr[],int sz)
//{
//	int i=0;
//	//����
//	for(i=0;i<sz-1;i++)
//	{
//		int j=0;
//		//һ��
//		for(j=0;j<sz-i-1;j++)
//		{
//			if(arr[j]<arr[j+1])
//			{
//				int tmp=arr[j];
//				arr[j]=arr[j+1];
//				arr[j+1]=tmp;
//			}
//		}
//	}
//}









//void* ���͵�ָ��ɽ����������͵ĵ�ַ�������ܽ����ò�����Ҳ����+-����Ϊ��֪�����ʹ�С


//int cmp_int(const void* e1,const void* e2)
//{
//	//�Ƚ���������
//	return *(int*)e1-*(int*)e2;
//}

//int main()
//{
//	int i=0;
//	int arr[10]={5,1,3,2,4,6,7,8,9,0};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	struct Stu s[3]={{"li",12},{"yang",34},{"wu",24}};
//	float f[]={1.0,3.0,5.0};
//	////bubble_sort(arr,sz);
//	
//	qsort(arr,sz,sizeof(arr[0]),cmp_int);
//	for(i=0;i<sz;i++)
//	{
//		printf("%d\n",arr[i]);
//	}
//
//	return 0;
//}




int cmp_int(const void* e1,const void* e2)
{
	//�Ƚ���������
	return *(int*)e1-*(int*)e2;
}
void test()
{
	int i=0;
	int arr[10]={5,1,3,2,4,6,7,8,9,0};
	int sz=sizeof(arr)/sizeof(arr[0]);
	qsort(arr,sz,sizeof(arr[0]),cmp_int);
	//��һ���������������������Ԫ�ص�ַ
	//�ڶ��������������������Ԫ�ظ���
	//�����������������������ÿ��Ԫ�صĴ�С-��λ���ֽ�
	//���ĸ��������Ǻ���ָ�룬�Ƚ�����Ԫ�ص����ú����ĵ�ַ-�������ʹ�����Լ�ʵ��
	//            ����ָ������������ǣ����Ƚϵģ���Ԫ�صĵ�ַ


	for(i=0;i<sz;i++)
	{
		printf("%d\n",arr[i]);
	}
}

int cmp_int2(const void* e1,const void* e2)
{
	//�Ƚ�����������
	return *(int*)e1-*(int*)e2;
}
void test2()
{
	int i=0;
	float f[]={6.0,3.0,5.0,2.0,1.0};
	int sz=sizeof(f)/sizeof(f[0]);
	qsort(f,sz,sizeof(f[0]),cmp_int2);
	for(i=0;i<sz;i++)
	{
		printf("%f\n",f[i]);
	}
}



struct Stu
{
	char mane[20];
	int age;

};
int cmp_struct_Stu_age(const void* e1,const void* e2)
{
	return ((struct Stu*)e1)->age-((struct Stu*)e2)->age;
}
int cmp_struct_Stu_mane(const void* e1,const void* e2)
{
	//�ַ����Ƚϲ���ֱ����><=�Ƚϣ�Ӧ����strcmp
	return strcmp(((struct Stu*)e1)->mane,((struct Stu*)e2)->mane);
}
void test3()
{
	int i=0;
	struct Stu s[3]={{"li",12},{"yang",34},{"wu",24}};
	int sz=sizeof(s)/sizeof(s[0]);
	//qsort(s,sz,sizeof(s[0]),cmp_struct_Stu_age);
	qsort(s,sz,sizeof(s[0]),cmp_struct_Stu_mane);
	for(i=0;i<sz;i++)
	{
		//printf("%f\n",s[i]);
	}
}


void Swap(char* buf1,char* buf2,int width)
{
	int i=0;
	for(i=0;i<width;i++)
	{
		char tmp;
		tmp=*buf1;
		*buf1=*buf2;
		*buf2=tmp;
		buf1++;
		buf2++;
	}

}
//��֪��δ���������������
//��֪��Ԫ������
void bubble_sort(void* base,int sz,int width,int(*cmp)(const void* e1,const void* e2))
{
	int i=0;
	//����
	for(i=0;i<sz-1;i++)
	{
		int j=0;
		//ÿһ��
		for(j=0;j<sz-1-i;j++)
		{
			//����Ԫ�صıȽ�
			if(cmp((char*)base+j*width,(char*)base+(j+1)*width)>0)
			{
				//����
				Swap((char*)base+j*width,(char*)base+(j+1)*width,width);
			}
		}
	}

}
void test4()
{
	int i=0;
	int arr[10]={5,1,3,2,4,6,7,8,9,0};
	int sz=sizeof(arr)/sizeof(arr[0]);
	//ʹ����֪���Լ��������ʲô���ݣ�֪����αȽϴ����������е�Ԫ��
	bubble_sort(arr,sz,sizeof(arr[0]),cmp_int);
	for(i=0;i<sz;i++)
	{
		printf("%d\n",arr[i]);
	}
}
int main()
{
	////bubble_sort(arr,sz);
	//test();
	//test2();
	//test3();
	test4();
	return 0;
}
	
	

