/**************************************/ /*****************************
	
	69.Write a C program to find frequency of each digit in a given integer.

***************************************/ /**********************************/
/*
#include<stdio.h>

int main()
{
    float num, n;
    int i, lastDigit;
    int freq[n];
    printf("Enter any number: ");
    scanf("%f", &num);

    for(i=0; i<n; i++)
    {
        freq[i] = 0;
    }

  
    n = num; 

 
    while(n != 0)
    {
    
        lastDigit = n % 10;
	n /= 10; 
        freq[lastDigit]++;
    }
    printf("Frequency of each digit in %f is: \n", num);
    for(i=0; i<n; i++)
    {
        printf("Frequency of %d = %d\n", i, freq[i]);
    }

    return 0;
}*/

#include<stdio.h>

void main()
{
    int num,num1,rem,rem1,count,k,rev=0,co=0,rev1;
    printf("enter any number:\n");
    scanf("%d",&num);
    num1=num;
    k=num;
    while(num>0)
    {
        count=0;
        co=0;
        rem=num%10;
        rev=(rev*10)+rem;
        rev1=rev;
        while(rev1>0)
        {
                rem1=rev1%10;
                if(rem==rem1)
                {
                        co++;
                }
                rev1=rev1/10;
        }

        if(co == 1 )
        {
            while(num1>0)
            {
                rem1=num1%10;
                if(rem==rem1)
                {
                    count++;
                }
                num1=num1/10;
            }
            printf("the frequency of %d is %d\n",rem,count);
        }
        num1=k;
        num=num/10;
    }

}	


