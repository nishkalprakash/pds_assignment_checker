#include<stdio.h>
int main()
{
int x1,x2,y1,y2,p,q;
printf("Enter the coordinates of the leftmost and right most corners respectively\n");
scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
printf("4 coordinates of the rectangle are (%d,%d);(%d,%d);(%d,%d);(%d,%d)\n",x1,y1,x1,y2,x2,y2,x2,y1);
printf("Enter the coordinates you want to check\n");
scanf("%d%d",&p,&q);
if(p>2&&p<7&&q>1&&q<5)
 printf("the point lies inside of the rectangle");
 else if(p==2&&q>=1&&q<=5)
 printf("point lies on the recatngle");
else if(q==5&&p>=2&&p<=5)
    printf("point lies on the recatngle");
else if(p==7&&q<=5&&q>=1)
    printf("point lies on the recatngle");
else if(q==1&&p>=2&&p<=7)
    printf("point lies on the recatngle");
else
    printf("the point lies outside the rectangle");

}
