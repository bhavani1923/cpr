//266.Write a C program to find reverse of a string.



#include<stdio.h>
void main()
{
	char str[50],str1[10];
	int i,j,count=0;
	printf("enter the string: ");
	gets(str);
	for(i=0; str[i]!='\0'; i++)
	{
	}
	for(j=0;j<10; j++)
	{
		i--;
		str1[j]=str[i];
	}			
	printf("the reverse of a string=%s\n",str1);
}
