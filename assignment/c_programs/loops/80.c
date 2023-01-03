/****************************************/ /**********************************

	80.Write a C program to print all Prime numbers between 1 to n.	

***************************************/ /*************************************/


#include <stdio.h>

int main()
{
    int i, j, n, count; 

    printf("enter the number: ");
    scanf("%d", &n);

    printf("All prime numbers between 1 to %d are:\n",n);

    for(i=2; i<=n; i++)
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
            printf("%d\t",i);
        }

    }
    printf("\n");

   
}
