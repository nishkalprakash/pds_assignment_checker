#include<stdio.h>

int main()
{
int a,b,c,d,p,q;
 scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&p,&q);
 if (p>a&&p<c)
 printf("%d is greater than %d and less than %d\n",p,a,c);
 else printf("%d does not lie between %d and %d\n",p,a,c);
 if (q>b&&q<d)
 printf("%d is greater than %d and less than %d\n",q,b,d);
 else printf("%d does not lie between %d and %d\n",q,b,d);
 if(p>a&&p<c&&q>b&&q<d)
 printf("point having coordinate (%d,%d) lies inside the rectangle having bottom left corner (%d,%d) and top right corner (%d,%d)\n",p,q,a,b,c,d);
 else printf("point having coordinate (%d,%d) lies outside the rectangle having bottom left corner (%d,%d) and top right corner (%d,%d)\n",p,q,a,b,c,d);
 printf("the four corners of the rectangle are (%d,%d),(%d,%d),(%d,%d) and (%d,%d)\n",a,b,c,b,c,d,a,d);



}
