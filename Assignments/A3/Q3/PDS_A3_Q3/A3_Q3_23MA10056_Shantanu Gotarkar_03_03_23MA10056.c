//Roll No.: 23MA10056.c
//Name:Shantanu

#include<stdio.h>
int main()
{
  int x1,y1 ;
  scanf("%d %d", &x1,&y1);
  if (x1==0)
    printf("Point lies on Y axis");
  else if (y1==0)
    printf("Point lies on X axis");
  else if (x1==0 && y1==0)
printf ("Point lies on both the axis" );
else if (x1>0 && y1 >0) 
printf("The Point lies in first quardrant ");
else if (x1<0 && y1>0)
printf("The point lies in second quadrant");
else if (x1<0 && y1<0)
printf("The point lies in third quadrant");
else 
printf("The point lies in fourth quadrant");

return 0 ;
}
