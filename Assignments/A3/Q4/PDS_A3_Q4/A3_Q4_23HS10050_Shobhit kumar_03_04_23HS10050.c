//Roll no:23HS10050
//Name:Shobhit kumar

#include<stdio.h>

int main() {
  int a,b,c,d,x,y;
  printf("Enter the coordinates of left bottom corner(a,b):");
  scanf("%d%d", &a, &b);
  printf("Enter the coordinates of right top corner(c,d):");
  scanf("%d%d", &c, &d);

  if(c>a && d>b){
    printf("Rectangle is well formed");
  }
  else {
    printf("ill rectangle formed");
  }

  printf("Enter the coordinates p(x,y):");
  scanf("%d%d", &x, &y);

  if(x>a && x<c && y>b && y<d){
    printf("P lies inside rectangle");
  }
  else {
    printf("P lies outside rectangle");
  }

  if(x==a && y>b && y<d){
    printf("p lies on left side");
  }
  else if(x==c && y>b && y<d){
    printf("p lies on right side");
  }
  else if(y==b && x>a && a<c){
    printf("p lies on bottom side");
  }
  else if(y==d && x>a && x<c){
    printf("p lies on top side");
  }

  if(x==a && y==d || x==c && y==b || x==a && y==b || x==c && y==d){
    printf("p lies on corner");
  }

  return 0;

}




   

  
