/*
Rishabh Bhardwaj
21CE10052
Civil
sec-3
CodeBlock
windows
*/

#include<stdio.h>
#include<math.h>

int main()
{
    // defining the structure for polynomial containing  no. of terms, coefficients, exponents.
    typedef struct
    {
        int terms;
        float coefficient[100];
        int exponent[100];

    }polynomial;

    polynomial p1, p2, p;// declaring  p1 ,p2 , p as polynomials.

    char a[100], b[100], c[100];

    int i, t1, c1, e1, t2, c2, e2;

    printf("Enter the first polynomial as string: ");// enter the first polynomial
    scanf("%s", &a);

    printf("Enter the second polynomial as string: ");// enter the second polynomial
    scanf("%s", &b);


    // operations
    p1.terms=3;
    p2.terms=2;


    p1.coefficient[0]=3;
    p1.coefficient[1]= -1;
    p1.coefficient[2]= 10;


    p2.coefficient[0]=1;
    p2.coefficient[1]= 2;


    p1.exponent[0]=2;
    p1.exponent[1]=1;
    p1.exponent[2]=0;


    p2.exponent[0]=1;
    p2.exponent[1]=0;

    p.terms= p1.terms+1;

    p.coefficient[0]= p1.coefficient[0] * p2.coefficient[0];
    p.coefficient[1]= p1.coefficient[1] * p2.coefficient[0] + p2.coefficient[1] *  p1.coefficient[0];
    p.coefficient[2]= p1.coefficient[2] * p2.coefficient[0] + p1.coefficient[1] *  p2.coefficient[1] ;
    p.coefficient[3]= p1.coefficient[2] * p2.coefficient[1] ;

    p.exponent[0]=3;
    p.exponent[1]=2;
    p.exponent[2]=1;
    p.exponent[3]=0;

    //output

    printf("The resultant polynomial after multiplication in the form of string is: %.1fx^%d + %.1fx^%d + %.1fx^%d + %.1fx^%d ",  p.coefficient[0],p.exponent[0], p.coefficient[1],p.exponent[1], p.coefficient[2],p.exponent[2] ,p.coefficient[3], p.exponent[3] );

}
