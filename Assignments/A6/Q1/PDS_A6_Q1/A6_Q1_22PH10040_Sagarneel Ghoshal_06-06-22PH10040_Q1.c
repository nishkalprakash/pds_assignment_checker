/*
* Section 2
* Roll No.: 22PH10040
* Name: Sagarneel Ghoshal
* Assignment 6
* Description:
*/


#include<stdio.h>
#define pi 3.1415926535

long long int fact(int n);
float pow(float x,int n);
double i_sin(double x);
double r_sin(double x);

long long int prod=1;

int main(){
    long long int n;
    float x;
    printf("Enter an integer:");
    scanf("%Ld",&n);
    long long int factorial=fact(n);

    printf("\nEnter the value of x:");
    scanf("%f",&x);
    float xn=pow(x,n);

    printf("\nthe factorial is %Ld",factorial);
    printf("\nthe product is %f",xn);

    float sin=i_sin(x);

    printf("\nThe value of sinx is %lf",sin);





    return 0;
}

long long int fact(int n){
    if(n==1) return 1;

    else{
        prod=n*fact(n-1);
        return prod;
    }
}

float pow(float x, int n){
    if(n==1) return x;

    else{
        prod=x*pow(x,n-1);
        return prod;
    }
}

double i_sin(double x){
    double x1=(pi*x)/180;
    double sinx=x1;

    int k=6;
    //printf("\nEnter k: ");
    //scanf("%d",&k);

    for(int i=1;i<k;i++){
        sinx=sinx+((pow(-1,i)*pow(x1,2*i+1))/fact(2*i+1));
    }
    return sinx;


}

double r_sin(double x){

}
