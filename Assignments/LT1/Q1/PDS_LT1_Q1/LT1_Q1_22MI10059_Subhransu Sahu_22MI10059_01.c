#include <stdio.h>
#include <math.h>
int main() {
int x1, y1, x2, y2, x3, y3, x4, y4, a, b, c, d;
double p;

printf("\n(x1,y1)= ");
scanf("%d,%d", &x1, &y1);

printf("\n(x2,y2)= ");
scanf("%d,%d", &x2, &y2);

printf("\n(x3,y3)= ");
scanf("%d,%d", &x3, &y3);

printf("\n(x4,y4)= ");
scanf("%d,%d", &x4, &y4);

a = (x2*y3 - y2*x3) - (x1*y3 - y1*x3) + (x1*y2-y1*x2);
b = (x3*y4 - y3*x4) - (x2*y4 - y2*x4) + (x2*y3-y2*x3);
c = (x4*y1 - y4*x1) - (x3*y1 - y3*x1) + (x3*y4-y3*x4);
d = (x1*y2 - y1*x2) - (x4*y2 - y4*x2) + (x4*y1-y4*x1);

printf("%d", a);


if( (fabs(a)>fabs(b)) && (fabs(a)>fabs(c))  && (fabs(a)>fabs(d))){
   printf("Points having the maximum area: (%d,%d),(%d,%d),(%d,%d)", x1,y1,x2,y2,x3,y3);}

   if( (fabs(b)>fabs(a)) && (fabs(b)>fabs(c)) && (fabs(b)>fabs(d) )){
   printf("Points having the maximum area: (%d,%d),(%d,%d),(%d,%d)", x2,y2,x3,y3,x4,y4);}

   if( (fabs(c)>fabs(a)) && (fabs(c)>fabs(b)) && (fabs(c)>fabs(d) )){
   printf("Points having the maximum area: (%d,%d),(%d,%d),(%d,%d)", x3,y3,x4,y4,x1,y1);}


   if( (fabs(d)>fabs(a)) && (fabs(d)>fabs(c)) && (fabs(d)>fabs(b) )){
   printf("Points having the maximum area: (%d,%d),(%d,%d),(%d,%d)", x4,y4,x1,y1,x2,y2);}



return 0;
}
