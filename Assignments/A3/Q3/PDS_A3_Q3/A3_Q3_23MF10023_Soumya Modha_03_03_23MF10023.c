// roll no:23MF10023
//name: Modha Soumya Vahini


#include<stdio.h>
int main()

{
  float x,y;
  printf("enter the coordinates of the point P");
  scanf("%f%f",&x,&y);

  if(x==0 && y==0)
    {
      printf("point P lies on the origin");
    }
  if(x==0 )

    {
      printf("point P lies on the y-axis");
    }
  if(y==0)
    {
      printf("point P lies on the x-axis");
    }
  if(x>0 && y>0)
    {
      printf("point P lies in the first quadrant");
    }
  if(x<0 && y>0)

    {
      printf("point P lies in the fourth quadrant");

    }
  if(x<0 && y<0)
    {
      printf("point P lies in the third quadrant");
    }
  if(x>0 && y<0)
    {
      printf("point P lies in the second quadrant");
    }
  return 0;
}

   
    
