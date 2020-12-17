#include<stdio.h>

int main()
{
int a,b,c,d,e,f,g,h,p,q;
printf("enter the x and y coordinates of the bottom left corner of the rectangle:\n");
scanf("%d%d",&a,&b);
printf("enter the x and y coordinates of the top right corner of the rectangle:\n" );
scanf("%d%d",&c,&d);
e=a;
f=d;
g=c;
h=b;
printf("the four corners of the rectangle are (%d,%d),(%d,%d),(%d,%d),(%d,%d)\n",a,b,e,f,c,d,g,h);
printf("enter the x and y coordinates of the point to be checked:\n");
scanf("%d%d",&p,&q);
if(p>a&&p<c&&q>b&&q<d)
{
printf("the point  (%d,%d)\n",p,q);
printf(" lies inside the rectangle\n");
}
else
{
printf("the point (%d,%d)\n",p,q);
printf(" lies outside the rectangle\n");
}

}
