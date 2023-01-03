//257.Write a C program to compare two strings.


#include<stdio.h>
void main()
{
	char str1[100],str2[100];
	int i,flag=0;
	
	printf("enter the two strings\n");
	scanf("%s%s",str1,str2);
	for(i=0; str1[i]!='\0'||str2[i]!='\0'; i++)
	{

	    if(str1[i]!= str2[i])
	     {
		flag=1;
		break;
	      }
	}
	if(flag==0)
		printf("strings are equal\n");

	else
	{
		printf("strings are not eqaul\n");
	}
	
}
