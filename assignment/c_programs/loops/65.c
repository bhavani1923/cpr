//65.Write a C program to calculate sum of digits of any number.


#include<stdio.h>
void main()
{
	int n,r,s=0;
	printf("enter the number=");
	scanf("%d",&n);
	do
	{
		
		r=n%10;
		s=s+r;
		n=n/10;
			
		
	}while(n!=0);
		printf("%d\n",s);
}
