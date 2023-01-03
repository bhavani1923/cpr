/*********************Write a C program to get nth bit of a number.************************/



#include<stdio.h>
void main()
{
	int num,n,bit;
	printf("enter the number: ");
	scanf("%d",&num);
	printf("enter the nth bit to check (0  to 31): ");
	scanf("%d",&n);
	bit = (num>>n) & 1;
	printf("nth of bit of a number is %d",bit);
}


