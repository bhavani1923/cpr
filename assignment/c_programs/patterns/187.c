/*********************************//***********************************


		7.9. List of various star pattern series and solution in C programming:
* * * * *
 * * * * *
  * * * * *
   * * * * *
    * * * * *
187.
Mirrored Rhombus



************************************/ /********************************/
#include<stdio.h>
void main()
{
        int i,j,k,n;
        printf("enter the number: ");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
                for(j=1;j<=i-1;j++)
                {
                        printf(" ");
                }
                for(k=1;k<=n;k++)
                {
                        printf("*");
                }
                printf("\n");
        }

}


