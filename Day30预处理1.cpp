#include<stdio.h>
#include<string.h>
#include<errno.h>
#include<stdlib.h>



/*Ԥ����1.����ͷ�ļ�
		  2.ɾ��ע�ͣ��ÿո��滻ע��
		  3.#defind�滻
*/



//gcc -E test.c Ԥ����������.i�ļ���
//gcc -E test.c > test.i Ԥ��������������ָ���ļ�



/*����
��c���뷭��ɻ�����
1.�﷨����
2.�������
3.�ʷ�����
4.���Ż��ܣ���������ȫ�ֱ����ȣ�


*/

//gcc -S test.i����������.s�ļ�-�����룩



/*���
������ת���ɶ�����ָ��

�γɷ��ű�

*/

//gcc -c test.s ������.o�ļ�-Ŀ���ļ�-������ת���ɶ�����ָ�


/*����
�ϲ��α�
���ű�ĺϲ�
���ű���ض�λ

*/




//Ԥ�������

//int main()
//{
//	//printf("%s\n",__FILE__);//����·��+ÿ��
//	//printf("%d\n",__LINE__);//�к�
//	//printf("%s\n",__DATE__);//����
//	//printf("%s\n",__TIME__);//ʱ��
//
//	//��־�ļ�
//	//
//	FILE* pf=fopen("log.txt","w");
//	int i=0;
//	int arr[10]={0};
//	for(i=0;i<10;i++)
//	{
//		arr[i]=i;
//		fprintf(pf,"file:%s line:%d date:%s time%s i=%d\n",__FILE__,__LINE__,__DATE__,__TIME__,i);
//		printf("%s\n",__FUNCTION__);//��ӡ��������
//	}
//	fclose(pf);
//	pf=NULL;
//	for(i=0;i<10;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//
//	return 0;
//}


//int main()
//{
//	printf("%d\n",__STDC__);//linux���ԣ�����Ϊ1
//	return 0;
//}





//#define MAX 5
//int main()
//{
//	int a=MAX;
//	printf("%d",a);
//	return 0;
//}



//#define SQUARE(X) X*X
//int main()
//{
//	//int ret=SQUARE(5);
//	//printf("%d",ret);//25
//
//	//int ret=SQUARE(5+1);//=5+1*5+1
//	//printf("%d",ret);//11
//
//	int ret=SQUARE((5+1));//�������滻��
//	printf("%d",ret);//36
//
//	return 0;
//}




//#define DOUBLE(x) x+x//(x+x)
//int main()
//{
//	int a=5;
//	int ret=10*DOUBLE(a);//�������滻��
//	//ret=10*x+x=10*5+5
//	printf("%d\n",ret);
//
//
//	return 0;
//}



//     #  ��  ##
//���������ַ���

//#define PRINT(x) printf("the value of "#x" is %d\n",x)
//
//int main()
//{
//	int a=10;
//	int b=20;
//
//	PRINT(a);//printf("the value of ""a"" is %d\n",a);
//	PRINT(b);//printf("the value of ""b"" is %d\n",b);
//	return 0;
//}


//##�����ߵķ��źϳ�һ������

//#define CAT(x,y) x##y
//
//int main()
//{
//	int Class84=2021;
//	//printf("%d\n",Class84);
//	printf("%d\n",CAT(Class,84));
//	//printf("%d\n",Class##84);
//	//printf("%d\n",Class84);
//
//	return 0;
//}


//���и����õĲ���
//#define MAX(X,Y) (X>Y ? X:Y)
//int main()
//{
//	int a=10;
//	int b=11;
//
//	int max=MAX(a++,b++);
//	//int max=MAX((a++)>(b++)?(++a):(b++));
//	printf("%d\n",max);
//	printf("%d\n",a);
//	printf("%d\n",b);//b++������
//
//	return 0;
//}




//�򵥼���ĶԱ�
//int Max(int x,int y)
//{
//	return(x>y?x:y);
//}
//
//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//
//int main()
//{
//	int a=10;
//	int b=20;
//	float c=3.0f;
//	float d=4.0f;
//
//	int max=MAX(a,b);
//	//Ԥ����׶��滻��û�к������úͷ��صĿ���
//	//����Ҫ�����ض�����
//	printf("%d\n",max);
//	max=Max(a,b);
//	//��������ʱ���к������úͷ��صĿ���
//	//��Ҫ�����ض�����
//	printf("%d\n",max);
//
//	printf("%lf\n",MAX(c,d));
//	printf("%d\n",Max(c,d));
//
//	return 0;
//}


//��̫�������Ӵ��볤��
//�겻�ɵ���
//�������޹أ����Ͻ�
//������������ȼ������⣬�׳���





//#define SIZEOF(type) sizeof(type)
////��ɴ����ͣ���������
//int main()
//{
//	int ret=SIZEOF(int);
//	//int ret=sizeof(int);
//	printf("%d\n",ret);
//
//	return 0;
//}

//
//#define MALLOC(num,type) (type*)malloc(num*sizeof(type))
//
//int main()
//{
//	int* p=(int*)malloc(10*sizeof(int));
//	int* p=MALLOC(10,int);
//
//
//#undef MALLOC//�Ƴ�һ���궨��
//	return 0;
//}





