#include <stdio.h>
#include <string.h>
#include <stdlib.h>




//#include <stdio.h>
//
//int main()
//{
//    char buf[]="zbaebabazy";
//    char buf_1[]="abz";
//    int num=1,num_1=1,num_2=1;
//    
//    num=buf_1[0]*buf_1[1];
//    num_2=buf_1[1]*buf_1[2];
//    for(int i=0;i<10;i++)
//    {
//        num_1=1;
//        for(int j=i;j<i+3;j++)
//        {
//            if(i+3>10)
//                break;
//            num_1*=buf[j];
//        }
//        if( (num_1% num ==0) && (num_1%num_2 ==0) )
//        {
//            for(int j=i;j<i+3;j++)
//                printf("%c",buf[j]);
//            printf("\n");
//        }
//    }
//    return 0;
//}
//int main()
//{
//	char a[51]={0};
//	printf("������\n");
//	scanf("%s",&a);
//	int i=strlen(a);
//	char k[50]={0};
//	int j;
//	for(j=0;j<i;j++)
//	{
//		if((a[j]>='0')&&(a[j]<='9'))
//		{
//			k[j]=a[j];
//
//		}else
//		{
//			printf("��������������\n");
//			break;
//		}
//	}
//	if(strlen(k)==strlen(a))
//	{
//		printf("%s",k);
//	}
//	return 0;
//}



//void Init(int arr[],int sz)
//{
//	int i=0;
//	for(i=0;i<sz;i++)
//	{
//		arr[i]=0;
//	}
//}
//void Print(int arr[],int sz)
//{
//	int i=0;
//	
//	for(i=0;i<sz;i++)
//	{
//		printf("%d  ",arr[i]);
//	}
//	printf("\n");
//}
//void Reverse(int arr[],int sz)
//{
//	int left=0;
//	int right=sz-1;
//	while(left<right)
//	{
//	int tmp=arr[left];
//	arr[left]=arr[right];
//	arr[right]=tmp;
//	left++;
//	right--;
//	}
//}

//int  main()////����λ��
//{
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	//Init(arr,sz);//��ʼ����
//	Print(arr,sz);
//	Reverse(arr,sz);
//	Print(arr,sz);
//
//	return 0;
//}





//
//int main()//����Ԫ��
//{
//	int arr1[]={1,3,5,7,9};
//	int arr2[]={2,4,6,8,10};
//	int tmp=0;
//	int i=0;
//	int sz=sizeof(arr1)/sizeof(arr1[0]);
//	for(i=0;i<sz;i++)
//	{
//		//printf("%d  ",arr1[i]);
//		tmp=arr1[i];
//		arr1[i]=arr2[i];
//		arr2[i]=tmp;
//		printf("%d  ",arr1[i]);
//	}
//
//	return 0;
//}




//int count_bit_one(unsigned int n)
//{
//	int count=0;
//	while(n)
//	{
//		if(n%2==1)
//		{
//			count++;
//		}
//		n=n/2;
//	}
//	return count;
//}


//int count_bit_one(int n)
//{
//	int count=0;
//	int i=0;
//	for(i=0;i<32;i++)
//	{
//		if(((n>>i)&1)==1)
//		{
//			count++;
//		}
//	}
//	return count;
//}


//int count_bit_one(int n)
//{
//	int count=0;
//	while(n)
//	{
//		n=n&(n-1);
//		count++;
//	}
//	return count;
//}



//int main()//������ƣ����룩��ʾ�м���1
//{
//	
//	int a=0;
//	printf("����������\n");
//	scanf("%d",&a);
//	//������ƣ����룩��ʾ�м���1
//	int count=0;
//	count=count_bit_one(a);
//	printf("count=%d\n",count);
//
//	//system("pause");//system�⺯��-ִ��ϵͳ����-pause����ͣ��
//
//
//	return 0;
//}




