/*
Name: Shashwata Roy
Roll: 21MA10055
Dept: Maths and Computing
Package: Codeblocks
Assignment class: 4
Test: 1
*/

#include<stdio.h>

double f(double x){
    double d=(1.0/3)*(x - 25/(x*x));
    return d;
}

int main(){
    double x0,x1,root,e,err;
    int i,j;
    printf("x0 = ");
    scanf("%lf",&x0);
    printf("Tolerance limit: ");
    scanf("%lf",&e);
    printf("Max iteration: ");
    scanf("%d",&i);
    err =x0;
    for(j=0;j<i;j++){
        if(err<e)
            break;
        printf("Iteration %d:\n",(j+1));
        x1=x0-f(x0);
        err=x1-x0;
        if(err<0)
            err=-err;
        printf("x0 = %lf  x1 = %lf  Error = %lf\n",x0,x1,err);
        x0=x1;
    }
    printf("The square root is %lf",x1);
return 0;
}
