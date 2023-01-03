/**********************************************/ /************************************

	write a c-program to write maximum of  4 mnumbers 

*********************************************/ /*************************************/

#include<stdio.h>
void main()
{
	int a,b,c,d;
	printf("enter the four number:\n");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>b && a>c && a>d)
	{
	    printf("a is maximum=%d\n",a);
	}
	else if(b>c&&b>d)
	{
		printf("b is maximum=%d\n",b);
	}
	else if(c>d)
	{
		printf("c is maximum=%d\n",c);
	}
	else
	{
		printf("d is maximum=%d\n",d);
	}
}

						  
