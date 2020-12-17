#include<stdio.h>

intmain()
{
  int a,b,c,d,e,f,g,h;

   printf("enter cordinates of bottom left corner :")
   scanf("%d%d,&a,&b);

   printf("enter cordinates of top right corner :");
   scanf("%d%d,&c,&d);
   e=a;
   f=d;
   g=c;
   h=b;
   printf("(%d,%d)bottom left (%d,%d)   top left (%d,%d)  top right (%d,%d)  bottom right (%d,%d) ",a,b,c,d,e,f,g,h);

   printf("enter the points to check:");
   scanf("%d,%d",&p,&q);
   if(p>a && p<c)
   {
   if(q>b && q<d)printf("point (%d,%d) is inside rectangle",p,q);
   }
   else printf("point(%d,%d) is outside rectangle",p,q)
   }
