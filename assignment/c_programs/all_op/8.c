/**********************************************/ /****************************************

	8.Write a C program to enter temperature in Fahrenheit(°F) and convert it into
Celsius(°C)

********************************************/ /*******************************************/


#include<stdio.h>
void main()
{
	float celsius,fahrenheit;
	printf("enter fahrenheit value:\n");
	scanf("%f",&fahrenheit);
	celsius=(fahrenheit-32)*5/9;
	printf("fahrenheit into celsius=%f",celsius);
}                      
