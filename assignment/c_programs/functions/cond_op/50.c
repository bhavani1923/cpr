/************************************/ /**************************************

50. Write a C program to check whether character is an alphabet or not using
conditional/ternary operator.

************************************/ /***************************************/
#include<stdio.h>
void main()
{
	char a,b;
	printf("enter a charcter:\n");
	scanf("%c",&a);
	b=((a>='a' && a<='z') || (a>='A' && a<='Z'))?printf("is alphabet\n") :printf("is not a alphabet\n");
}
