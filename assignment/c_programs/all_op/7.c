/*************************************************/ /***********************************

	7.Write a C program to enter temperature in °Celsius and convert it into °Fahrenheit.

**************************************************/ /***************************************/


#include<stdio.h>
void main()
{
	float celsius,fahrenheit;
	printf("enter celsius value:\n");
	scanf("%f",&celsius);
	fahrenheit=(celsius * 9/5)+32;
	printf("celsius to fahrenheit=%f\n",fahrenheit);
}
