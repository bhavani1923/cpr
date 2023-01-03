//79.Write a C program to check whether a number is Prime number or not.



#include<stdio.h>

void main()
{
	
	int n,i,count=0,rem;
	printf("enter any number:");
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
	{
		rem =n%i;
		if(rem==0)
		{
			count++;
		}
	}
	if(count==0)
	{
		printf("%d is a prime number\n",n);
	}
	else
		printf("%d is not a prime number\n",n);
}


	//wacp to print up to n prtime numbers
         int i,j,n,count;
        printf("enter any number: ");
        scanf("%d",&n);
        for(i=2;i<=n;i++)
        {
                count=1;
                for(j=2;j<=i/2;j++)
                {
                        if(i%j==0)
                        {
                                count=0;
                                break;
                        }
                }
                if(count==1)
                {
                        printf("%d\t",i);

                }
        }
        printf("\n");
}
*/

	
	//wacp to print betwen range prime numbers
        int i,j,n1,n2,count;
        printf("enter two number: ");
        scanf("%d%d",&n1,&n2);
        for(i=n1;i<=n2;i++)
        {
                count=1;
                for(j=2;j<=i/2;j++)
                {
                        if(i%j==0)
                        {
                                count=0;
                                break;
                        }
                }
                if(count==1)
                {
                        printf("%d\t",i);

                }
        }
        printf("\n");
}





