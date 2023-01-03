
//31.Write a C program to input angles of a triangle and check whether triangle is valid or not.
#include<stdio.h>

void main()
{
	int a1,a2,a3,s;
	printf("enter the angles:\n");
	scanf("%d%d%d",&a1,&a2,&a3);
	s=a1+a2+a3;
	if((a1>0) && (a2>0) && (a3>0))
	{
		if(s==180)
		{
			printf("traingle is valid\n");
		}
		else
		
			printf("traingle is not valid\n");
	
	}
	else
		printf("the input angles are not valid\n");
}

