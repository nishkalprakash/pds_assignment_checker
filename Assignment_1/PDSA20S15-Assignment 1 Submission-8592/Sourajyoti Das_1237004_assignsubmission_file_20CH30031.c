#include<stdio.h>
#include<math.h>
int main()
{
float ax,ay,bx,by,cx,cy,dx,dy,ex,ey,t;
printf("Enter the coordinates of the one corner\n");
scanf("%f%f",&ax,&ay);
printf("Enter the coordinates of the opposite corner\n");
scanf("%f%f",&cx,&cy);
if((cx<ax)||(cy<ay))
{
t=cx;
cx=ax;
ax=t;
t=cy;
cy=ay;
ay=t;
}
bx=ax;
by=cy;
dx=cx;
dy=ay;
printf("The coordinates of the rectangle are (%.2f,%.2f), (%.2f,%.2f), (%.2f,%.2f) and (%.2f,%.2f).\n" ,ax,ay,bx,by,cx,cy,dx,dy);
printf("Enter one coordinate\n");
scanf("%f%f",&ex,&ey);
if (((ex>ax)&&(ex<cx))&&((ey>ay)&&(ey<cy))) printf("The point (%.2f,%.2f) is inside the rectangle.\n",ex,ey);
else printf("The point (%.2f,%.2f) is not inside the rectangle.\n",ex,ey);
return 0;
}
