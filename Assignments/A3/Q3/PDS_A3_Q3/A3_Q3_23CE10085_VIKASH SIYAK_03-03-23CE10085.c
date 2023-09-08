//Lab3
//Name - vikash siyak
//Roll no- 23CE10085

#include <stdio.h>
int main()
{
  int x,y;
  printf("enter the cordinates of point: ");
  scanf("%d%d",&x,&y);
  if(x==0||y==0)
    { printf("point lies on x-axis or y-axis");
    }
  else if(x>0&&y>0){
    printf("point lies on first quadrant");
      }
  else if(x>0&&y<0){
    printf("point lies on third quadrant");
  }
  else if(x<0&&y<0){
    printf("point lies on second quadrant");
  }
  else{
    printf("point lies on fourth quadrant");
  }
}
  
