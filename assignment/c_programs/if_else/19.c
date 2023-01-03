//19.Write a C program to find maximum between three numbers.




#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter a and b and c values\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("a is big\n");
		}
		else
		{
			printf("c is big\n");
		}
	}
	else
	{
		if(b>c)
		{
			printf("b is big\n");
		}
		else
		{
			printf("c is big\n");
		}
	}
}
	

