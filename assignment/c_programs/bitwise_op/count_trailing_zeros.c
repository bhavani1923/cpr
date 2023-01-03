 /*******************117.Write a C program to count trailing zeros in a binary number. ************************/



#include<stdio.h>
void main()
{
	int n,count=0;
	printf("enter the number: ");
	scanf("%d",&n);
	while(!(n&1))
	{
		count++;
		n>>=1;
	}
	printf("total number of trailing zero's = %d",count);
}

