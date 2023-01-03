/****************************************/ /*****************************************

	10.Write a C program to find power of any number x ^ y.

**************************************/ /***************************************/


#include<stdio.h>
#include<math.h>
void main()
{
	float x,y,z;
	printf("enter the values:\n");
	scanf("%f%f",&x,&y);
	z=pow(x,y);
	printf("power of value =%f\n",z);
}

