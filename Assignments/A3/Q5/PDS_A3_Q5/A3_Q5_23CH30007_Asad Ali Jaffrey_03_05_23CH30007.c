//Roll No.: 23CH30007
//Name:Asad Ali Jaffrey

#include<stdio.h>

int main() {
  int a,b,c,d,e,f;
  printf("Enter the coefficient of x^0:");
  scanf("%d",&f);
  printf("Enter the coefficient of x^1:");
  scanf("%d",&e);
  printf("Enter the coefficient of x^2:");
  scanf("%d",&d);
  printf("Enter the coefficient of x^3:");
  scanf("%d",&c);
  printf("Enter the coefficient of x^4:");
  scanf("%d",&b);
  printf("Enter the coefficient of x^5:");
  scanf("%d",&a);

  printf("Polynomial:%dx^5+%dx^4+%dx^3+%dx^2+%dx+%d\n",a,b,c,d,e,f);

  printf("Derivative:%dx^4+%dx^3+%dx^2+%dx+%d\n",5*a,4*b,3*c,2*d,e); //Derivative of x^n is n*x^(n-1)

  return 0;
}
