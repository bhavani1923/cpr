/****************************************/ /***********************************

44.Write a C program to find roots of a quadratic equation using switch case.

***************************************/ /**************************************/


#include <stdio.h>
#include <math.h> 

int main()
{
    float a,b,c, root1, root2, imag, real;

    printf("Enter values of a, b, c of quadratic equation (aX^2 + bX + c):\n ");
    scanf("%f%f%f", &a, &b, &c);

    real = (b * b) - (4 * a * c);


    switch(real > 0)
    {
        case 1:
            root1 = (-b + sqrt(real)) / (2 * a);
            root2 = (-b - sqrt(real)) / (2 * a);

            printf("Two distinct and real roots exists: %.2f and %.2f\n", root1, root2);
            break;

        case 0:
            switch(real < 0)
            {
                case 1:
                    root1 = root2 = -b / (2 * a);
                    imag = sqrt(-real) / (2 * a);

                    printf("Two distinct complex roots exists: %.2f + i%.2f and %.2f - i%.2f\n", root1, imag, root2, imag);
                    break;

                case 0:
                    root1 = root2 = -b / (2 * a);

                    printf("Two equal and real roots exists: %.2f and %.2f\n", root1, root2);

                    break;
            }
    }

   
}
