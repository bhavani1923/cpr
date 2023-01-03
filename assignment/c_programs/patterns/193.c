/***********************************//********************************

*****
****
***
**
*
193.Inverted right triangle


****************************//**************************/



#include<stdio.h>

void main()
{
  /*     	int i,j,n;
        printf("enter number of lines: ");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
                for(j=5;j>=i;j--)

                        printf("* ");

        printf("\n");
        }

}
*/
 

        int i,j,k,n;
        printf("enter the number: ");
        scanf("%d",&n);
        for(i=n;i>=1;i--)
        {
                for(j=1;j<=i;j++)
                {
                        printf("*");
                }
                for(k=1;k<=n;k++)
                {
                        printf(" ");
                }
                printf("\n");
        }

}


