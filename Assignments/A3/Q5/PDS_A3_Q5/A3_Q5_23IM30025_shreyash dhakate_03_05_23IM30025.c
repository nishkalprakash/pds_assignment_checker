//Roll no.: 23IM30025
//NAME : Shreyash Girdhari Dhakate
#include<stdio.h>
int main(){
  //definig that coefficeints are integers
  int a,b,c,d,e,f;
  printf("Enter the coefficients of x^0:");
  scanf("%d",&a );
  printf("Enter the coefficients of x^1:");
  scanf("%d",&b );
  printf("Enter the coefficients of x^2:");
  scanf("%d",&c );
  printf("Enter the coefficients of x^3:");
  scanf("%d",&d );
  printf("Enter the coefficients of x^4:");
  scanf("%d",&e );
  printf("Enter the coefficients of x^5:");
  scanf("%d",&f );
  //display
  printf("Polynomial:%d*x^5 +%d*x^4 +%d*x^3 +%d*x^2 +%d*x^1 +%d\n",a,b,c,d,e,f);
  printf("Derivative:%d*x^4 +%d*x^3 +%d*x^2 +%d*x^1 +%d\n",a*5,b*4,c*3,d*2,e);
  return 0;
}
  
  
