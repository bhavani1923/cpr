//45.Write a C program to create Simple Calculator using switch case.


#include<stdio.h>
void main()
{
	int a,b;
	char op;
	printf("enter the a and op and b:\n");
	scanf("%d%c%d",&a,&op,&b);
	switch(op)
	{
		case '+':
			printf("addition=%d\n",a+b);
			break;


		case '-':
			printf("substraction=%d\n",a-b);
			break;

		case '*':
			printf("multiplication=%d\n",a*b);
			break;

		case '/':
			printf("division=%d\n",a/b);
			break;


		case '%':
			printf("modulo=%d\n",a%b);
			break;


		default:
			printf("enter valid operator\n");
			break;
	}
}

