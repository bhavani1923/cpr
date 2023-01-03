//62.Write a C program to find first and last digit of any number.


/*#include<stdio.h>
void main()
{
	int n,fd,ld;
	printf("enter number\n");
	scanf("%d",&n);
	ld=n%10;
	while(n>=10)
	{
		n=n/10;
	}
	fd=n;
	printf("fd=%d and ld=%d\n\n",fd,ld);

	
}*/




#include<stdio.h>
void main()
{
	int n,f,l;
	printf("enter the n number:");
	scanf("%d",&n);
	l=n%10;
	for( ;n>=10; )
		
	{
		n=n/10;
	}
	f=n;
	printf("f=%d l=%d",f,l);
}
