//t.Sritan//
//23AE10036//
#include<stdio.h>
int main(){
  int a,b,c,d,e,f;
   int a1,b1,c1,d1;
   
  
  printf("enter coefficient of x^0: \n");
  scanf("%d",&f);

  printf("enter coefficient of x^1: \n");
  scanf("%d",&e);

   printf("enter coefficient of x^2: \n");
   scanf("%d",&d);

   printf("enter coefficient of x^3: \n");
   scanf("%d",&c);

   printf("enter coefficient of x^4: \n");
   scanf("%d",&b);

   printf("enter coefficient of x^5: \n");
   scanf("%d",&a);
   
   printf("the polynomial is %d x^5 + %d x^4 + %d x^3 + %d x^2 + %d x^1+ %d x^0 \n",a,b,c,d,e,f);

   a1=5*a;
   b1=4*b;
   c1=3*c;
   d1=2*d; 

   printf(" its first derivative is  %d x^4 + %d x^3 + %d x^2 + %d x^1 + %d x^0 \n",a1,b1,c1,d1,e);

   

   

return 0;}
