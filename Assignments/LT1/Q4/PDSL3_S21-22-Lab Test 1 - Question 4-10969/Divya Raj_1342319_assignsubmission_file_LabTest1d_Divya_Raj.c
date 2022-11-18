/*
Name : Divya Raj
Roll : 21MT10017
Dept : Metallurgy
Package : CodeBlocks
*/

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of coordinates you want to give : ");
    scanf("%d", &n);
    int x[n], y[n];
    double m, b, mean_x=0, mean_y=0, num, den, sum_num=0, sum_den=0;

    for(int j=0; j<n; j++){
        scanf("%d", &x[j]);
        mean_x += x[j];
    }
    mean_x /= n;                // mean of x

    for(int j=0; j<n; j++){
        scanf("%d", &y[j]);
        mean_y += y[j];
    }
    mean_y /= n;                // mean of y

    for(int j=0; j<n; j++){
        num = (x[j] - mean_x)*(y[j] - mean_y);
        sum_num += num;                         // summation of all terms of numerator of m
    }
    for(int j=0; j<n;j++){
        den = (x[j] - mean_x)*(x[j] - mean_x);
        sum_den += den;                         // summation of all terms of denominator of m
    }
    m = sum_num/sum_den;                        // slope m
    b = mean_y - (m * mean_x);                  // y-intercept b
    printf("\n");
    printf("m = %0.1lf, ", m);
    printf("b = %0.1lf, ", b);
    printf("line equation y = %0.1lfx + %0.1lf\n", m, b);
    return 0;
}