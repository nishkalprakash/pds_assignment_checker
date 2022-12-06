// Code creator: Nishkal Prakash (nishkal@iitkgp.ac.in)
// Program to approximate the root of a cubic polynomial

#include <stdio.h>
int main()
{
    double X3, X2, X1, X0;                  // Xd Coeffiecient of x with degree d
    double p_a, p_b, p_c = 1;               // Polynomial values
    double a, b, c;                         // Possible root values
    printf("Enter coefficient of x^0: ");
    scanf("%lf", &X0);
    printf("Enter coefficient of x^1: ");
    scanf("%lf", &X1);
    printf("Enter coefficient of x^2: ");
    scanf("%lf", &X2);
    printf("Enter coefficient of x^3: ");
    scanf("%lf", &X3);
    do                                      // keep entering values until p(a) and p(b) are of opposite signs
    {
        printf("Enter the values of a and b (a<b): ");
        scanf("%lf%lf", &a, &b);
        p_a = (X3 * a * a * a) + (X2 * a * a) + (X1 * a) + (X0);    // Calculating p(a)
        p_b = (X3 * b * b * b) + (X2 * b * b) + (X1 * b) + (X0);    // Calculating p(b)
    } while (p_a * p_b > 0);

    while ((p_c >= 0.001) || (p_c <= -0.001))                       // approximation sensitivity (we keep running the loop until |p_c| is less than 0.001)
    {
        p_a = (X3 * a * a * a) + (X2 * a * a) + (X1 * a) + (X0);    // Calculating p(a)
        p_b = (X3 * b * b * b) + (X2 * b * b) + (X1 * b) + (X0);    // Calculating p(b)

/*  We know:
        (Y-y1)  = (y1-y2)/(x1-x2)   * (X-x1)       ------ (1)
    
    Given: 
        (x1,y1) = (a,p(a)) 
    and (x2,y2) = (b,p(b))  
    To Find:
        we need to find (c,0) i.e Y=0 
        and we need to find X = c (in the equation (1))
    
    Inserting given values and solving (1) for X = c
        0 - pa  = (pa - pb) / (a - b) * (C - a)         
        -pa     = (pa - pb) / (a - b) * (c - a)
        c - a   = -pa * (a - b) / (pa - pb)
        c       = (-pa * (a - b) / (pa - pb)) + a
*/
        c = (-p_a * (a - b) / (p_a - p_b)) + a;

        p_c = (X3 * c * c * c) + (X2 * c * c) + (X1 * c) + (X0);    // Calculating p(c)
        if (p_c * p_a >= 0)
            a = c;
        else
            b = c;
    }

    printf("root is %lf \n", c);
    return 0;
}