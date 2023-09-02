#include<stdio.h>
int main(){
  int a,b,c,d,x,y;
  printf("Enter the values of bottom left point and top right point");
  scanf("%d %d %d %d",&a,&b,&c,&d);
  c>a && d>b;
  printf("Enter the values of x and y ");
  scanf("%d %d",&x,&y);
  if(x>a&&y>b && x<c&&y<d){
    printf("The point p is inside the rectangle");
  }
  else if (x<a&&y<b || x>c&&y>d){
    printf("The point p is outside the rectangle");
  }
  else if (x<a&&y>b || x<c&&y<d){
    printf("The point p is outside the rectangle");
  }
  else if (x>a&&y>b || x>c&&y<d){
    printf("The point p is outside the rectangle");
  }
  else if (x>a&&y>b || x>c&&y>d){
    printf("The point p is outside the rectangle");
  }
  else if (x==a&&y==b || x!=c&&y!=d){
    printf("The point p is at bootom left of the rectangle");
  }
  else if (x!=a&&y!=b || x==c&&y==d){
    printf("The point p is at the top right of the rectangle");
  }
  return 0;
}
