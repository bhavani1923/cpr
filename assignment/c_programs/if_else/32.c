//32.Write a C program to input all sides of a triangle and check whether triangle is valid or not.


#include<stdio.h>
void main()
{
	int s1,s2,s3,s;
	printf("enter sides of the traingle:\n");
	scanf("%d%d%d",&s1,&s2,&s3);
	if((s1+s2>s3) && (s2+s3>s1) && (s1+s3>s2))
		
	{
		
		printf("sides are valid for traingle\n");
	}
	else
	{
		printf("given sides are not valid for given traigle\n");
	}
}
