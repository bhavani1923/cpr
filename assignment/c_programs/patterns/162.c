/***************************************/ /*********************************


	7.4. Triangle hard number patterns

1
123
12345
1234567
123456789

162.Number pattern 39

*************************************/ /************************************/


#include<stdio.h>
void main()
{
        int i,j,n,k;
        printf("enter the rows: ");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
                for(j=1;j<=i*2-1;j++)
                {
                        printf(" ");
                }
                printf("\n");
        }
}
