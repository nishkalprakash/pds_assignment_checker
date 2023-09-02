#include<stdio.h>
int main()
{
  int a,b,c,d;
  printf("Enter bottom left X amd Y coordinates ");
  scanf("%d %d",&a ,&b);
  printf("Enter top right X amd Y coordinates ");
  scanf("%d %d",&c ,&d);
  int x,y;
  printf("Enter X and Y coordinates of P ");
  scanf("%d %d",&x ,&y); 
  if( c<=a || d<=b) printf("Ill formed rectangle");
  else{
  if ( x>a && x<c && y>b && y<d) printf("Point lies inside the rectangle");
  else {
  if( x==a && y>b && y<d ) printf("Point lies on bottom side of rectangle");
  else {
  if ( x==c && y>b && y<d ) printf("Point lies on top side of rectangle");
  else {
  if ( y==b && x>a && x<c ) printf("Point lies on left side of rectangle");
  else {
  if ( y==d && x>a && x<c ) printf("Point lies on right side of rectangle");
  else {
  if ( x==a && y==b ) printf("Point lies at bottom left corner of rectangle");
  else {
  if ( x==c && y==d ) printf("Point lies at top right corner of rectangle");
  else {
  if ( x==a && y==d ) printf("Point lies at top left corner of rectangle");
  else {
  if ( x==c && y==b ) printf("Point lies at bottom left corner of rectangle");
  else printf("Point lies outside rectangle");
}
}
}
}
}
}
}
}
}
  return 0;
}

