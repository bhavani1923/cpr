/***********************************/ /**********************************

	76.wacp to find hcf or gcd of two numbers.

*************************************/ /********************************/

#include <stdio.h>
int main()
{
    int n1, n2, i, gcd;

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

    for(i=1; i <= n1 && i <= n2; i++)
    {
        
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }
    
		 printf("G.C.D of %d and %d is %d\n", n1, n2, gcd);
   
	
    

     
}





/*#include <stdio.h>
void main()
{
    int n1, n2,n;

    printf("Enter two positive integers: ");
    scanf("%d %d",&n1,&n2);

    while(n1!=n2)
    {
        if(n1 > n2)
            n1=n1-n2;
        else
            n2=n2-n1;
    }
	
	 	printf("GCD = %d\n",n1);

    
    

   
}*/



