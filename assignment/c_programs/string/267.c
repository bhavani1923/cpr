/**********************************************/ /***************************************

	267.Write a C program to check whether a string is palindrome or not.

************************************************/ /*************************************/



#include<stdio.h>
void main()
{
	char str[30],str1[30];
	int i,j,b=0;
	printf("enter the string: ");
	scanf("%s",str);
	for(i=0; str[i]!='\0'; i++);
	for(j=0; str[j]!='\0'; j++)
	{
		i--;
		str1[i]=str[j];
	}
	for(i=0; str[i]!='\0'; i++)
	{

	   if(str[i]!=str1[i])
	    {
		b++;
		break;
	     }
	}   
	if(b==0)
	{
		printf(" is palindrome\n");
	}
	else
	{
		printf(" is not palindrome\n");
	}                                            
}
	
