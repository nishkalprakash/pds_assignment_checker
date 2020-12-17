#include <stdio.h>

int main()
{
   int a, b, c, d;
   scanf("%d%d%d%d",&a,&b,&c,&d);

   if (a==c||b==d)
   {
       printf("Error: this does not form a rectangle\n");
   }
   else
   {
       int e=a, f=d, g=c, h=b;
       printf("The four corners of the rectangle are (%d,%d),(%d,%d),(%d,%d),(%d,%d)\n",a,b,e,f,c,d,g,h);

       int p, q;
       scanf("%d%d",&p,&q);

       if (p>a && p<c && q>b && q<d)
       {
           printf("The point (%d,%d) is inside the rectangle\n",p,q);
       }
       else
       {
           printf("The point (%d,%d) is outside the rectangle\n",p,q);
       }
   }
}
