/*sec2
Assignment no.7
Roll no. 22HS10058
Name - Ujjawal Jain
Question no. 1
*/
#include<stdio.h>


int fact(int n){
if(n==1){
    return 1;
}
int fac = n*fact(n-1);
return fac;
}

float pow(float x , int n){
if(n==0){
    return 1.0;
}
return x*pow(x,n-1);

}
double i_sin(double x){
    double sinx = 0;


    for(int i=0;i<12;i++){
        sinx = sinx + pow(-1,i)*(pow(x,2*i+1))/fact(2*i+1);
    }
    return sinx;

}

double r_sin(double x,int t){

    if(t==1){


    }
    else{
        float r = pow(-1,t+1)*pow(x,2*t-1)/fact(2*t-1) + r_sin(x,t-1);
        return r;
    }
}

int main(){
    float x;

    scanf("%f",&x);
    x = x*3.14/180;
    printf("%lf,%lf",i_sin(x),r_sin(x,12));





return 0;
}
