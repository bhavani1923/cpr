#include<stdio.h>
void main()
{
	int r,c,s=1;
	for(r=1;r<=5;r++)
	{
		for(c=1;c<=5;c++)
		{
			if(c==1 || ((r==1 || r==5) && ((c==1 || c==2 || c==3 || c==4))) || (c==5 && (r==2 || r==3 || r==4)))
				printf("D");
			else
				printf(" ");
		}
		for(s=1;s<=3;s++)
		{
			printf(" ");
		}
		for(c=1;c<=5;c++)
		{
			if(r==1 || r==3 || r==5 || c==1)
				printf("E");
			else
				printf(" ");
		}
		for(s=1;s<=3;s++)
		{
			printf(" ");
		}
		for(c=1;c<=5;c++)
		{
			if(((r==1 || r==2 || r==3) && (c==1 || c==5)) || (r==4 && (c==2 || c==4)) || (r==5 && (c==3)))
				printf("V");
			else
				printf(" ");
		}
		for(s=1;s<=3;s++)
		{
			printf(" ");
		}
		for(c=1;c<=5;c++)
		{
			if(r==1 || r==5 || c==3)
				printf("I");
			else
				printf(" ");
		}
		for(s=1;s<=3;s++)
		{
			printf(" ");
		}
		for(c=1;c<=5;c++)
		{
			if(c==1 || r==5)
				printf("L");
			else
				printf(" ");
		}
		printf("\n");
	}
}
