#include<stdio.h>
void main()
{
	int r,c,s=1;
	for(r=1;r<=6;r++)
	{
		for(c=1;c<=6;c++)
		{
			if(r==1 || r==6 || c==1 || (r==3 && (c==3 || c==4)) || (r==2 && c==6) || (r==4 && c==5) || (r==5 && c==6))
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}
