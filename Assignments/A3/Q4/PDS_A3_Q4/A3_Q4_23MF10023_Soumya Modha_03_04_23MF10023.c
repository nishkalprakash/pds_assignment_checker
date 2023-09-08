//roll no:23MF10023
//name:Modha Soumya vahini

#include <stdio.h>
int main()
{
  float a,b,c,d,x,y;
  printf("enter the coordinates of left bottom of the rectangle/n");
  scanf("%f%f",&a,&b);
  printf("enter the coordinates of right top of the rectangle/n");
  scanf("%f%f",&c,&d);
  
 
  if(a<c && b<d)
    {
      printf("the coordinates forms a rectangle");
      printf("enter the coordinates of the point P");
       scanf("%f%f",&x,&y);
     
      if(x<a || x>c || y<b || y>d)
    {
      printf("point P lies outside the rectangle");
     }

   if(x==a && y>b && y<d)
     {
       printf("point P lies on left side of the rectangle");
     }
    if(x==c && y>b && y<d)
     {
      printf("point P lies on right side of the rectangle");
     }
if(y==b && x>a && x<c)
{
printf("ponit P lies on the bottom side of the rectangle");
}
if(y==d && x>a && x<c)
{
printf("point P lies on the top side of the rectangle");
}

if(x==a && y==b)
{
printf("point lies on the let bottom corner of the rectangle");
}
if(x==c && y==d)
{
printf("point lies on the rigt top corner of the rectangle");
}
 }
      if(a==c || b==d || c<a || d<b)
	{
	  printf("the coordinates won't formed ");
	    }
return 0;
}
 
