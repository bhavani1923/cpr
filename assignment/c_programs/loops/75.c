/*****************************************/ /***********************************

	75.Write a C program to enter any number and calculate its factorial.

****************************************/ /**************************************/

#include <stdio.h>

void main()
{
    int i, num,fact=1;

    printf("Enter any number to calculate factorial: ");
    scanf("%d", &num);

    for(i=1; i<=num; i++)
    {
        fact = fact * i;
    }

    printf("Factorial of %d = %d\n", num, fact);

   
}
