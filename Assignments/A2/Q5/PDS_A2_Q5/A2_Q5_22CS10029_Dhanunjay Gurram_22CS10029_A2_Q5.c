/* Program to find out distance travelled by the ball*/
#include <stdio.h>
#include <math.h>
int main()
{ 
   float ht,n,dist,g,d,x,y;
   printf("what's the height :\n");
   scanf("%f",ht);
   printf("how many times did get bounced :\n");
   scanf("%f",n);
   g=9.78;
   d=ht/2;
   if (n=1)
     dist=ht;
   else
     x=pow(0.25,n-1)
     y=(x-1)/-0.75
     dist=ht+d*y;
   
   printf("The distance travelled is %f",dist);
   return 0;
}
