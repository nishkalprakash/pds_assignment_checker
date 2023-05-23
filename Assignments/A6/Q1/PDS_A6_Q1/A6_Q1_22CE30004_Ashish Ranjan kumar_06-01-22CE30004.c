#include<stdio.h>
#include<time.h>
clock_t start, end;
int fact(int n);
float pow(float x, int n);
double i_sin(double x);
double r_sin(double x);
int main() {
    double x;
    int n = 10;
    printf("ENTER THE VALUE OF X ");
    scanf("%lf", &x);
    int factorial = fact(2*n+1);
    int power = pow(x, 2*n+1);
    double rec = r_sin(x);
    printf("Recursive : %lf", rec);
    return;

}
int fact(int n) {
   if(n==0)
    return(1);
   else
    return(n*fact(n-1));
}
float pow(float x, int n) {
    return(pow(x, n));
}
double r_sin(double x) {
    int n;
    int factorial = fact(2*n+1);
    int power = pow(x, 2*n+1);
    double sin = power/factorial;
    return(sin);

}
