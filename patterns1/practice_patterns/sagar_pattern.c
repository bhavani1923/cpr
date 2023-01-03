#include<stdio.h>
void main()
{
	int r,c,s=1;
	for(r=1;r<=5;r++)
	{
		for(c=1;c<=5;c++)
		{
			if(r==1 || r==5 || r==3 || (r==2 && c==1) || (c==5 && r==4) )
				printf("s");
			else
				printf(" ");
		}
		for(s=1;s<=3;s++)
		{
			printf(" ");
		}
		for(c=1;c<=5;c++)
		{
			if(r==1 || r==3 || c==1 || c==5)
				printf("a");
			else
				printf(" ");
		}
		for(s=1;s<=3;s++)
		{
			printf(" ");
		}
		for(c=1;c<=5;c++)
		{
			if(r==1 || c==1 || r==5 || (r==3 && (c==3 || c==4 || c==5)) || (r==4 && c==5))
				printf("g");
			else
				printf(" ");
		}
		for(s=1;s<=3;s++)
		{
			printf(" ");
		}
		for(c=1;c<=5;c++)
		{
			if(r==1 || r==3 || c==1 || c==5)
				printf("a");
			else
				printf(" ");
		}
		for(s=1;s<=3;s++)
		{
			printf(" ");
		}
		for(c=1;c<=5;c++)
		{
			if(c==1 || r==1 || r==3 || (r==2 && c==5) || (r==4 && c==3) || (r==5 && (c==4 || c==5)))
					printf("r");
			else
				printf(" ");
		}
		printf("\n");
	}
	
}
