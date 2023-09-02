// roll no 23CS10011
// name vivek
#include<stdio.h>
int main(){
  int a,b,c,d,e,f;
  printf("enter coefficient of x^0\n");
  scanf("%d",&f);
  printf("enter coefficient of x^1\n");
  scanf("%d",&e);
   printf("enter coefficient of x^2 \n");
   scanf("%d",&d);
    printf("enter coefficient of x^3 \n");
   scanf("%d",&c); 
    printf("enter coefficient of x^4\n");
   scanf("%d",&b);
    printf("enter coefficient of x^5\n");
   scanf("%d",&a);
   printf("\n Polynomial :%d*x^5+%d*x^4+%d*x^3+%d*x^2+%d*x+%d\n",a,b,c,d,e,f);
  a=5*a;
  b=4*b;
  c=3*c;
  d=2*d;
  printf("\n Derivative: %d*x^4+%d*x^3+%d*x^2+%d*x+%d\n",a,b,c,d,e);
return 0;
}
   
  
