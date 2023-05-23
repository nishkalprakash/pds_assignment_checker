/*
* Section- 02
* Name - Rahul kumar
* Roll no. - 22GG10032
* Assignment - 06
* Question Number - 01
* Description - Calculation of sin(x)
*/

#include<stdio.h>
long long fact(int n){
if(n==0 || n==1) return 1;
 return n*fact(n-1);
}
float power(float x, int n){
   if(n==0) return 1;
   return x*power(x,n-1);
}
double i_sin(double x){
    double s=0,n;
    for(int i=0;i<=10;i++){
     n = (power(-1.0,i))*((power(x,(2*i+1)))/(fact(2*i+1)));
     s = s + n;
    }
    return s;
}
double r_sin(double x){

}

int main(){
    int n;
    float degx;
    double sum,x;
    printf("Enter the value of x in degree: ");
    scanf("%f",&degx);
     x = degx*3.1415926535/180;
     sum = i_sin(x);
     printf("The value of sin(x) by iterative function is : %lf",sum);




  return 0;
}
