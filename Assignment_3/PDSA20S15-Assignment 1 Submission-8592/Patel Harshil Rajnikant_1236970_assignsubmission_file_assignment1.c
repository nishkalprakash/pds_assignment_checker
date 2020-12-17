#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c,d,e,f,g,h,i,j;
printf("Enter the coordinates of the bottom left corner of the rectangle:\n");
scanf("%d%d",&a,&b);
printf("The coordinates of bottom left corner of rectangle are (%d,%d)\n",a,b);
printf("Enter the coordinates of the upper right corner of the rectangle:\n");
scanf("%d%d",&c,&d);
printf("The coordinates of upper right corner of rectangle are (%d,%d)\n",c,d);
e=c, f=b, g=a, h=d;
printf("The  coordinates of the rectangle are (%d,%d),(%d,%d),(%d,%d),(%d,%d)\n",a,b,g,h,c,d,e,f);
printf("Enter the coordinates of the point to be checked:\n");
scanf("%d%d\n",&i,&j);
{
    if ((2<i<7) && (1<j<5))
        printf("The point lies inside the rectangle");
else
    printf("The point lies outside the rectangle");
}
}
