
/*
sec2
name- Omkar Dilip Desai
Roll no - 22MF3Im06
q. no-3
description-   */


#include<stdio.h>
#define PI 3.141592653
int fact(int n){
   if(n==1){
    return 1;
   }
   if(n==0){
    return 1;
   }

   return n*fact(n-1);

}



float pow(float x, int n){

if(n==0){
    return 1;
}
return x*pow(x,n-1);



}


double i_sinx(float x1){

float term;
double sum=0;
for(int i=1;i<=5;i++){
    term=pow(-1,i-1)*pow(x1,2*i-1)/fact(2*i-1);
    sum=sum+term;
}


printf("The value of sinx is %lf\n",sum);

return 0;
}


double r_sinx(float x1,int i){
 float term;
term=pow(-1,i-1)*pow(x1,2*i-1)/fact(2*i-1);
printf("%lf",term);
return 0;
/*return (term+r_sinx(x1,i-1));*/
}


int main(){

  /*  int n;
    float m;
    n=fact(5);
    printf("%d\n",n);
    m=pow(2,4);
    printf("%f\n",m);     IT WAS ONLY TO CHECK THE FUNCTION*/

    float x;
    float x1;
    double x2;

    printf("enter the value of x\n");
    scanf("%f",&x);
    x1=x*PI/180;

    i_sinx(x1);
    x2= r_sinx(x1,5);
    printf("%lf",x2);





}
