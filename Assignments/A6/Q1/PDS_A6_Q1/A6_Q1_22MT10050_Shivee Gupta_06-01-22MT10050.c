#include<stdio.h>
#include<time.h>
clock_t start,end;
double cpu_time_used;

#define pi 3.1415926535

long long int fact(int n){
if(n==1) return 1;

else return (n*fact(n-1));
}

float power(float x, int n){
if(n==1) return x;
else return (x*power(x,n-1));
}

double i_sin(double y){
int i=1;
double sum = 0;
double term;
while(i<=10){
   term = (power(-1,i+1)*power(((y*pi)/180.0),(2*i-1)))/fact(2*i-1);
//term = (term*((y*pi)/180)*((y*pi)/180)*(-1))/((2*i-1)*(2*i-2));
    sum = sum+term;
}
return sum;
}


int main(){
    int n;
    printf("Enter the number : ");
    scanf(" %d",&n);
    printf("The factorial of the number is %lli \n",fact(n));


    double x;
    int k;
    printf("Enter number whose power is to be found : ");
    scanf(" %lf",&x);
    printf("Enter the power k : ");
    scanf(" %d",&k);
    printf("x^k is %f\n",power(x,k));

// there's some issue in the debugging of this part of the program, as sir told me
    start = clock();
    double y;
    printf("Enter the angle in degrees : ");
    scanf("%lf",&y);
    printf("The value of sin is %lf",i_sin(y));

    end = clock();
    cpu_time_used = ((double)(end-start))/CLOCKS_PER_SEC;
    return 0;
}