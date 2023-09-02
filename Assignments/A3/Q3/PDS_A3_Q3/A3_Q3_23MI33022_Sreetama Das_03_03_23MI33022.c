#include <stdio.h>
int main()
{
  int x,y;
  printf("Enter the x and y  coordinates of point P respectively  ");
  scanf("%d%d", &x,&y);
  if(x>0 && y==0)
  {
  printf("The point P lies on the positive  x axis ");
  }
  else if(x<0 && y==0)
  {
    printf("The point P lies on the negative x axis ");
  }
  else if(y>0 && x==0)
    {
      printf("The point P lies on the positive y axis ");
    }
  else if(y<0 && x==0)
    {
      printf("The point P lies on the negative y axis ");
    }
  else if(x==0 && y==0)
    {
      printf("The point P lies on both x and y axis ");
    }
  else if(x>0 && y>0)
    {
      printf("The point P lies on the first quadrant ");
    }
   else if(x<0 && y>0)
    {
      printf("The point P lies on the second  quadrant ");
    }
   else if(x<0 && y<0)
    {
      printf("The point P lies on the third  quadrant ");
    }
   else if(x>0 && y<0)
    {
      printf("The point P lies on the fourth  quadrant ");
    }
   else
     {
       printf("Wrong input ");
     }
  return 0;
}
      
  
 
