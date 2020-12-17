#include<stdio.h>
 int main()
 {
   float a,b,c;
   scanf("%f%f%f",&a,&b,&c);
   printf("The coefficients of the quadratic equations are: %f, %f ,%f \n",a,b,c);
   float n,m;
   n=((-b)+sqrt(pow(b,2)-4*a*c))/(2*a);

   m=((-b)-sqrt(pow(b,2)-4*a*c))/(2*a);
   if((n<0 || n>0) &&( m<0 || m>0) && ((m>n)||(n>m)))
    {
     printf("The existing roots of the quadratic equation are: %f , %f \n",n,m);
    }
     else if((m=n) && (pow(b,2)>=(4*a*c)))
     {
     printf("The equal roots of the quadratic equation are : %f ,%f\n",m,n);

     }
      else

       printf("The roots are complex\n");

 }
