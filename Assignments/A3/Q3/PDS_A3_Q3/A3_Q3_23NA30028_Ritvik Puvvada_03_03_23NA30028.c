//Roll No: 23NA30028//
//Name: Ritvik Puvvada//

#include<stdio.h>
int main()
{
  int x,y;
  printf("Enter the co-ordinates of point p:");
  scanf("%d,%d",&x,&y);
  if (x!=0 && y==0)
    printf("p lies on x-axis\n");
  else if(x==0 && y!=0)
    printf("p lies on y-axis\n");
  else if(x==0 && y==0)
    printf("Point lies on the origin\n");
  else if(x>0 && y>0)
    printf("p lies in 1st quadrant\n");
  else if(x>0 && y<0)
    printf("p lies in 2nd quadrant\n");
  else if(x<0 && y<0)
    printf("p lies in 3rd quadrant\n");
  else
    printf("point lies in 4th quadrant\n");

  return 0;
}
  
  
  
