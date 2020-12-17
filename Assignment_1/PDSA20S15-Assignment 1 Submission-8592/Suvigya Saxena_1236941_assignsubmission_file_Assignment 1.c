#include <stdio.h>

int main()
{
int a,b,c,d,p,q;
printf("co ordinates of the bottom left corner are:\n");
scanf("%d%d",&a,&b);
printf(" coordinates of the upper right corner are:\n");
scanf("%d%d",&c,&d);
printf(" all the four corners of the rectangle are as follows    bottom left:(%d,%d)   upper left:(%d,%d)    upper right:(%d,%d)    lower right:(%d,%d)\n",a,b,a,d,c,d,c,b );
printf("plss enter the coordinates to check their locations:\n");
scanf("%d%d",&p,&q);
if(a<p<c&&b<q<d)printf("the point is inside the given rectangle\n");
    else printf("the point is not inside the given rectangle\n");


}
