/*****************************************/ /*****************************

25.Write a C program to input any alphabet and check whether it is vowel or consonant.	

**************************************/ /*********************************/

#include<stdio.h>
void main()
{
	char a;
	printf("enter the character:\n");
	scanf("%c",&a);
	if((a>='a' && a<='z') || (a>='A' && a<='Z'))	
	{
		if(((a=='a') || (a=='e') || (a=='i') || (a=='o') ||( a=='u')) || ((a=='A') || (a=='E') || (a=='I') || (a=='O')|| (a=='U')))
		{
			printf("the character is a vowel\n");
		}
		else
		{
			printf("the charcter is a consonent\n");
		}
	}
	else
	{
		printf("the character is not a consonent\n");
	}
}
