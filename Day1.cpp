#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

/*
int main()
{
	
	char arr[21]="#########";
	memset(arr,'*',5);
	printf("%s\n",arr);
	
	

	/*
	char arr1[]="abc";
	char arr2[21]="#########";
	strcpy(arr2,arr1);
	printf("%s\n",arr2);


	/*
	char input[21]={0};
	system("shutdowm -s -t 60");
	while(1)
	{
		printf("输入：我是猪 取消关机\n请输入>:");
		scanf("%s",input);
		if (strcmp(input,"我是猪")==0)
		{
			system("shutdowm -a");
			break;
		}
	}
	
//A:
//	printf("输入：我是猪。取消关机\n请输入>:");
//	scanf("%s",input);
//	if (strcmp(input,"我是猪")==0)
//	{
//		system("shutdowm -a");
//	}else
//	{
//		goto A;
//	}


/*
void menu()
{
	
	printf("*******************\n");
	printf("**1.play   0.exit**\n");
	printf("*******************\n");
	
}

void game()
{
	int ret=0;
	int guess=0;
	//时间戳设置
	//time_ time(time_t *time)
	
	
	ret =rand()%100+1;//生成随机数
	//printf("%d\n",ret);
	while(1)
	{
		printf("猜数字\n");
		scanf("%d",&guess);
		if(guess>ret)
		{
			printf("大了\n");
		}else if(guess<ret)
		{
			printf("小了\n");
		}else
		{
			printf("对了\n");
			break;
		}
	}
	
}
	

int main()
{
	int input=0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择>:");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
			{
				game();
				break;
			}
		case 0:
			{
				printf("退出程序\n");
				break;
			}
		default:
			{
				printf("选择错误\n");
				break;
			}
			
		}
	}while(input);
*/




	/*
	int i;
	int j;
	int k;
	for (i=1;i<10;i++)
	{
		for (j=1;j<=i;j++)
		{
			k=j*i;
			printf("%d*%d=%2d\t",i,j,k);
		}
		printf("\n"); 
	}


	/*
	int i;
	int arr[]={-2,-3,-1,-4,-5,-7,-6,-8,-10,-9};
	int k=arr[0];
	int se=sizeof(arr)/sizeof(arr[0]);
	for (i=1;i<se;i++)
	{
		if (arr[i]>k)
		{
			k=arr[i];
			
		}
		 
	}
	printf("max=%d",k);



	/*
	int i;
	double sum=0.0;
	int flga=1;
	for (i=1;i<=100;i++)
	{
		sum+=flga*1.0/i;
		flga=-flga;		 
	}
	printf("sum=%lf\n",sum);



	/*
	int i;
	int count=0;
	for (i=0;i<=100;i++)
	{
		
		 if (i%10==9)
		 {
			 printf("%d ",i);
			 count++;
		 }
		 if (i/10==9)
		 {
			 printf("%d ",i);
			 count++;
		 }
	}
	printf("count=%d",count);



	/*
	int i;
	int count=0;
	for (i=0;i<=100;i++)
	{
		
		 if ((i%10==9)||(i/10==9)||(i%9==0))
		 {
			 printf("%d ",i);
			 count++;
		 }
		 
	}
	printf("count=%d",count);



	/*
	int i;
	int j;
	int count=0;
	for (i=101;i<=200;i+=2)//偶数不可能是素数，直接跳过
	{
		for(j=2;j<=sqrt((float)i);j++)//版本问题这里i要强制转换
		{
			if(i%j==0)
			{
				break;
			}
		}
		 if (j>sqrt((float)i))
		 {
			 printf("%d ",i);
			 count++;
		 }
	}
	printf("count=%d",count);


	/*
	int i;
	int j;
	int count=0;
	for (i=100;i<=200;i++)
	{
		for(j=2;j<=sqrt((float)i);j++)//版本问题这里i要强制转换
		{
			if(i%j==0)
			{
				break;
			}
		}
		 if (j>sqrt((float)i))
		 {
			 printf("%d ",i);
			 count++;
		 }
	}
	printf("count=%d",count);


	/*
	int i;
	int j;
	int count=0;
	for (i=100;i<=200;i++)
	{
		for(j=2;j<=i-1;j++)
		{
			if(i%j==0)
			{
				break;
			}
		}
		 if (j==i)
		 {
			 printf("%d ",i);
			 count++;
		 }
	}
	printf("\n%d",count);

	/*
	int y;
	int count=0;
	for (y=1000;y<=2000;y++)
	{
		if((y%4==0&&y%100!=0)||(y%400==0))
		{
			printf("%d是闰年\n",y);
			count++;
		}
		/*if(y%4==0&&y%100!=0)
		{
			printf("%d是闰年\n",y);
			count++;
		}else if(y%400==0)
		{
			printf("%d是闰年\n",y);
			count++;
		}
	}
	printf("\n%d\n",count);



	/*
	int i;
	int j;
	int k;
	printf("请输入两个数:\n");
	scanf("%d%d",&i,&j);
	while(k=i%j)
	{
		//k=i%j;
		i=j;
		j=k;
	}
	printf("%d\n",j);
	/*
	int i;
	for (i=1;i<=100;i++)
	{
		if(i%3 ==0)
		{
			printf("%d ",i);
		}
	}


	/*
	int a;
	int b;
	int c;
	
	scanf("%d%d%d",&a,&b,&c);
	if(a<b)
	{
		int t=a;
		a=b;
		b=t;
	}if(a<c)
	{
		int t=a;
		a=c;
		c=t;
	}if(b<c)
	{
		int t=b;
		b=c;
		c=t;
	}
	
	printf("%d %d %d",a,b,c);


	/*
	int i;
	char passward[21]={0};
	for(i=0;i<3;i++)
	{
		printf("请输入密码：>");
		scanf("%s",passward);
		if(strcmp("1234",passward)==0)
		{
			printf("密码正确\n");
			break;
		}else
		{
			printf("密码错误\n");
		}
		
	}
	if(i==3)
		{
			printf("三次均错误，退出\n");
		}


	/*char arr1[]={"welcome to csgo!!!!"};
	char arr2[]={"###################"};

	int left=0;
	
	//int right=sizeof(arr1)/sizeof(arr1[0])-2;
	int right=strlen(arr1)-1;
	while(left<=right)
	{
		arr2[left]=arr1[left];
		arr2[right]=arr1[right];
		printf("%s\n",arr2);
		Sleep(1000);
		system("cls");//执行系统命令函数
		left++;
		right--;
	}
	/*int arr[]={1,2,3,4,5,6,8,9,10,11};
	int left=0;
	int k=7;
	int se=sizeof(arr)/sizeof(arr[0]);
	printf("%d\n",se);
	int right=se-1;
	
	while(left<=right)
	{
		int mid =(left+right)/2;
		if(arr[mid]>k)
		{
			right=mid-1;
		}
		else if(arr[mid]<k)
		{
			left=mid+1;
		}
		else
		{
			printf("找到，下标是：%d\n",mid);
			break;
		}
	}
	if(left>right)
	{
		printf("not found!\n");
	}


	/*int arr[]={1,2,3,4,5,6,7,8,9,10};
	int k=7;
	int i=0;
	int se=sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<se;i++)
	{
		if(k==arr[i])
		{
			printf("下标是%d\n",i);
			break;
		}
	}
	if(i==se)
	{
		printf("找不到\n");
	}
	/*
	int j;
	int n=1;
	
	int sum=0;
	//scanf("%d",&c);
	for (j=1;j<=10;j++)
	{
		n=j*n;
		sum=sum+n;
	}*/

	/*int i;
	int j;
	int n;
	
	int sum=0;
	//scanf("%d",&c);
	for (j=1;j<=3;j++)
	{
		for(i=1;i<=3;i++)
		{
			n=1;
			n=i*n;
		}
		sum=sum+n;

	}*/
	

	//printf("%d ",sum);
	




	/*char c[11]={0};
	int ch;
	printf("输入密码：\n");
	scanf("%s",c);
	while(ch=getchar()!='\n')
	{
		;
	}
	printf("输入y/n：\n");
	ch=getchar();
	putchar(ch);
	*/




	/*int ch=0;
	while((ch=getchar())!=EOF)
	{
		if(ch<'0'||ch>'9')
		{
			continue;
			
		}
		putchar(ch);
	}
	*/





	/*int i;
	for(i=0;i<=100;i++)
	{
		if(i%2==1)
		{
			printf("%d ",i);
		}
	}*/


int main()
{
	int a;
	float b;
	int n=scanf("%d %f,&a,&b");
	printf("n=%d\n",b);
	return 0;
}