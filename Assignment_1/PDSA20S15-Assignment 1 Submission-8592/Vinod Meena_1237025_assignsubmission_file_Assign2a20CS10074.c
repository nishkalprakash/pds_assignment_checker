#include <stdio.h>
#include <math.h>
int main()
{
int a=2;int b=1; int c=7; int d= 5;
scanf("%d%d",&a,&b);
scanf("%d%d",&c,&d);
{
printf("the four corners of rectangle are (%d,%d),(%d,%d),(%d,%d),(%d,%d)\n",(a,b),(a,d),(c,d),(c,b));
}
int p=4; int q=3;
scanf("%d%d",&p,&q);
if (((p<c)&&(p>a))&&((q<d)&&(q>b)))
{
printf("the point (%d,%d)is lies inside the rectangle\n",p,q);
}
else
{
printf("the point (%d,%d)is not inside the rectangle\n",p,q);
}
return 0;
}
