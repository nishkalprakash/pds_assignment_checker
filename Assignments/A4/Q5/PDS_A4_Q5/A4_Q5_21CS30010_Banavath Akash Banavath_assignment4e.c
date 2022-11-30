/*name: banavath akash
roll no: 21cs30010
dept: computer science and engineering*/


#include <stdio.h>
#include <math.h>
int main()
{ 
   
   float a,b,c,d,Discriminant;
   printf("enter the coefficient of x^3");
   scanf("%f",&a);
   printf("Enter the coefficient of x^2 : ");         
   scanf("%f",&b);         
   printf("Enter the coefficient of x : ");           
   scanf("%f",&c);
   printf("Enter the constant term : ");             
   scanf("%f",&d);
 
   
   Discriminant=(b*b)-(4*a*c);

   
   if(Discriminant<0)
      printf("\n");

   
   else{            
      float root1=((a+d)*(-b+sqrt(Discriminant))/(2*a));           
      float root2=((a+d)*(-b-sqrt(Discriminant))/(2*a));            
      printf("The roots of the equation are %.2f and %.2f",root1,root2);
   }
   return 0;
}


