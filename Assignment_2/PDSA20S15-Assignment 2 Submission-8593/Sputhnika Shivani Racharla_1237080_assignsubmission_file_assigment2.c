#include<stdio.h>
#include<math.h>

int main()
{
   float a,b,c,D,x,y,l,m;

   printf("Give three real numbers for coefficient of quadratic equation ax^2 + bx + c : \n");
   scanf("%d%d%d",&a,&b,&c);
   printf(" The coefficients of the quadratic equation are%f,%f,%f,\n",a,b,c);
    D = b*b-4*a*c;

   if(D<0)
       printf("Both roots are imaginary\n");
   if(D == 0){
       printf("Both roots are equal\n");
       x= -b/(2*a);
       printf("Root is %f\n",x);
       }

   if(D > 0){
   printf("Roots are real and distinct\n");
   l = (-b+sqrt(D))/(2*a);
   m = (-b-sqrt(D))/(2*a);
   printf("roots are %.2f ,%.2f", l,m);

    }
}
