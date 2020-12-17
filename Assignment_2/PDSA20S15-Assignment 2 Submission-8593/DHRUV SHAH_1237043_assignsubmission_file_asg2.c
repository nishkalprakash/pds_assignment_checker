#include <stdio.h>

int main()
{
   float a,b,c,D,r1,r2;
   printf("PLEASE ENTER THE COEFFICIENTS AS A THEN B AND THEN C \n");
   scanf("%f%f%f", &a, &b, &c);

   printf(" THE COEFFICIENTS ARE a=%f , b=%f , c=%f  \n",a ,b ,c);
   D=((b*b)-(4*a*c));
   if(D>0)
   {
       r1=(-b+(sqrt(D)))/(2*a);
        r2=(-b-(sqrt(D)))/(2*a);
       printf("THE ROOTS ARE %f, %f  \n",r1 ,r2);

   }
   else if(D==0)
   {
     r1=(-b)/(2*a);
     r2=r1;
     printf("THE ROOTS ARE %f, %f  \n",r1 ,r2);
     printf("THE ROOTS ARE EQUAL  \n");
   }

   else
   {
     printf("THE  ROOTS ARE NOT REAL AND HAVE COMPLEX ROOTS  \n ");
   }
}
