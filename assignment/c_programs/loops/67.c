/****************************************/ /*************************************

	67.Write a C program to enter any number and print its reverse.

**************************************/ /*************************************/

#include<stdio.h>
void main()
{
	int n,reverse=0,remainder;
	printf("enter an integer:");
	scanf("%d",&n);

	while(n!=0)
	{
		remainder=n%10;
		reverse=reverse*10+remainder;
		n=n/10;
	}
	printf("reverse number =%d\n",reverse);
}

