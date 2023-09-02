// Roll Number:23ME10063
// Name:Prem Pastagia

#include <stdio.h>
int main()
{
  int x,y;
  printf("Please enter the coordinates of a point (x,y)\n");
  scanf("%d%d",&x,&y);
  if ((x==0)&&(y!=0))
    printf("The point lies on Y axis\n");
  else if ((y==0)&&(x!=0))
     printf("The point lies on X axis\n");
   else if ((y==0)&&(x==0))
     printf("The point lies on both axis\n");
   else if ((y>0)&&(x>0))
     printf("The point lies in the first quadrant\n");
   else if ((y>0)&&(x<0))
     printf("The point lies in the fourth quadrant\n");
   else if ((y<0)&&(x<0))
     printf("The point lies in the third quadrant\n");
   else if ((y<0)&&(x>0))
     printf("The point lies in the second quadrant\n");

 
  return 0;
 
}
