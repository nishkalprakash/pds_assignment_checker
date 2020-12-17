#include <stdio.h>

int main()
{
int a,b ;
printf("Input the bottom left corner of the rectangle:");
scanf("%d%d", &a, &b);
int c, d ;
printf("Input the top right corner of the rectangle:");
scanf("%d%d", &c, &d);
int e= a , f= d;
int g = c, h= b;
printf("The four  points are ( %d,%d ), (%d,%d), (%d,%d),(%d,%d)\n", a,b,e,f,c,d,g,h);
int p, q ;
printf("Input the point to be checked: ");
scanf("%d%d", &p, &q);
if (a<p&&p<c&&b<q&&q<d){
printf("The point ( %d,%d ) is inside the rectangle",p,q);
}
else{
printf("The point (%d,%d) is  not inside the rectangle",p,q);
}
}
