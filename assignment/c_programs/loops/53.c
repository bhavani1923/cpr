//53.Write a C program to print all alphabets from a to z. - using while loop.


#include<stdio.h>
void main()
{
/*	char a;
	a=96;
	do
	{
		a++;
		printf("%c\n",a);
	
	}
	while(a>=97 && a<=121);
*/


	char i;
	for(i=97; i<=122; i++)
	{
		printf("%c\t",i);
	}
	printf("\n");
}


