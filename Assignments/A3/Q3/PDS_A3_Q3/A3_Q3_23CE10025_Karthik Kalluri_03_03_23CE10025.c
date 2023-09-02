#include <stdio.h>
int main()
{
  int x,y;
  printf("Enter the coordinates of the point p\n");
  scanf("%d%d",&x,&y);
  if((x==0)&&(y==0))
    printf("It lies on both x axis and y axis\n");
  else if((x==0)&&(y!=0))
    printf("It lies on y axis\n");
else if((x!=0)&&(y==0))
  printf("It lies on x axis\n");
 else if((x>=0)&&(y>=0))
   printf("It lies in 1st quadrant\n");
 else if((x<=0)&&(y>=0))
   printf("It lies in 4th quadrant\n");
 else if((x<=0)&&(y<=0))
   printf("It lies in 3rd quadrant\n");
 else
   printf("It lies in 2nd quadrant\n");
  return 0;
}
