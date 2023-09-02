#include<stdio.h>
int main(){
  int a,b,c,d,e,f;
  printf("enter the coefficients : ");
  scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
  printf("enter the coefficient of x^0 : %d\n",f);
  printf("enter the coefficient of x^1 : %d\n",e);
  printf("enter the coefficient of x^2 : %d\n",d);
  printf("enter the coefficient of x^3 : %d\n",c);
  printf("enter the coefficient of x^4 : %d\n",b);
  printf("enter the coefficient of x^5 : %d\n",a);
  printf("the polynomial is : %d*x^5+%d*x^4+%d*x^3+%d*x^2+%d*x+%d\n",a,b,c,d,e,f);
  printf("the derivative is : %d*x^4+%d*x^3+%d*x^2+%d*x+%d",a*5,b*4,c*3,d*2,e);

}
