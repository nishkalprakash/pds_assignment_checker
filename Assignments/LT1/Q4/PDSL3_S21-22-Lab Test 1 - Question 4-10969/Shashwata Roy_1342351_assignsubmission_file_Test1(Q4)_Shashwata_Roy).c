/*
Name: Shashwata Roy
Roll: 21MA10055
Dept: Maths and Computing
Package: Codeblocks
Assignment class: 4
Test: 1
*/

#include<stdio.h>

int main(){
    int j,n=10;
    double sum1=0,sum2=0,x_avg,y_avg;
    printf("Enter n: ");
    // scanf("%d",&n);
    double x[n];
    double y[n];
    double m,b,c1,c2;
    printf("Enter x-coordinates:\n");
    for(j=0;j<n;j++){
        scanf("%lf",&x[j]);
        sum1+=x[j];
    }
    printf("Enter y-coordinates:\n");
    for(j=0;j<n;j++){
        scanf("%lf",&y[j]);
        sum2+=y[j];
    }
    x_avg=(sum1/n);
    y_avg=(sum2/n);
    c1=0;c2=0;
    for(j=0;j<n;j++){
        c1+=(x[j]-x_avg)*(y[j]-y_avg);
        c2+=(x[j]-x_avg)*(x[j]-x_avg);
    }
    m=c1/c2;
    b=y_avg-m*(x_avg);
    printf("m = %lf\n",m);
    printf("b = %lf\n",b);
    printf("Line equation: y = %lfx + %lf\n",m,b);
return 0;
}
