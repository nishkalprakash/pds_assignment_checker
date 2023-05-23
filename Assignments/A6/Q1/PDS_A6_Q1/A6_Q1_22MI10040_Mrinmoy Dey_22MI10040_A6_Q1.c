/*
Name : Mrinmoy Dey
Roll : 22MI10040
Section : 2
Assignment : 5
Question : 1
*/
#include <stdio.h>
#include <time.h>
#define pi 3.1415926535
int na=5;
int ka=0;
double sin_x=0;
int fact(long int n){
    if (n==1) return 1;
    else return n*fact(n-1);
}
float pow(float x,int n){
    if (n==0) return 1;
    else return x*pow(x,n-1);
}
double i_sin(double x){
    long int n = 5;
    double sin_x = 0;
    if ((x>=0)&&(x<=2)){
        for (int k=0;k<n;k++){
            sin_x+=((pow(-1,k)*pow(x,(2*k+1)))/fact(2*k+1));
        }
     }
     return sin_x;
}
double r_sin(double x){
    if (na==0) return sin_x;
    else{
        sin_x=sin_x + ((pow(-1,ka)*pow(x,(2*ka+1)))/fact(2*ka+1));
        ka++;
        na = na-1;
        r_sin(x);
    }
}
int main(){
    clock_t start,end;
    double cpu_time_used;
    double x;
    double isin_x,rsin_x;
    scanf("%lf",&x);
    start = clock();
    rsin_x = r_sin(x*pi/180);
    isin_x = i_sin(x*pi/180);
    end = clock();
    printf("%lf ",isin_x);
    printf("%lf",rsin_x);
    cpu_time_used = ((double)(end-start))/CLOCKS_PER_SEC;


}
