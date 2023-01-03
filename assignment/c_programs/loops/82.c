/******************************************/ /*****************************

	82.Write a C program to enter any number and print its prime factors.

****************************************/ /************************************/


#include <stdio.h>

int main()
{
    int i, j, n, count;

    printf("Enter any number to print Prime factors: ");
    scanf("%d", &n);

    printf("All Prime Factors of %d are: \n", n);

    for(i=2; i<=n; i++)
    {
        if(n%i==0)
        {
            count = 1;
            for(j=2; j<=i/2; j++)
            {
                if(i%j==0)
                {
                    count = 0;
                    break;
                }
            }

            if(count==1)
            {
                printf("%d,  ", i);
            }
        }
    }
    printf("\n");
}

