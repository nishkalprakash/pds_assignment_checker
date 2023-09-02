#include <stdio.h>
int main()
{
  int x,y;
  printf("Enter the coordinates of p: ");
  scanf("%d%d",&x,&y);
  if((x>0||x<0)&&(y==0)){
    printf("The point is on X axis");
  }
  else if((x==0)&&(y>0||y<0)){
    printf("The point is on Y axis");
  }
  else if((x>0)&&(y>0)){
    printf("The point is in quadrant 1");
  }
  else if((x>0)&&(y<0)){
    printf("The point is in quadrant 2");
  }
  else if((x<0)&&(y<0)){
    printf("The point is in quadrant 3");
  }
  else ((x<0)&&(y>0));
  {
      printf("The point is in quadrant 4");
    }
  return 0;
}
  
