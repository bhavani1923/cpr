#include<stdio.h>
void main()
{
	char name[30];
	printf("enter the name: ");
	scanf("%s",name);
	printf("%10.5s\n",name);
	puts(name);
	puts(name);
	printf("%s",&name[2]);
}
