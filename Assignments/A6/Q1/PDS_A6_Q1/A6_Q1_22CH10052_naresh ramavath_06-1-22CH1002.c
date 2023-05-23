#include<stdio.h>
#include<time.h>
clock_t start,end;
int i;
int fact(int n);
float pow(float x,int n);
double i_sin(double x);
double r_sin(double x);
int factitr(int n){
    scanf("%d"&n);
    int res=1;
    while(n!=1){
        res=res*n;
    }return res;
}

    int factorec(int n){
    if(n==1){
        return 1;}
        else {
            return n*fact(n-1);
        }
    }
    int x pow( float x,int n){
if (n==1) return x;
else {
    return x*pow(x,n-1);
}}
double i_sin(double x){
    double p=0;
    for(i=0;i<=20;i++){
        p=p+pow((-1)*x,2*i+1)/fact(2*i+1);
        return p;
    }}
double r_sin(double x){
    if(i<20)return p;
    else{
        p=p+pow((-1)*x,2*i+1)/fact(2*i+1);
        return p;

    }

}


    int main(){
    printf("%d",factitr(n));
    printf("%d",factrec(n));
    printf("%d",pow(float x, int n));
    printf("%d",i_sin(double x));
    printf("%d",r_sin(double x));

    return 0;
           }
