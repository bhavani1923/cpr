/***************************************/ /**************************************

	83.Write a C program to check whether a number is Armstrong number or not.

**************************************/ /******************************************/

#include <stdio.h>
void main() 
{
    int num, temp, rem, result = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;


    while (temp != 0) 
    {
	
        rem = temp % 10;
        
       result += rem * rem * rem;
       temp /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);
}
	
