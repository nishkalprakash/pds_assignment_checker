#include<stdio.h>
#include<math.h>
int main()
{
   int a,b,c,d ;

   printf("input values of (a,b) :");
   scanf("%d%d",&a,&b);
   printf("input values of (c,d) :");
   scanf("%d%d",&c,&d);

   int e=a,f=d;
   int g=c,h=d;

   printf("the four corners of the rectangles are (%d,%d) (%d,%d) (%d,%d) (%d,%d) ",a,b,c,d,e,f);

   int p,q ;
   printf("put your point(p,q):");
   scanf("%d%d",&p,&q);
   if (p>a && p<c && q>b && q<d)
      printf("inside");
   else
      printf("outside");

}
