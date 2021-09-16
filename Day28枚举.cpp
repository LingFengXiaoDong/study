#include<stdio.h>

//与define不同，方便调试，开一次定义多个常量，有类型检查（严谨），防止命名污染（封装）
//枚举类型
//enum Sex
//{
//	//枚举的可能值-常量
//	MALE,
//	FEMALE=9,//可设定
//	SECRET
//};
//
//enum Color
//{
//	RED=2,//0
//	GREEN,//1
//	BLUE//2
//};
//
//int main()
//{
//	enum Sex s=MALE;
//	enum Color c=BLUE;
//
//	//enum Color c=2;//类型不符
//
//	printf("%d %d %d\n",RED,GREEN,BLUE);
//	printf("%d %d %d\n",MALE,FEMALE,SECRET);
//
//	return 0;
//}




//enum类型的大小
//
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	enum Sex s=MALE;
//	printf("%d\n",sizeof(s));//大小=一个整型
//	return 0;
//}
