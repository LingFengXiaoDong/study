#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//int Add(int x,int y)
//{
//	return x+y;
//}
//int main()
//{
//	//指针数组
//	//int* arr[10];
//	//数组指针
//	//int*(*pa)[10]=&arr;
//	//函数指针
//	int(*pAdd)(int,int)=Add;//&Add
//	//int sum=(*pAdd)(1,2);
//	//int sum=pAdd(1,2);
//	//		//Add(1,2);
//	//printf("%d\n",sum);
//	//函数指针的数组
//	int(*pArr[10])(int,int)={Add};
//	//指向函数指针的数组的指针
//	int(*(*ppArr)[10])(int,int)=&pArr;
//
//	return 0;
//}



//void bubble_sort(int arr[],int sz)
//{
//	int i=0;
//	//趟数
//	for(i=0;i<sz-1;i++)
//	{
//		int j=0;
//		//一趟
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









//void* 类型的指针可接受任意类型的地址，但不能解引用操作，也不能+-，因为不知道类型大小


//int cmp_int(const void* e1,const void* e2)
//{
//	//比较两个整型
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
	//比较两个整型
	return *(int*)e1-*(int*)e2;
}
void test()
{
	int i=0;
	int arr[10]={5,1,3,2,4,6,7,8,9,0};
	int sz=sizeof(arr)/sizeof(arr[0]);
	qsort(arr,sz,sizeof(arr[0]),cmp_int);
	//第一个参数：待排序数组的首元素地址
	//第二个参数：待排序数组的元素个数
	//第三个参数：待排序数组的每个元素的大小-单位是字节
	//第四个参数：是函数指针，比较两个元素的所用函数的地址-这个函数使用者自己实现
	//            函数指针的两个参数是：待比较的；给元素的地址


	for(i=0;i<sz;i++)
	{
		printf("%d\n",arr[i]);
	}
}

int cmp_int2(const void* e1,const void* e2)
{
	//比较两个浮点型
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
	//字符串比较不能直接用><=比较，应该用strcmp
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
//不知道未来排序的数据类型
//不知道元素类型
void bubble_sort(void* base,int sz,int width,int(*cmp)(const void* e1,const void* e2))
{
	int i=0;
	//趟数
	for(i=0;i<sz-1;i++)
	{
		int j=0;
		//每一趟
		for(j=0;j<sz-1-i;j++)
		{
			//两个元素的比较
			if(cmp((char*)base+j*width,(char*)base+(j+1)*width)>0)
			{
				//交换
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
	//使用者知道自己排序的是什么数据，知道如何比较待排序数组中的元素
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
	
	

