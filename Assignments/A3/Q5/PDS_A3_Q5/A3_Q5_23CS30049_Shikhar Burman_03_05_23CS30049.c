//Roll No.: 23CS30049
//Name: Shikhar Burman

//Importing Standard Input-Output library
#include <stdio.h>

void main()
{
    int a, b, c, d, e, f;

    // Input coefficients from user
    printf("Enter coefficient of x^0: ");
    scanf("%d", &f);
    printf("Enter coefficient of x^1: ");
    scanf("%d", &e);
    printf("Enter coefficient of x^2: ");
    scanf("%d", &d);
    printf("Enter coefficient of x^3: ");
    scanf("%d", &c);
    printf("Enter coefficient of x^4: ");
    scanf("%d", &b);
    printf("Enter coefficient of x^5: ");
    scanf("%d", &a);
    
    //Outputing polynomial and its derivative
    printf("Polynomial: %d*x^5 + %d*x^4 + %d*x^3 + %d*x^2 + %d*x + %d\n", a, b, c, d, e, f);
    printf("Derivative: %d*x^4 + %d*x^3 + %d*x^2 + %d*x + %d\n", a*5, b*4, c*3, d*2, e);
}