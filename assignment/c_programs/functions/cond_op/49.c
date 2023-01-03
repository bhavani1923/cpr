//49.Write a C program to check whether year is leap year or not using conditional/ternary operator.



#include<stdio.h>
void main()
{
	int y,a;
	printf("enter the year:\n");
	scanf("%d",&y);
	a=((y%4==0 && y%100!=0) || (y%400==0))?printf("is leap year\n"):printf("is not leap year\n");
}
