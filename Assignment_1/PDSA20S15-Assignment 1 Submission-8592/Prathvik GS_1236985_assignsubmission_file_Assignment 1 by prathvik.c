//ASSIGNMENT BY PRATHVIK GS (20PH20028)
#include <stdio.h>
#include <math.h>
main()
{
float a,b,c,d,e,f,g,h;
scanf("%f%f%f%f",&a,&b,&c,&d);
g=a+0;
h=d+0;
e=c+0;
f=b+0;
printf("the coordinates of the rectangle are  (%f,%f)(%f,%f)(%f,%f)(%f,%f)\n",a,b,g,h,c,d,e,f);
printf("enter the coordinates to check");
float x,y;
scanf("%f%f",&x,&y);
if (a<x && x<c && b<y &&y<d) printf("the point(%f%f)you entered is in the given rectangle",x,y);
 else printf("The point(%f%f) is outside the given rectangle",x,y);





}
