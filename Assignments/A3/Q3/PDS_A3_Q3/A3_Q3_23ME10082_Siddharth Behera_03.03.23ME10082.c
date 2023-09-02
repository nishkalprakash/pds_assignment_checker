//Roll number:23ME10082
//Name:Siddharth Behera
#include<stdio.h>
int main()
{
  int x,y;

  printf("enter the cordinates of point p=");
  scanf("%d,%d",&x,&y);

  if((y==0) && (x!=0))
    {
    printf("X axis");
    }
  else if((x==0) && (y!=0))
    {
    printf("Y axis");
    }
  else if ((x>0) && (y>0))
    {
    printf("1st Quadrant\n");
    }
  else if ((x<0) && (y>0))
    {
    printf("4th Quadrant");
    }
  else if ((x<0) && (y<0))
    {
    printf("3rd Quadrant");
    }
  else if ((x>0) && (y<0))
    {
    printf("2nd Quadrant");
    }
  return 0;
}
	  
	 
