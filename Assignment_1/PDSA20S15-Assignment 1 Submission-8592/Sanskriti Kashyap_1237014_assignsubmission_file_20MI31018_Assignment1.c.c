#include<stdio.h>
int main()
{
int a,b,c,d,i,j;
printf("Enter bottom left corner coordinates");
scanf("%d%d",&a,&b);
printf("Enter top right corner coordinates");
scanf("%d%d",&c,&d);
printf("The four corners of the rectangle are (%d,%d),(%d,%d),(%d,%d),(%d,%d)\n",a,b,a,d,c,d,c,b);
printf("Enter the coordinates of the point to be checked");
scanf("%d%d",&i,&j);
if((a<i&&i<c)&&(b<j&&j<d))
   printf("The point (%d,%d) is inside the rectangle",i,j);
else
   printf("The point (%d,%d) is not inside the rectangle",i,j);
}
