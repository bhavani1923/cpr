//wacp to print the cosx value


#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void main()
{
        float x,acc,den,cosx,cosvalue,term;
        int x1,n;
        printf("enter the value of x(in degrees): \n");
        scanf("%f",&x);
        x1=x;
        x=x*(3.14/180.0);
        cosvalue=cos(x);
        printf("enter the accuracy value: \n");
        scanf("%f",&acc);
        term=1;
        cosx=term;
        n=1;
        do
        {
                den=(2*n*(2*n-1));
                term=-term*x*x/den;
                cosx=cosx+term;
                n=n+1;
        }while(acc<=fabs(cosvalue-cosx));
        printf("sum of the cosine series=%f\n",cosx);
        printf("using library function=cos(%f)=%f\n",x,cos(x1));
}

