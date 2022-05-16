/*
Name- Bharat Kabra
Roll: 21CH10015
Dept: Chemical
Package: Codeblocks
Lab Test: 1
*/
#include<stdio.h>
#include <stdlib.h>

int main() {
    float e,et,n,x0, xn;
    printf("x0 = ");
    scanf("%f",&x0);
    printf("e = ");
    scanf("%f",&et);
    printf("maxIteration = ");
    scanf("%f",&n);
    int i =0;
    e = et + 1;

    printf("Iteration    x0         x1        error\n");

    while(e>et){
        xn = x0 - (x0*x0*x0 - 25)/(3*x0*x0);
        e = ( x0 - xn);
        printf("   %d     %f   %f   %f\n",i+1,x0,xn,e);

        x0 = xn;
        i++;
        if (i==n){
            break;
        }

    }
    printf("The square root is %f",xn);
}


