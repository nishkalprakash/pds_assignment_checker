#include<stdio.h>
#include<math.h>
int main(){
//program where user input is taken. 
  printf("input the values in the following order.ts,rs,alpha,rho,D:");
  double ts;
  double tp;
  double rs;
  double alpha;
  double rho;
  double d;
  scanf("%le%le%lf%lf%le",&ts,&rs,&alpha,&rho,&d);
  double a;
  a=sqrt(((1-alpha)/rho));
  double b;
  b=(rs*a)/(2*d);
  tp=ts*(sqrt(b));
  printf("the value of tp is: %le\n",tp);
  return 0;
  } 


  


