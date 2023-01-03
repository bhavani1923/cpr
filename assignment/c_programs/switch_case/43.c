//43.Write a C program to check whether a number is even or odd using switch case.




#include<stdio.h>
void main()
{
	int a;
	printf("enter a value:\n");
	scanf("%d",&a);
	switch(a%2)
	{
		case 1:
			printf("a is odd\n");
			break;


		default:
			printf("a is even\n");
	}
}
