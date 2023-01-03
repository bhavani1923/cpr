//64.Write a C program to swap first and last digits of any number.


#include<stdio.h>
void main()
{
/*	int f,l,swap,n;
	printf("enter the number=");
	scanf("%d",&n);
	l=n%10;
	while(n>=10)
	{
		n=n/10;
	}
	f=n;
	printf("first digit=%d\n last digit=%d\n\n\n",f,l);
	swap=f;
	f=l;
	l=swap;
	printf("first digit=%d\n last digit=%d\n",f,l);
}





	int n1,n2;
	printf("enter two numbers: ");
	scanf("%d%d",&n1,&n2);
	n1=n1+n2;
	n2=n1-n2;
	n1=n1-n2;
	printf("swaping of two numbers=%d %d\n",n1,n2);
}	


	 int n1,n2;
        printf("enter two numbers: ");
        scanf("%d%d",&n1,&n2);
        n1=n1^n2;
        n2=n1^n2;
        n1=n1^n2;
        printf("swaping of two numbers=%d %d\n",n1,n2);
}


	 int n1,n2;
        printf("enter two numbers: ");
        scanf("%d%d",&n1,&n2);
        n1=n1*n2;
        n2=n1/n2;
        n1=n1/n2;
        printf("swaping of two numbers=%d %d\n",n1,n2);
}                           

*/


	  int n1,n2;
        printf("enter two numbers: ");
        scanf("%d%d",&n1,&n2);
        n1=n1-n2;
        n2=n1+n2;
        n1=n2-n1;
        printf("swaping of two numbers=%d %d\n",n1,n2);
}                           





/*a=a+b,b=a-b,a=a-b;
 * a=a-b,b=a+b,a=b-a;
 * b=b-a,a=a+b,b=a-b;
 * b=b+a,a=b-a,b=b-a;
 */
