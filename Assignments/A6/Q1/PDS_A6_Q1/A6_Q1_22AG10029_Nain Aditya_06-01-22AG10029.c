#include <stdio.h>
#include <time.h>
/*Name - Nain Aditya
section -2
roll no. 22AG10029
LAB 6 QUESTION 1*/
#define PI 3.1415926535
long int fact(int n){
    int c=1;
    for (int i =2;i<=n;i++) c*=i;
    return c;}
float pow(float x , int n){
    float c=1;
    for(int i =0;i<n;i++)c*=x;
    return c;}
double i_sin(double x){
    float c=0,d=1,c1=0;
    while (1){
        c+=(pow(x,d)*pow(-1,d-1))/(float)fact(d);
        if (c-c1<0.000001) break;
        c1=c;
        d+=2;}
    return c;}
double r_sin(double x,int d,double x1){
    double c=0;
    c=(pow(-1,d-1)*pow(x,d))/(float)fact(d);
    d+=2;
    if (d<20) x1= c+r_sin(x,d,x1);
    return x1;
    }
int main(){
    float x,deg;double i,r;
    scanf("%f",&x);
    deg=(x*PI/180);
    clock_t start,end;
    double cpu_time_i,cpu_time_r;
    start=clock();
    i=i_sin(deg);
    end=clock();
    cpu_time_i=((double)(end-start))/CLOCKS_PER_SEC;
    start=clock();
    r=r_sin(deg,1,0);
    end=clock();
    cpu_time_r=((double)(end-start))/CLOCKS_PER_SEC;
    printf("iterative = %lf , recursive = %lf \n ",i,r);
    printf("difference in time taken %lf",cpu_time_r - cpu_time_i);
    return 0;
}
