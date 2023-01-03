//63.Write a C program to find sum of first and last digit of any number.

#include<stdio.h>
void main()
{
        int n,fd,ld,s;
        printf("enter number\n");
        scanf("%d",&n);
        ld=n%10;
        while(n>=10)
        {
                n=n/10;
        }
        fd=n;
        s=fd+ld;
        printf("fd=%d and ld=%d\n\n",fd,ld);
        printf("sum of fd and ld =%d\n",s);


}
                             
