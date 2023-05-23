#include<stdio.h>
#include<time.h>
int fact(int n)
{
  if(n==1)
      return 1;
  else
      return (n*fact(n-1));

 }


 float pow(float x,int n){
   if(n<=1)
     return x;
   else
    return x*pow(x,n-1);
 }
 double i_sin(double x){
     double sin_x=0.0;
     int i,n=6;
     for(i=0;i<n;i++){
        double term = pow(-1,i)*pow(x,2*i+1)/fact(2*i+1);
        sin_x+=term;

     }
     return sin_x;

 }



  int main(){
  double x;
scanf("%lf",x);
double r=i_sin(x);
printf("%lf",r);



    return 0;
}
