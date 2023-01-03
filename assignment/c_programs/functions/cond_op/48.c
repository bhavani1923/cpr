//48.Write a C program to check whether a number is even or odd using conditional/ternary operator.


#include<stdio.h>
void main()
{
	char a,b;
	printf("enter a character:\n");
	scanf("%c",&a);
	b=(a%2==0)?printf("a is even\n"):printf("a is odd\n");
}
