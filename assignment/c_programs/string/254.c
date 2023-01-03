//254.Write a C program to find length of a string.



#include<stdio.h>
void main()
{
	char str[100];
	int i;
	printf("enter the string:\n");
	scanf("%s",str);
	for(i=0; str[i]!=0; i++);
	{
		printf("length of the character=%d\n",i);
	}
}

	

