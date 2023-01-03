#include<stdio.h>
void main()
{
	int r,c,s;
	for(r=1;r<=5;r++)
	{
		for(c=1;c<=5;c++)
		{
			if(c==1 || c==5 || (r==2 && (c==2 || c==4)) || (r==3 && c==3))
				printf("m");
			else
				printf(" ");
		}
		for(s=1;s<=3;s++)
		{
			printf(" ");
		}
		for(c=1;c<=5;c++)
		{
			if(c==1 || c==5 || r==5)
				printf("u");
			else
				printf(" ");
		}
		for(s=1;s<=3;s++)
		{
			printf(" ");
		}
		for(c=1;c<=5;c++)
                {
                        if(c==1 || c==5 || (r==2 && (c==2 || c==4)) || (r==3 && c==3))
                                printf("m");
                        else
                                printf(" ");
                }
                for(s=1;s<=3;s++)
                {
                        printf(" ");
                }
		for(c=1;c<=5;c++)
                {
                        if(c==1 || c==5 || (r==2 && (c==2 || c==4)) || (r==3 && c==3))
                                printf("m");
                        else
                                printf(" ");
                }
                for(s=1;s<=3;s++)
                {
                        printf(" ");
                }
		for(c=1;c<=5;c++)
		{
			if((r==1 && (c==1 || c==5)) || (r==2 && (c==2 || c==4)) || (c==3 && (r>=3)))
					printf("y");
			else
				printf(" ");
		}
		for(s=1;s<=5;s++)
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
			if(c==1 || c==5 || (r==2 && c==2) || (r==3 && c==3) || (r==4 && c==4))
				printf("n");
			else
				printf(" ");
		}
		for(s=1;s<=3;s++)
		{
			printf(" ");
		}
		for(c=1;c<=5;c++)
		{
			if(r==1 || r==5 || c==2 || c==5)
				printf("d");
			else
				printf(" ");
		}
		for(s=1;s<=5;s++)
		{
			printf(" ");
		}
		for(c=1;c<=5;c++)
		{
			if(r==1 || r==5 || c==2 || c==5)
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
			if(r==1 || r==5 || c==2 || c==5)
				printf("d");
			else
				printf(" ");
		}
		for(s=1;s<=3;s++)
		{
			printf(" ");
		}
		for(c=1;c<=5;c++)
                {
                        if(r==1 || r==5 || c==2 || c==5)
                                printf("d");
                        else
                                printf(" ");
                }
                for(s=1;s<=3;s++)
                {
                        printf(" ");
                }
		  for(c=1;c<=5;c++)
                {
			 if((r==1 && (c==1 || c==5)) || (r==2 && (c==2 || c==4)) || (c==3 && (r>=3)))
                                        printf("y");
                        else
                                printf(" ");
                }
		  printf("\n");
	}
}
