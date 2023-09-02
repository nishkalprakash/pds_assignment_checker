//Name : Shine Srivastava
//Roll no. : 23MF3IM17

#include<stdio.h>
int main(){
  float a,b,c,d,e,f;
  
  printf("Enter coefficient of x^o:\n");
  scanf("%f",&f);
  printf("Enter coefficient of x^1:\n");
  scanf("%f",&e);
  printf("Enter coefficient of x^2:\n");
  scanf("%f",&d);
  printf("Enter coefficient of x^3:\n");
  scanf("%f",&c);
  printf("Enter coefficient of x^4:\n");
  scanf("%f",&b);
  printf("Enter coefficient of x^5:\n");
  scanf("%f",&a);

  printf("Polynomial:\n(%f)*x^5 +(%f)*x^4+(%f)*x^3+(%f)*x^2+(%f)*x+%f\n",a,b,c,d,e,f);
  printf("Derivative:\n(%f)*x^4 +(%f)*x^3+(%f)*x^2+(%f)*x+(%f)\n",5*a,4*b,3*c,2*d,e);

  return 0;
}
  

  
