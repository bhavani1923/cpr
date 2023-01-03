/*******************************************//************************************

7.1. Square number patterns
1
01
010
1010
10101
160.Number pattern 1

********************************************//****************************************/



#include<stdio.h>
void main()
{
        int i,j,n,k=1;
        printf("enter the number: ");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
                for(j=1;j<=i;j++)
                {
			printf("%d",k&1);
			k++;
                }
                printf("\n");
        }
}


