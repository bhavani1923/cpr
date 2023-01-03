/******************************************/ /***************************************

	6.Write a C program to enter length in centimeter and convert it into meter and
kilometer.

****************************************/ /*******************************************/



#include<stdio.h>
void main()
{
	float centimeter,meter,kilometer;
	printf("enter the value of centimeter:\n");
	scanf("%f",&centimeter);
	meter=centimeter/100;
	kilometer=centimeter/100000;
	printf("legth in centimeter convert into meter =%f\n",meter);
	printf("length in centimeter convert into kilometer=%f\n",kilometer);
}
	 	
