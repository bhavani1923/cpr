//26.Write a C program to input any character and check whether it is alphabet, digit or special character.


#include<stdio.h>
void main()
{
	char b;
	printf("enter any character:\n");
	scanf("%c",&b);
	if((b>='a' && b<='z') || (b>='A' && b<='Z'))
	{
		printf("the charcter is alphabet\n");
	}
	else
		if(b>='0' && b<='9')
		{
			printf("the charcter is digit\n");
		}
		else
		{
			printf("the charcter is special charcter\n");
		}
}

