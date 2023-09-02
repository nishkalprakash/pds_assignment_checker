#include<stdio.h>
int main()
{
  int x,y;
  printf("enter the coordinates of point P\n");
  scanf("%d%d",&x,&y);
  if(x==0&&y!=0){
    printf("the point lies on y axis\n");
  }
  else if(y==0&&x!=0){
    printf("the point lies on x axis\n");
  }
  else if(x==0&&y==0){
    printf("the point is on origin\n");
  }
  else if(x>0&&y>0){
    printf("the point is in first quadrant\n");
  }
  else if(x<0&&y>0){
    printf("the point is in second quadrant\n");
  }
  else if(x<0&&y<0){
    printf("the point is in third quadrant\n");
  }
  else if(x>0&&y<0){
    printf("the point is in fourth quadrant\n");
  }
  return 0;
}
