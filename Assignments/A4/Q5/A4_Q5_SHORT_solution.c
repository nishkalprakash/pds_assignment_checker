// Code creator: Nishkal Prakash (nishkal@iitkgp.ac.in)
// Program to approximate the root of a cubic polynomial
// This is just an example to show how short a code is possible

#include <stdio.h>
int main(){
    double X3, X2, X1, X0, p_a, p_b, p_c, a = -999999, b = 999999, c;
    scanf("%lf%lf%lf%lf", &X0, &X1, &X2, &X3);
    do{
        p_a = (X3 * a * a * a) + (X2 * a * a) + (X1 * a) + (X0);
        p_b = (X3 * b * b * b) + (X2 * b * b) + (X1 * b) + (X0);
        c = -p_a * (a - b) / (p_a - p_b) + a;
        p_c = ((X3 * c * c * c) + (X2 * c * c) + (X1 * c) + (X0))(p_c * p_a < 0) ? b = c : a = c;
    } while (p_c >= 0.001 || p_c <= -0.001);
    printf("root is %lf \n", c);
}