#include<stdio.h>
int main(){
  int a,b,c,d;
  printf("enter the coordinates of a and b:\n");
  scanf("%d%d",&a,&b);
  printf("enter the coordinates of c and d :\n");
  scanf("%d%d",&c,&d);
  int x,y;
  printf("enter thr point p(x,y):\n");
  scanf("%d%d",&x,&y);
  if(c>a&&d>b)
    {
     if(x==a&&y==b){
      printf("the point p lies on bottom left");
      }
     else if(x==c&&y==b){
      printf("the point p lies on bottom right");
      }
     else if(x==a&&y==d){
      printf("the point p lies on top left");
      }
     else if(x==c&&y==d){
      printf("the point p lies on top right");
      }
     else if(a<x<c&&y==b){
      printf("the point lies on bottom side");    
      }
     else if(a<x<c&&y==d){
      printf("the point p lies on top side");
      }
     else if(x==c&&b<y<d){
      printf("the point p lies on right side");
      }
     else if(x==a&&b<y<d){
      printf("the point p lies on left side");
      }
     else if(a<x<c&&b<y<d){
      printf("the point lies inside");
      }
     else {
      printf("the point lies outside");
      }
    

  }
  else{
    printf("||| formed rectangle");
  }
  return 0;
}
