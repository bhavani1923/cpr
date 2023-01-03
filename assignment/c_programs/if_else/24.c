/***********************************/ /****************************

24.Write a C program to check whether a character is alphabet or not.

*********************************/ /*********************************/
#include<stdio.h>
void main()
{
	char c;
	printf("enter character\n");
	scanf("%c",&c);
	if((c>='a' && c<='z') || (c>='A' && c<='Z'))
	{
		printf("entered character is alphabet\n");
	}
	else
	{
		printf("entered character is not alphabet\n");
	}
}
