
//52.Write a C program to print all natural numbers in reverse (from n to 1). - using while loop.




#include<stdio.h>
void main()
{
	/*
	int a;
	printf("enter a value:\n");
	scanf("%d",&a);
	do
	{
		a--;
		printf("%d\n",a);
	}
	while(a>0);
	*/

	int i,n;
	printf("enter the number:\n");
	scanf("%i",&n);
	for(i=n; i>=1; i--)
	{
		printf("%i\t",i);
	}
	printf("\n");
}


