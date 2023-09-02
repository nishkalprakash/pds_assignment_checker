//roll_23GG10021
//name_kajal_kumari
#include<stdio.h>
int main()
{
  int x,y;
  //x, y are coordinates of point p
  printf(" enter the coodinates of point p ",x,y);
  scanf("%d%d\n",&x,&y);
  if(x>0 && y>0){
    printf(" 1st quadrant");
  }
  if(x>0 && y<0){
    printf(" 2nd quadrant");
  }
  if(x<0 && y>0){
    printf("4th quadrant");
  }
  if (x<0 && y<0){
    printf(" 3rd quadrant");
  }
  if (x=0){
    printf(" lies on y axis");
  }
  if(y=0){
      printf(" lies on x axis");
    }
  else(x=0 && y=0){
      printf(" its origin");
    }
  return 0;
}
