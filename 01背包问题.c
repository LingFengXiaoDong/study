#include<stdio.h>


//选择最大价值
int max(int a,int b)
{
	return a>b ? a:b ;
}

int main()
{
	int w[35]={0,1,2,3};//重量{0,2,3,4,7}/{0,1,2,3}
	int v[35]={0,4,5,8};//价值{0,1,3,5,9}/{0,4,5,8}
	const int m=3;//容量10/3
	const int n=3;//物品个数4/3
	int dp[n+1][m+1]={0};//dp表-未优化
	int ni[35]={0};
	//最大价值
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(j<w[i])
			{
				dp[i][j]=dp[i-1][j];
			}
			else
			{
				dp[i][j]=max(dp[i-1][j],dp[i-1][j-w[i]]+v[i]);
			}
		}
	}
	//输出dp表
	for(int k=0;k<=n;k++)
	{
		for(int l=0;l<=m;l++)
		{
			printf("%d\t",dp[k][l]);
		}
		printf("\n");
	}

	int i=n;
	int j=m;
	int k=0;
	//被选择物品下标
	// while(i)
	// {
		// if(dp[i][j]>dp[i-1][j])
		// {
			// j-=w[i];
			// printf("选择下标：%d\n",i);
		// }
		// i--;
	// }
	
	//被选择物品下标
	while(i)
	{
		if(dp[i][j]>dp[i-1][i])
		{
			j-=w[i];
			ni[k]=i;
		}
		i--;
		k++;
	}
		
	printf("最大价值：%d\n",dp[n][m]);
	
	//逆序输出下标
	for(k=n;k>=0;k--)
	{
		if(ni[k]!=0)
		printf("选择下标：%d\n",ni[k]-1);
	}

	return 0;
}





//无法使用原因未知
/* 
#include<iostream>
using namespace std;

const int n=3;
const int m=3;
int w[n+1]={0,3,1,2};//{0,1,2,3};{0,3,2,4,7};
int v[n+1]={0,8,4,5};//{0,4,5,8};{0,3,1,5,9};
int dp[m+1]={0};
int f[n+1][m+1]={0};
int Max(int a,int b)
{
	return a>b ? a:b ;
}

int knapsack()
{
	memset(dp,0,sizeof(dp));
	memset(f,0,sizeof(f));
	for(int i=1;i<=n;i++)
	{
		for(int j=m;j>=w[i];j--)
		{
			if(dp[j]<dp[j-w[i]]+v[i])
			{
				dp[j]=dp[j-w[i]]+v[i];
				f[i][j];
			}
			
		}

	}
	return dp[m];
}

void Printknapsack()
{
	int i=n;
	int j=m;
	//printf("%d\n",i);
	//cout<<"hhh"<<endl;
	while(i)
	{
		if(f[i][j]==1)//(dp[i][j]>dp[i-1][j])//dp[i][j]==Max(dp[i-1][j],dp[i-1][j-w[i]]+v[i])
		{
			printf("%d\n",i);
			//cout<<i<<"";
			j-=w[i];
		}
		i--;
		//printf("%d\n",i);
	}
	//cout<<endl;
}

void Printknapsack_recursion(int i,int j)
{
	if(i==0||j==0)
	{
		return ;
	}
	if(f[i][j]==1)
	{
		Printknapsack_recursion(i-1,j-w[i])
		printf("%d\n",i);
	}
}

int main()
{
	printf("%d\n",knapsack());

	Printknapsack();

	Printknapsack_recursion(n,m)
	
	return 0;
} */