/**********************************/ /***********************************

	259.Write a C program to convert lowercase string to uppercase.

*********************************/ /*************************************/


#include<stdio.h>
#include<string.h>
void main()
{
	char str[100],u;
	printf("enter the caharcter:\n");
	gets(str);
	printf("%s\n",strupr(str));
}

