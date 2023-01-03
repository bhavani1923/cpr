/*****************************************/ /********************************

	81.Write a C program to find sum of all prime numbers between 1 to n.

****************************************/ /************************************/


#include <stdio.h>

void main()
{
    int i, j, n, count, sum=0;

    printf("Find sum of all prime between 1 to : ");
    scanf("%d", &n);

    for(i=2; i<=n; i++)
    {
        count = 1;
        for(j=2; j<=i/2 ;j++)
        {
            if(i%j==0)
            {
                count = 0;
                break;
            }
        }

        if(count==1)
        {
            sum += i;
        }
    }

    printf("Sum of all prime numbers between 1 to %d = %d\t", n, sum);
    printf("\n");
}
