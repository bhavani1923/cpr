/****************************************/ /**********************************

	73.Write a C program to find power of any number using for loop.

****************************************/ /*********************************/

#include <stdio.h>

void main()
{
    int i,base, exponent, power = 1;

    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);

    for(i=1; i<=exponent; i++)
    {
        power = power * base;
    }

    printf("%d ^ %d = %d\n", base, exponent, power);
}


