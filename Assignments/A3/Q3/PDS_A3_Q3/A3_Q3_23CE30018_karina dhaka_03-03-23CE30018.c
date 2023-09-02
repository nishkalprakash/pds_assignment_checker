#include<stdio.h>
int main()
{
  int x,y;
  printf("coordinate x and y of p are:");
  scanf("%d %d",&x,&y);
  if(x==0||y==0){
    printf("x and y lies either on the x axis or y axis or both");
  }
  else if(x>0&&y>0){
    printf("lies in the first quadrant.");
  }
  else if(x<0&&y>0){
    printf("lies in the second quadrant.");
  }
  else if(x<0&&y<0){
    printf("lies in the third quadrant.");
  }
  else {
    printf("lies in the fourth quadrant.");
  }
  return 0;
}
