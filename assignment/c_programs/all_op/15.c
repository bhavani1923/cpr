/*************************************************/ /***************************************

	15.Write a C program to enter marks of five subjects and calculate total, average and
percentage.	

******************************************/ /*********************************************/



#include<stdio.h>
void main()
{
	float tel,eng,hin,math,phy,total,average,percentage;
	printf("enter the five subject marks:\n");
	scanf("%f%f%f%f%f",&tel,&eng,&math,&phy,&hin);
	total=tel+eng+hin+math+phy;
	average=(tel+eng+hin+math+phy)/5;
	percentage=total/500*100;
	printf("total marks=%.2f\n",total);
	printf("average marks=%.2f\n",average);
	printf("percentage marks=%.2f\n",percentage);
}

