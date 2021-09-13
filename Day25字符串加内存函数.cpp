#include<stdio.h>
#include<string.h>
#include<assert.h>


//无长度限制
//my_strlen计算字符长度
//1，计数器法
//int my_strlen(const char* str)
//{
//	int count=0;
//	assert(str!=NULL);
//	while(*str!='\0')//同while(*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//2，递归
//int my_strlen(char* p)
//{
//	if(*p!='\0')
//		return 1+my_strlen(p+1);
//	else
//		return 0;
//}
//3，指针减指针



//int main()
//{
//	int len=my_strlen("abcdef");
//	printf("%d\n",len);
//
//	//if(strlen("abc")-strlen("abcdef")>0)//strlen返回无符号整型
//	//{
//	//	printf("hehe\n");
//	//}
//	//else
//	//{
//	//	printf("haha\n");
//	//}
//
//	return 0;
//}





//my_strcpy字符串复制
//char* my_strcpy(char* dest,const char* src)
//{
//	assert(dest!=NULL);
//	assert(src!=NULL);
//	char* ret=dest;
//	//拷贝src指向的字符串到dest指向的空间，包含'\0'
//	while(*dest++=*src++)
//	{
//		;
//	}
//	//返回目的空间的起始地址
//	return ret;
//}
//
//int main()
//{
//	char arr1[]="abcdef";
//	char arr2[]="bit";
//	my_strcpy(arr1,arr2);
//	printf("%s\n",arr1);
//	return 0;
//}







//my_srtcat字符串追加

//char* my_strcat(char* dest,char* src)
//{
//	char* ret=dest;
//	assert(dest!=NULL);
//	assert(src!=NULL);
//	//找到'\0'
//	while(*dest!='\0')
//	{
//		dest++;
//	}
//	//追加
//	while(*dest++=*src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[30]="hello";
//	char arr2[]="world";
//	my_strcat(arr1,arr2);
//	printf("%s\n",arr1);
//	return 0;
//}






//my_strcmp字符串比较

//int my_strcmp(const char* str1,const char* str2)
//{
//	assert(str1 && str2);
//	while(*str1==*str2)
//	{
//		if(*str1=='\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	if(*str1>*str2)
//	{
//		return 1;
//	}else
//	{
//		return -1;
//	}
//}

//int my_strcmp(const char* str1,const char* str2)
//{
//	assert(str1 && str2);
//	while(*str1==*str2)
//	{
//		if(*str1=='\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	return (*str1-*str2);

//}
//
//int main()
//{
//	char* p1="abc";
//	char* p2="abcd";
//	int ret=my_strcmp(p1,p2);
//	printf("ret=%d\n",ret);
//	return 0;
//}


//有长度限制
//my_strncpy
//int main()
//{
//	char arr1[10]="abcdefg";
//	char arr2[]="bit";
//	strncpy(arr1,arr2,6);//指定长度复制
//	printf("%s\n",arr1);
//	return 0;
//}


//int main()
//{
//	char arr1[30]="abcdefg\0xxxxxxx";
//	char arr2[]="bit";
//	strncat(arr1,arr2,6);//指定长度追加
//	printf("%s\n",arr1);
//	return 0;
//}





//int main()
//{
//	const char* p1="abcdefg";
//	char* p2="abcbit";
//	int ret=strncmp(p1,p2,3);//指定长度比较
//	printf("%d\n",ret);
//	return 0;
//}





//strstr查找字符串

//char* my_strstr(const char* p1,const char* p2)
//{
//	//assert(p1 && p2);
//	assert(p1!=NULL);
//	assert(p2!=NULL);
//	char* s1=(char*)p1;
//	char* s2=(char*)p2;
//	char* cur=(char*)p1;
//	if(*p2=='\0')
//	{
//		return (char*)p1;
//	}
//	while(*cur)
//	{
//		s1=cur;
//		s2=(char*)p2;
//		while(*s1!='\0' && *s2!='\0' && *s1==*s2)//(*s1 && *s2 && *s1==*s2)
//		{
//			s1++;
//			s2++;
//		}
//		if(*s2=='\0')
//		{
//			return cur;找到了
//		}
//		if(*s1=='\0')
//		{
//			return NULL;
//		}
//		cur++;
//	}
//	return NULL;//找不到
//}
//int main()
//{
//	char* p1="abcdefg";
//	char* p2="def";
//	char* ret=my_strstr(p1,p2);
//	if(ret==NULL)
//		printf("不存在\n");
//	else
//		printf("%s\n",ret);
//	return 0;
//}




