//256.Write a C program concatenated of two numbers.


/*
#include<stdio.h>
void main()
{
	char str[20],str1[20];
	int i,j;
	printf("enter the two strings: ");
	scanf("%s%s",str,str1);
	for(i=0; str[i]!='\0'; i++)
	{
	}
	for(j=0; str[j]!='\0'; j++)
	{
		str[i]=str1[j];
			i++;
	}
	printf("\n%s is  concatenated string\n",str);
	
}


*/

#include<stdio.h>
#include<string.h>
void main()
{
	char str1[50],str2[6];
	printf("enter the string: ");
	gets(str1);
	gets(str2);
	strcat(str1,str2);
	printf("concatinatinated string = %s\n",str1,str2);
}

