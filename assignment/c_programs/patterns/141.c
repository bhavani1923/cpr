/********************************************//*****************************************


	7.1 square number patterns

5 5 5 5 5 5 5 5 5
5 4 4 4 4 4 4 4 5
5 4 3 3 3 3 3 4 5
5 4 3 2 2 2 3 4 5
5 4 3 2 1 2 3 4 5
5 4 3 2 2 2 3 4 5 
5 4 3 3 3 3 3 4 5
5 4 4 4 4 4 4 4 5
5 5 5 5 5 5 5 5 5


141 number pattern 18


********************************************//*****************************************/



#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Enter the number of rows and colomns: ");
    scanf("%d", &n);

    
    for(i=n; i>=1; i--)
    {
   
        for(j=n; j>i; j--)
        {
            printf(" %d ", j);
        }

         for(j=1; j<=(i*2-1); j++)
        {
            printf(" %d ", i);
        }

        for(j=i+1; j<=n; j++)
        {
            printf(" %d ", j);
        }

        printf("\n");
    }

    for(i=1; i<n; i++)
    {
        for(j=n; j>i; j--)
        {
            printf(" %d ", j);
        }

         for(j=1; j<=(i*2-1); j++)
        {
            printf(" %d ", i+1);
        }

           for(j=i+1; j<=n; j++)
        {
            printf(" %d ", j);
        }

        printf("\n");
    
    }
}
