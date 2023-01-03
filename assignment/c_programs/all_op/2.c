/**********************************************/ /****************************************

	2.Write a C program to enter two numbers and perform all arithmetic operations.


************************************************/ /**************************************/


#include<stdio.h>
void main()
{
	int a,b,sum,sub,mul,div,mod;
	printf("enter values of a and b:\n");
	scanf("%d%d",&a,&b);
	sum=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	mod=a%b;
	printf("sum of two numbers =%d\n",sum);
	printf("sub of two numbers =%d\n",sub);
	printf("mul of two numbers =%d,\n",mul);
	printf("div of two numbers =%d\n",div);
	printf("mod of two numbers =%d\n",mod);
}
