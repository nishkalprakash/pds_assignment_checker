#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main()
{
   float a,b,c,D,R1,R2;
   printf("Enter the coefficients of quadratic equation  : \n");
   scanf("%f%f%f",&a,&b,&c);
   printf("The coefficients of equation are (%f,%f,%f)\n",a,b,c);
   D=pow(b,2)-(4*a*c);
   R1=(-b+sqrt(D))/(2*a);
   R2=(-b-sqrt(D))/(2*a);

   if (D<0)
       printf("The roots of the equation are complex. \n");
    else printf("The roots of the equation are (%f,%f)\n", R1 , R2);

    if (R1==R2)
        printf("Both roots of the equation are equal. \n");

    return(0);
}
