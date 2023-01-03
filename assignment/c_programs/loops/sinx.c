//wacp to print the sinx value


#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void main()
{
	float acc,den,sinx=0,sinvalue,term,n;
	int x1,x;
	printf("enter the value of x(in degrees): \n");
	scanf("%d",&x);
	x1=x;
	x=x*(3.142/180.0);
	sinvalue=sin(x);
	printf("enter the accuracy value: \n");
	scanf("%f",&acc);
	term=x;
	sinx=term;
	n=1;
	do
	{
		den=2*n*(2*n+1);
		term=-term*x*x/den;
		sinx=sinx+term;
		n=n+1;
	}while(acc<=fabs(sinvalue-sinx));
	printf("sum of the sine series=%f\n",sinx);
	printf("using library function=sin(%d)=%f\n",x,sin(x1));
}
			
