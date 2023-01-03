//66.Write a C program to calculate products of digits of any number.


#include<stdio.h>
void main()
{
        int n,r,s=1;
        printf("enter the number=");
        scanf("%d",&n);
        do
        {

                r=n%10;
                s=s*r;
                n=n/10;


        }while(n!=0);
                printf("product=%d\n",s);
}
