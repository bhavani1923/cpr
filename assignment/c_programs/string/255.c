//255.Write a C program to copy one string to another string.


/*#include<stdio.h>
void main()
{
	char str[100],str1[100];
	int i;
	printf("enter the str:");
	scanf("%s",str);
	for(i=0; str[i]!='\0'; i++)
	{
		str1[i]=str[i];
	}
	printf("str1=%s\n",str1);
}*/


#include<stdio.h>
#include<string.h>
void main()
{
	char str[100],str1[100];
	printf("enter the string: ");
	gets(str);
	strcpy(str1,str);
	printf(" copied string to string1 = %s\n",str1,str);
}



