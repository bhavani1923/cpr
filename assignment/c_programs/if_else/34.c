//34.Write a C program to find all roots of a quadratic equation.


#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void main()
{
	float a,b,c,d,real,img,root1,root2;
	printf("enter the coefficient values of a and b and c:\n");
	scanf("%f%f%f",&a,&b,&c);
	if(a==0)
	{
		printf("roots are undetermined\n");
		exit(0);
	}
	else 
	
		d=(b*b)-(4*a*c);

		if(d==0)
		{
			root1=root2=-b/(2.0*a);
			printf("roots are real and eqaul,root1=%f\n,root2=%f\n",root1,root2);
		}
	
	else 
	
		d=(b*b)-(4*a*c);
		if(d>0)
		{

			root1=(-b+(sqrt(d)))/(2.0*a);
			root2=(-b-(sqrt(d)))/(2.0*a);
			printf("roots are real,root1=%f\n,root2=%f\n",root1,root2);
		}
	
	else 
	
		d=-d;
		if(d<0)
		{

			real=-b/(2.0*a);
			img=sqrt(-d)/(2.0*a);
			printf("roots are real and img,real=%f,img=i%f\n",real,img);
		}
	
}
		
