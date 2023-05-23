
/*
SECTION:2
ROLL NO:22AG10009
NAME:ASHANK KUMAR KUSHWAHA
ASSIGNMENT NO: 4
DESCRIPTION:sin
*/
#include <stdio.h>
#include <time.h>
#define PI 3.1415926535
long long int fact(int );
float pow(float,int);
double i_sin(double);
double r_sin(double,double,int);
long long int fact(int n){
    if (n==1) return 1;
    return n*fact(n-1);
}
float pow(float x,int n){
    if (n==0) return 1;
    return x*pow(x,n-1);}
double i_sin(double x){
    int k=0;
    double t,s=0;
    while (1){
        t=s;
        s+=(double)(pow(-1.0,k)*pow((float)x,2*k+1)/fact(2*k+1));
        if (t==0) {
            k+=1;
            continue;
        }
        if ((k>50)||((t>s)*(t-s)+(s>t)*(s-t))<0.000001){
            return s;}
        k+=1;

    }
}
double r_sin(double x,double k,int n){
    double t;
    t=(double)(pow(-1.0,k)*pow((float)x,2*k+1)/fact(2*k+1));
    if (((n>50)||((t>k)*(t-k)+(k>t)*(k-t))<0.000001) &&(n!=0))return 0;

    return t+r_sin(t,x,++n);

 }
int main(){
    double x;
    clock_t start,end;
    double cpu1,cpu2;
    scanf("%lf",&x);
    start=clock();
    printf("iterative: %lf\n",i_sin(x*PI/180));
    end=clock();
    cpu1=((double)(end-start)) /CLOCKS_PER_SEC;
    start=clock();
    printf("recursive: %lf\n",r_sin(x*PI/180,0,0));
    end=clock();
    cpu2=((double)(end-start)) /CLOCKS_PER_SEC;
    printf("%lf",(cpu1>cpu2)*(cpu1-cpu2)+(cpu2>cpu1)*(cpu2-cpu1));
}
