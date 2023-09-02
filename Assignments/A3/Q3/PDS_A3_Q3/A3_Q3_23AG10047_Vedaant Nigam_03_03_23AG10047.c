#include <stdio.h>
int main()
{
  int x,y;
  printf("enter x and y coordinates respectively");
  scanf("%d%d",&x,&y);
  if(x==0&&y==0){printf("point lies on both axes");}
  else if(x==0&&y!=0){printf("point lies on y axis");}
  else if(x!=0&&y==0){printf("point lies on x axis");}
  else if(x>0&&y>0){printf("point lies in first quadrant");}
  else if(x<0&&y>0){printf("point lies in second quadrant");}
  else if(x<0&&y<0){printf("point lies in third quadrant");}
  else printf("point lies in fourth quadrant");
  return 0;
}
