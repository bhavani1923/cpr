/**************************************************/ /****************************************

	16.Write a C program to enter P, T, R and calculate Simple Interest.

**************************************************/ /******************************************/



#include<stdio.h>
void main()
{
	float p,t,r,sim_intr,s;
	printf("enter principle and time and rate values:\n");
	scanf("%f%f%f",&p,&t,&r);
	sim_intr=p*t*r/100;
	s=sim_intr/30;
	printf("simple intrust=%f\n",sim_intr);
	
	printf("days=%f",s);
}
