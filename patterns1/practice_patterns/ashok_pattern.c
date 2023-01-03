#include<stdio.h>
void main()
{
	int r,c,s=1;
	for(r=1;r<=5;r++)
	{
		for(c=1;c<=5;c++)
		{
			if(r==1 || r==3 || c==1 || c==5)
				printf("*");
			else
				printf(" ");
		}
		for(s=1;s<=3;s++)
		{
			printf(" ");
		}
		for(c=1;c<=5;c++)
		{
			if(r==1 || r==3 || r==5 || (r==2 && c==1) || (r==4 && c==5))
				printf("*");
			else
				printf(" ");
		}
		for(s=1;s<=3;s++)
		{
			printf(" ");
		}
		for(c=1;c<=5;c++)
		{
			if(r==3 || c==1 || c==5)
				printf("*");
			else
				printf(" ");
		}
		for(s=1;s<=3;s++)
		{
			printf(" ");
		}
		for(c=1;c<=5;c++)
		{
			if(r==1 || r==5 || c==1 || c==5)
				printf("*");
			else
				printf(" ");
		}
		for(s=1;s<=3;s++)
		{
			printf(" ");
		}
		for(c=1;c<=5;c++)
		{
			if(c==1 || (c==5 && (r==1 || r==5)) || (c==4 && (r==2 || r==4)) || (c==3 && r==3))
				printf("*");
			else
				printf(" ");
		}
				
		printf("\n");
	}
}

