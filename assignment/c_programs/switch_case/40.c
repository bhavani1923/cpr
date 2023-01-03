//40.Write a C program print total number of days in a month using switch case.


#include<stdio.h>
void main()
{
	int n;
	printf("enter month number:\n");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			printf("jan =31 days\n");
			break;

		case 2:
			printf("feb =28 days\n");
			break;

		case 3:
			printf("mar =31 days\n");
			break;

		case 4:
			printf("apr =30 days\n");
			break;

		case 5:
			printf("may =31 days\n");
			break;

		case 6:
			printf("june =30 days\n");
			break;

		case 7:
			printf("july =31 days\n");
			break;

		case 8:
			printf("agust 31 days\n");
			break;

		case 9:
			printf("sep =30 days\n");
			break;

		case 10:
			printf("oct =31 days\n");
			break;

		case 11:
			printf("nov =30 days\n");
			break;

		case 12:
			printf("dec =31 days\n");
			break;

		default:
			printf("not a month\n");
			break;
	}
}

