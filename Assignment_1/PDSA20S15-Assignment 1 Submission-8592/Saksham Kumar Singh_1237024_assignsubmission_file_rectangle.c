#include <stdio.h>
#include <math.h>
int main()
{
 int a,b,c,d;
 printf("enter bottom left corner coordinates :");
 scanf("%d%d",&a,&b);
  printf("enter top right corner coordinates :");
 scanf("%d%d",&c,&d);
 printf("all the corners of the rectangle are (%d,%d),(%d,%d),(%d,%d),(%d,%d),",a,b,a,d,c,b,c,d);
 int p,q;
 printf("\n enter point to be checked:");
 scanf("%d%d",&p,&q);
 if((a<p)&&(p<c)&&(b<q)&&(q<d))
    printf("the point (%d,%d) lies inside the given rectangle",p,q);
 else
    printf("the point (%d,%d) does not lie inside the given rectangle",p,q);
}