//int main()//��������в�ͬλ�ĸ���
//{
//	int m=0;
//	int n=0;
//	printf("����������\n");
//	scanf("%d%d",&m,&n);
//	int k=m^n;
//	int count=0;
//	while(k)
//	{
//		k=k&(k-1);
//		count++;
//	}
//	printf("count=%d\n",count);
//	
//	return 0;
//}


//void Print(int m)
//{
//	int i=0;
//	printf("���� \n");
//	for(i=30;i>=0;i-=2)
//	{
//		printf("%d ",(m>>i)&1);
//	}
//	printf("\n");
//	printf("ż�� \n");
//	for(i=31;i>=1;i-=2)
//	{
//		printf("%d ",(m>>i)&1);
//	}
//}
//
//int main()//�ֱ��������������λ��ż��λ
//{
//	int m=0;
//	printf("����������\n");
//	scanf("%d",&m);
//	Print(m);
//	return 0;
//}


//
//void Print(int* p,int sz)
//{
//	int i=0;
//	for(i=0;i<sz;i++)
//	{
//		printf("%d ",*(p+i));
//
//	}
//}
//
//int main()//ָ���ӡ����
//{
//	int arr[]={1,2,3,4,5,6,7,8,9};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	Print(arr,sz);
//
//	return 0;
//}



//void print_table(int n)
//{
//	int i=0;
//	int j=0;
//	for(i=1;i<=n;i++)
//	{
//		for(j=1;j<=i;j++)
//		{
//			printf("%d*%d=%d\t",i,j,i*j);
//		}
//		printf("\n");
//
//	}
//
//}
//
//int main()
//{
//	int n=0;
//	printf("������Ҫ��ӡ�ĳ˷��ھ���");
//	scanf("%d",&n);
//	print_table(n);
//	return 0;
//}




//int my_strlen(char* str)
//{
//	int count=0;
//	while(*str!='\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//void reverse_string(char arr[])
//{
//	int left=0;
//	int right=my_strlen(arr)-1;
//
//	while(left<right)
//	{
//		int tmp=arr[left];
//		arr[left]=arr[right];
//		arr[right]=tmp;
//		left++;
//		right--;
//	}
//}
//
//
//int main()//�ַ�����������
//{
//	char arr[]="asdfghjkl";//lkjhgfdsa
//	reverse_string(arr);
//	printf("%s\n",arr);
//	return 0;
//}


//
//int my_strlen(char* str)
//{
//	int count=0;
//	while(*str!='\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//void reverse_string(char* arr)
//{
//	char tmp=arr[0];//1
//	int len= my_strlen(arr);//����
//	arr[0]=arr[len-1];//β//2
//	arr[len-1]='\0';//��������//3
//	if(my_strlen(arr+1)>=2)//�ж��м��ַ�����//3
//	{
//		reverse_string(arr+1);//�ݹ�/3
//	}
//	arr[len-1]=tmp;//�������ȥ//4
//}
//
//int main()//�ַ����������򣨵ݹ鷨��
//{
//	char arr[]="asdfghjkl";//lkjhgfdsa
//	reverse_string(arr);
//	printf("%s\n",arr);
//	return 0;
//}



//int DigitSum(int num)
//{
//	if(num>9)
//	{
//		return DigitSum(num/10)+num%10;
//	}else
//	{
//		return 1;
//	}
//
//}
//
//int main()
//{
//	unsigned int num=0;
//	scanf("%d",&num);
//	int ret=DigitSum(num);
//	printf("ret=%d",ret);
//
//	return 0;
//}


//double Pow(int n,int k)//n^k=n*n(k-1)
//{
//	if(k<0)
//	{
//		return (1.0/(Pow(n,-k)));
//	}
//	else if(k==0)
//	{
//		return 1;
//	}else
//	{
//		return n*Pow(n,k-1);
//	}
//}
//
//
//int main()//n��k�η�
//{
//	int n=0;
//	int k=0;
//	scanf("%d%d",&n,&k);
//	double ret=Pow(n,k);
//	printf("ret=%lf",ret);
//
//	return 0;
//}