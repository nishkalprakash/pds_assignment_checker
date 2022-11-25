#include <stdio.h>
#include <math.h>
int main()
{
   int Y,n,d;
   float p;
   printf("Enter the height the ball falls from and the number of time it touches the ground.\n");
   scanf("%d %d", &Y, &n);
   p = pow(0.25,n-1);
   d = (Y + (2/3.0)*Y*(1-p));
   printf("The distance travelled by the ball is %dm.",d);
   return 0;
}