//strtok//切分
//int main()
//{
//	char arr[]="1234@qq.com";
//	char* p="@.";
//	char buf[1024];
//	strcpy(buf,arr);
//
//	//切割字符串
//	/*char* ret=strtok(buf,p);
//	printf("%s\n",ret);
//
//	ret=strtok(NULL,p);
//	printf("%s\n",ret);
//
//	ret=strtok(NULL,p);
//	printf("%s\n",ret);
//*/
//
//	char* ret=NULL;
//	for(ret=strtok(buf,p);ret!=NULL;ret=strtok(NULL,p))
//	{
//		printf("%s\n",ret);
//	}
//	return 0;
//}



//strerror错误信息

//errno一个全局的错误码变量
//当c语言的库函数执行过程中，发生错误，会把对应的错误码赋值到errno中
//int main()
//{
//	/*char* str=strerror(2);
//	printf("%s\n",str);*/
//
//	FILE* pf=fopen("text.c","r");
//	if(pf==NULL)
//	{
//		printf("%s\n",strerror(errno));
//	}
//	else
//	{
//		printf("open file success\n");
//	}
//	return 0;
//}

#include<ctype.h>

//int main()
//{
//	/*char ch='r';
//	int ret=islower(ch);
//	printf("%d\n",ret);*/
//
//	/*char ch=tolower('Q');//大转小
//	putchar(ch);*/
//
//	/*char ch=toupper('q');//小转大
//	putchar(ch);*/
//
//
//	char arr[]="I Am A Student";
//	int i=0;
//	while(arr[i])
//	{
//		if(isupper(arr[i]))
//		{
//			arr[i]=tolower(arr[i]);
//		}
//		i++;
//	}
//	printf("%s\n",arr);
//
//	return 0;
//}



//memcpy内存拷贝

//struct s
//{
//	char name[20];
//	int age;
//};


//void* my_memcpy(void* dest,const void* src,size_t num)
//{
//	void* ret=dest;
//	assert(dest!=NULL);
//	assert(src!=NULL);
//	while(num--)//*((char*)dest)++=*((char*)src)++//
//	{
//		*(char*)dest=*(char*)src;
//		dest=(char*)dest+1;
//		src=(char*)src+1;
//	}
//	return ret;
//}
//int main()
//{
//	/*int arr1[]={1,2,3,4,5,6};
//	int arr2[7]={0};
//	memcpy(arr2,arr1,sizeof(arr1));*/
//	struct s arr3[]={{"张三",20},{"李四",30}};
//	struct s arr4[3]={0};
//	//memcpy(arr4,arr3,sizeof(arr3));
//	my_memcpy(arr4,arr3,sizeof(arr3));
//
//
//	return 0;
//}




//memmove处理内存重叠拷贝
//
//void* my_memmove(void* dest,const void* src,size_t num)
//{
//	void* ret=dest;
//	assert(dest!=NULL);
//	assert(src!=NULL);
//	if(dest>src)
//	{
//		while(num--)//后向前
//		{
//			*((char*)dest+num)=*((char*)src+num);
//		}
//	}else//(dest<src || dest>src+num)
//	{
//		while(num--)//*((char*)dest)++=*((char*)src)++  ?//前向后
//		{
//			*(char*)dest=*(char*)src;
//			dest=(char*)dest+1;
//			src=(char*)src+1;
//		}
//	}
//	
//	return ret;
//
//}
//int main()
//{
//	int arr1[]={1,2,3,4,5,6,7,8,9,10};
//	int arr2[17]={0};
//	my_memmove(arr1+2,arr1,20);
//	return 0;
//}





//memcmp内存比较
//
//int main()
//{
//	int arr1[]={1,2,3,4,5};
//	int arr2[]={1,2,5,4,3};
//	int ret=memcmp(arr1,arr2,9);//9-比较字节个数
//	printf("%d\n",ret);
//
//	return 0;
//}




//memset内存设置

//int main()
//{
//	char arr[10]="";
//	memset(arr,'#',10);//目的地，内容，字节个数
//
//	return 0;
//}





