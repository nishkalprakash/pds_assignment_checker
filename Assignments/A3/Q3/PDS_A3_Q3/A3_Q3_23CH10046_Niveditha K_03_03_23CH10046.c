#include <stdio.h>
int main()
{
  signed int x,y;
  printf("Enter the coordinates x and y\n");
  scanf("%d %d",&x,&y);
  
  if(x>0 && y>0)
    printf("1st quadrant\n");
      
  else if(x<0 && y>0)
    printf("2nd quadrant\n");
      
  else if(x<0 && y<0)
    printf("3rd quadrant\n");
      
  else if(x>0 && y<0)
    printf("4th quadrant\n");
      
  else if(x==0 && y!=0)
    printf("y axis\n");
      
  else if(x!=0 && y==0)
    printf("x axis\n");
      
  else if(x==0 && y==0)
    printf("both x and y axis\n");
      
  return 0;
}
  
