/*
5.	Write a program to compute the derivative of a degree 5 polynomial of a single variable of the form ax5+bx4+cx3+dx2+ex+f. Assume that all the coefficients are positive integers. Read 6 coefficients (a,b,c,d,e,f) as inputs from the keyboard. Display the polynomial, and then compute and display the first derivative of the polynomial. A sample input and output are given below; stick to the format shown below.
Enter coefficient of x^0: 5
Enter coefficient of x^1: 2
Enter coefficient of x^2: 2
Enter coefficient of x^3: 7
Enter coefficient of x^4: 0
Enter coefficient of x^5:3
Polynomial: 3*x^5 + 0*x^4 + 7*x^3 + 2*x^2 + 2*x + 5
Derivative: 15*x^4 + 0*x^3+ 21*x^2 + 4*x + 2
*/

// Name: Nishkal Prakash
// Roll: 19CS91R05

#include <stdio.h>
int main() {
    int a, b, c, d, e, f;
    printf("Enter coefficient of x^0: ");
    scanf("%d", &a);
    printf("Enter coefficient of x^1: ");
    scanf("%d", &b);
    printf("Enter coefficient of x^2: ");
    scanf("%d", &c);
    printf("Enter coefficient of x^3: ");
    scanf("%d", &d);
    printf("Enter coefficient of x^4: ");
    scanf("%d", &e);
    printf("Enter coefficient of x^5: ");
    scanf("%d", &f);

    printf("Polynomial: %3d*x^5 + %3d*x^4 + %3d*x^3 + %3d*x^2 + %3d*x + %3d\n", f, e, d, c, b, a);
    printf("Derivative: %3d*x^4 + %3d*x^3 + %3d*x^2 + %3d*x + %3d\n", 5 * f, 4 * e, 3 * d, 2 * c, b);

    return 0;
}
/*
Output:
Enter coefficient of x^0: 5
Enter coefficient of x^1: 5
Enter coefficient of x^2: 5
Enter coefficient of x^3: 5
Enter coefficient of x^4: 5
Enter coefficient of x^5: 5

Polynomial:   5*x^5 +   5*x^4 +   5*x^3 +   5*x^2 +   5*x +   5
Derivative:  25*x^4 +  20*x^3 +  15*x^2 +  10*x +   5

Enter coefficient of x^0: 0
Enter coefficient of x^1: 0
Enter coefficient of x^2: 0
Enter coefficient of x^3: 0
Enter coefficient of x^4: 0
Enter coefficient of x^5: 0

Polynomial:   0*x^5 +   0*x^4 +   0*x^3 +   0*x^2 +   0*x +   0

Derivative:   0*x^4 +   0*x^3 +   0*x^2 +   0*x +   0
*/