/*******************************************//************************************

7.1. Square number patterns
01110
10001
10001
10001
01110
132.Number pattern 1

********************************************//****************************************/


/*
#include<stdio.h>
void main()
{
        int i,j,n;
        printf("enter the number: ");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
                for(j=1;j<=n;j++)
                {
                        if((i==1||i==n)&& (j==1 ||j==n))
                        {
                                printf("0");
                        }
                        else
				if((i==1 || i==n) || (j==1 || j==n))
                        	{
                                	printf("1");
                        	}
				else
				{
					printf("0");
				}
                }
                printf("\n");
        }
}
*/
/************************************************//***************************************

7.1 square number patterns

01110
11111
11111
11111
01110

132.1 number pattern



***************************************************//***************************************/





#include<stdio.h>
void main()
{
        int i,j,n;
        printf("enter the number: ");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
                for(j=1;j<=n;j++)
                {
                        if((i==1||i==n)&& (j==1 ||j==n))
                        {
                                printf("0");
                        }
                        else
                                if((i==1 || i==n) || (j==1 || j==n))
                                {
                                        printf("1");
                                }
                                else
                                {
                                        printf("1");
                                }
                }
                printf("\n");
        }
}

