
/*
* Section 2
* Roll No.: 22NA30019
* Name : Kavita Thakur
* Assignment No.: 6
* Description : Finding value of sinx
*/
#include<stdio.h>
//function prototype
long long int fact(int n);
float pow(float x,int t);
double i_sin(double x,int k);
double r_sin(double x);


  int main(){
       double x;
       int k;
       printf("Enter value of x (in degrees):");
       scanf("%lf",&x);

       printf("hello world");
       printf("enter number of terms (k) till which you want to calculate sinx");
scanf("%d",&k);
printf("hello world");
       printf("sin(%lf) = %lf",x,i_sin(x*3.1415926535/180.0,k)); //function call


  return 0;
  }

  //function definition
long long int fact(int n){
    if(n==0){
      return 1;
    }
    long long int factN,factNm1;
    factNm1=fact(n-1);
    factN=factNm1*n;
    return factN;
 }

float pow(float x,int t){
     if(t<=1){
        return x;
     }
     float powT,powTm1;
     powTm1=pow(x,t-1);
     powT=powTm1*x;
     return powT;

 }

double i_sin(double x,int k){

    double i_sinx=0,term;

    for(int i=0;i<k;i++){
        term=pow((-1),i)*pow(x,(2*i+1))/fact(2*i+1);
        i_sinx=i_sinx + term;

    }

    return i_sinx;


}
double r_sin(double x){
    double r_sinx;




}
