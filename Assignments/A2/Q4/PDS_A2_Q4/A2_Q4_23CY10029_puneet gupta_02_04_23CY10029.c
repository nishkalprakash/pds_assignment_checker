#include <stdio.h>

int main ()
{
  int a ,b ;
  
 printf("enter a first number that is m \n");
 scanf("%d", &a);
   printf(" enter second number that is n \n");
   scanf("%d",&b); 
   printf( "  the sum of m and n is m+n %d \n", a+b);
   printf( "  the difference of m and n is M-n %d\n", a-b);
   printf( "  the multiplication of  m and n is m*n %d\n", a*b);
   printf( "  the integer remainder of  m and n is M/n %d\n", a/b);
   printf( "  the integer remainder of  m and n is %d\n", a%b);
   printf( "  the floating point quoitent of  ism/n %f\n", (float)a/b);
   printf( "  the sum of squares of   is m^2 +n^2 %d\n", (a*a)+(b*b));
   printf( "  the square of sum    (m+n)^2 is %d\n", (a+b)*(a+b));
   printf( "  the average (m+n)/2 as a floating point number  is %f\n", ((float)a+b)/2);
   printf( "  the average of the sum of the squares (m*m+n*n)/2 as a floating point number  is %f\n", ((float)a*a+b*b)/2);

  	     
  
  return 0;
}
