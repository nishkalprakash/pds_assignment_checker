#include<stdio.h>
int fact(int n){
    if (n==1||n==0) return 1;
    else return n*fact(n-1);
}
float pow(float x,int n)
{
    if (n==0) return 1;
    else return x*pow(x,n-1);
}
double r_sin(double x,int n)
{
    if (x=0) return 0;
    else return pow(x,n)*n*fact(n-1);
}
int main(){
    double p,x;
    int n;
    scanf("%d",&n);
    scanf("%lf",&x);
    p=r_sin(x,n);
    printf("%lf",p);
    return 0;


}


