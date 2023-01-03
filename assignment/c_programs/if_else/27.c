//27.Write a C program to check whether a character is uppercase or lowercase alphabet.


#include<stdio.h>
void main()
{
	char c;
	printf("enter a character:\n");
	scanf("%c",&c);
	if(c>='a' && c<='z')
	{
		printf("the character is lowercase\n");
	}
	else
		if(c>='A' && c<='Z')
		{
			printf("the character is uppercase\n");
		}
		else
		{
			printf("entered character is not a alphabet\n");
		}
}

