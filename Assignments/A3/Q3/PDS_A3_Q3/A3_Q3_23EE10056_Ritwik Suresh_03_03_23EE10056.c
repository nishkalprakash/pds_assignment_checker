// Roll no. : 23EE10056
// Name : Ritwik Suresh
#include<stdio.h>
int main()
{
  int x,y ;
  printf("Enter the co-ordinates of the point(x,y) :\n");
  scanf("%d %d",&x,&y);
  if(x == 0 && y==0)
    {
      printf("The point lies on the x-axis and also the y-axis\n");
      return 0;
    }
  else if( x==0 && y != 0)
    {
      printf("The point lies on the Y-axis\n");
      return 0;
    }
 else if( x!=0 && y==0)
    {
      printf("The point lies on the X-axis\n");
      return 0;
    }
 else if( x>0 && y>0)
   {
     printf("The point lies in the 1st quadrant\n");
     return 0;
   }
 else if( x>0 && y<0)
   {
     printf("The point lies in the 2nd quadrant.\n");
     return 0;
   }
 else if( x<0 && y>0)
   {
     printf("The point lies in the 4th quadrant\n");
     return 0;
   }
 else
   {
     printf("The point lies in the 3rd quadrant\n");
     return 0;
   }
}
  
