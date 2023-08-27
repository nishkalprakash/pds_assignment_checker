#include<stdio.h>
int main(){
  unsigned int  p,t;
  float si, r;
  printf("Enter Principal and period of deposit in years");
  scanf("%u %u",&p,&t);
  printf("Enter the rate of interest");
  scanf("%f",&r);
  si = p*r*t/100;
  printf("SI is %.2f",si);
  printf("Amount is: %.2f",si+p);
  return 0; 
}
