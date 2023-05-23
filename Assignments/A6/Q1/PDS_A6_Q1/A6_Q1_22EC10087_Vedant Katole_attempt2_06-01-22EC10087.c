/* Name - Vedant Katole
Roll no - 22EC10087
Section - 2
lab no- 6
problem no - 1*/

#include<stdio.h>
#include<time.h>
//#define N 10
#define PI 3.1415936535

long int fact(int n);
float pow(float x, int n);
double i_sin(double x);
double r_sin(double x);

void main(){
    double deg_x, x;
    printf("enter x in degrees:");
    scanf("%lf", &deg_x);
    x = deg_x * PI /180;
    printf("\niterative: %lf\n", i_sin(x));
    printf("\nrecursive: %lf\n", r_sin(x));
}

long int fact(int n){
    long int factorial;
    if(n == 1)
        return 1;
    factorial = n * fact(n-1);
    return factorial;
}

float pow(float x, int n){
    float power;
    if(n == 0)
        return 1;
    if(n == 1)
        return x;
    power = x * pow(x, n-1);
    return power;
}

double i_sin(double x){
    double sin_sum = 0, sin_term = 0, temp, diff;
    for(int i = 0; i < 10 ; i++){
        sin_term = (pow(-1, i) * pow(x, 2*i + 1))/fact(2*i + 1);
        sin_sum = sin_sum + sin_term;
    }
    return sin_sum;
}

double r_sin(double x){
    i_sin(x);
}
