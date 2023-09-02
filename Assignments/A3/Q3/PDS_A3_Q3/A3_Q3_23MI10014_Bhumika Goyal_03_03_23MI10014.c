//Name:Bhumika Goyal
//Roll no. 23MI10014

#include<stdio.h>
int main()
{
  int x,y;
  //x=x coordinate,y=y coordinate
  printf("enter x and y\n");
  scanf("%d%d",&x,&y);

  if(x==0&&y!=0){
    printf("Point lie on Y axis");
  }
  else if(x!=0&&y==0){
    printf("Point lie on X axis");
  }
  else if(x==0&&y==0){
    printf("Point lie on both the axises");
  }
  else if(x>0&&y>0){
    printf("Point lies in 1 quadrant");
  }
  else if(x<0&&y>0){
    printf("Point lies in 2 quadrant");
  }
  else if(x<0&&y<0){
    printf("Point lies in 3 quadrant");
  }
  else if(x>0&&y<0){
    printf("Point lies in 4 quadrant");
  }
  return 0;
}
