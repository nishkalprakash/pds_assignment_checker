//roll_23GG10021
//name_kajal_kumari
#include<stdio.h>
int main()
{
  int a,b,c,d;
  // a,b is bottom left corner coordinate 
  //c,d is top right corner coordinate
  printf(" enter the bottom left corner coordinate", a,b);
  scanf("%d%d",&a,&b);
  printf(" enter the top right corner coordinate",c,d);
  scanf("%d%d",&c,&d);
  if(a>0 && b>0 && c>0 && d>0 && a<c && b<d){
    printf(" it will form rectangle");
  }
  else{
    printf("it will not form rectangle");
  }
  int x,y;
  printf("enter coordinate of any point p",x,y);
  scanf("%d%d", &x,&y);
  if(x>a && x<c && y>b && y<d){
    printf(" it is inside the rectangle");
  }
  if(x==a && y>=b){
    printf(" it lies on left side");
  }
  if( x==c && y<=d){
    printf(" it lies on right side");
  }
  if( x>=a && y==b){
    printf(" it lies on bottom side");
  }
  if(x<=c && y==d){
    printf(" it lies on top side");
  }
  if(x==a && y==b){
    printf(" it lies in bottom left corner");
  }
  if(x==c && y==d){
    printf(" it lies in top right corner");
  }
  else {
    printf(" it is outside the rectangle");
  }
  return 0;
}
