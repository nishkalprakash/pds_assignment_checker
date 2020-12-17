#include<stdio.h>
void main()

{
   int a,b,c,d,p,q;
scanf("%d%d", &a,&b);
scanf("%d%d", &c,&d);
printf("The four corners of the rectangle are (%d,%d),(%d,%d),(%d,%d),(%d,%d)\n", a,b,a,d,c,d,c,b);
scanf("%d%d", &p,&q);
if(p>a&&p<c)printf("The point (%d,%d) is inside the rectangle\n", p,q);else printf("The point (%d,%d) is not inside the rectangle\n", p,q);
}
