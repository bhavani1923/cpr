/**************************************/ /*******************************

87. Write a C program to check whether a number is Strong number or not.

*****************************************/ /****************************/

#include <stdio.h>

void main()
{
    int i, num1, num, rem, sum, k;


    printf("Enter any number to check Strong number: ");
    scanf("%d", &num);


    num1 = num;

    sum = 0;


    while(num > 0)
    {


        rem = num % 10;


        k = 1;
        for(i=1; i<=rem; i++)
        {
            k = k * i;
        }


        sum = sum + k;

        num = num / 10;
    }


    if(sum == num1)
    {
        printf("%d is STRONG NUMBER\n", num1);
    }
    else
    {
        printf("%d is NOT STRONG NUMBER\n", num1);
    }
}

