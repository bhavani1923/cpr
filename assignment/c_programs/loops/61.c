//61.Write a C program to count number of digits in any number.

#include<stdio.h>
void main()
{
	int n,a;
	a=0;
	printf("enter number:\n");
	scanf("%d",&n);
	/*while(n!=0)
	{
		n=n/10;	
		a++;
	}

	printf("the number of digits in an integer =%d\n",a);
}*/



	do
	{
		a++;
		n=n/10;
	}
	while(n!=0);
		printf("the number of digits in an integer=%d\n",a);
}
