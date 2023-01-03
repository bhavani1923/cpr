//33.check wether the traingle is eqilateral or isosceles,or scalen.
#include<stdio.h>

void main()
{
	int a,b,c;
	printf("enter the triangle sides:\n");
	scanf("%d%d%d",&a,&b,&c);
	if((a==b) && (b==c) && (c==a))
	{
		printf("the triangle equilateral triangle\n");
	}
	else
		if((a==b) || (b==c) || (c==a))
		{
			printf("the traingle is isosceles traingle\n");
		}
		else
			if(a!=b!=c!=a)
			{
				printf("the traingle is salan traingle\n");
			}
			else
				printf("not a traingle\n");

				
}

