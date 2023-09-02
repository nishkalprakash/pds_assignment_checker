//Roll no. : 23ME30058
//Name: Shravani Khot

#include <stdio.h>
int main()

 {
   int a,b,c,d,e,f;
   printf("Enter the coefficient of x^5 \n");
   scanf("%d",&a);
   printf("Enter the coefficient of x^4 \n");
   scanf("%d",&b);
   printf("Enter the coefficient of x^3 \n");
   scanf("%d",&c);
   printf("Enter the coefficient of x^2 \n");
   scanf("%d",&d);
   printf("Enter the coefficient of x^1 \n");
   scanf("%d",&e);
   printf("Enter the coefficient of x^0 \n");
   scanf("%d",&f);

   printf("The derivative of the polynomial %d x^5 + %d x^4 + %d x^3 + %d x^2 + %d x + %d is : \n",a,b,c,d,e,f);
   printf("%d x^4 + %d x^3 + %d x^2 + %d x + %d  \n",5*a,4*b,3*c,2*d,e);

   return 0 ;

 }
