#include<stdio.h>

 int main()
 {
 int a,b,c,d,p,q;
 int x1,x2,y1,y2;

 printf("The coordinates of bottom left corner are :\n");
 scanf("%d%d",&a,&b);
 printf("The coordinates of top right corner are:\n");
 scanf("%d%d",&c,&d);

 x1=c;
 y1=b;
 x2=a;
 y2=d;
 printf("The four corners of the rectangle are (%d,%d),(%d,%d),(%d,%d),(%d,%d).\n",a,b,x2,y2,c,d,x1,y1);
 printf("The coordinates of point P are :\n");
 scanf("%d%d",&p,&q);

 if((p<c && p>a) && (q<d && q>b))
 {
 printf("The point P (%d,%d) is inside the rectangle.\n",p,q);
 }
 else
 {
printf("The point P (%d,%d) is not inside rectangle.\n",p,q);
 }
 }
