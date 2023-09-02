#include<stdio.h>
int main ()
{
  int x,y;
  printf("Enter the x-coordinate");
  scanf("%d",&x);
  printf("Enter the y-coordinate");
  scanf("%d",&y);
  if(x==0 && y==0){
    printf("It lies on both axis");
  }
  else if(x==0 && y!=0){
    printf("It lies on y-axis");
  }
  else if(x!=0 && y==0){
    printf("It lies on x-axis");
  }
  else if(x>=0 && y>=0){
    printf("It lies in 1st qudrant");
  }
  else if(x>=0 && y<=0){
    printf("It lies in 4th quadrant");
  }
  else if(x<=0 && y>=0){
    printf("It lies in 2nd quadrant");
  }
  else {
    printf("It lies in 3rd quadrant");
  }
  return 0;
}
