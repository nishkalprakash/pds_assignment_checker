//Roll No.: 23MI10033
//Name: Piyush Bisht

#include <stdio.h>
int main()
{
  int a, b, c, d, x, y;
  printf("Enter the coordinates of the bottom-left corner of the rectangle");
  scanf("%d %d", &a, &b);
  printf("\nEnter the coordinates of the top-right corner of the rectangle");
  scanf("%d %d", &c, &d);
  if ((a>=c) || (b>=d)){
    printf("\nIll formed rectangle");
    return 0;
  }
  printf("\nEnter the coordinates of point P");
  scanf("%d %d", &x, &y);
  if (((x<c) && (x>a))){
      if ((y<d) && (y>b)){
	printf("\nThe point P is inside the rectangle");
      }
      else if (y==d){
	printf("\nP lies on the top side of the rectangle");
      }
      else if (y==b){
	printf("\nP lies on the bottom side of the rectangle");
      }
      else {
	printf("\nP lies outside the rectangle");
      }
  }
  else if (x==a){
      if ((y<d) && (y>b)){
	printf("\nP lies on the left side of the rectangle");
      }
      else if (y==d){
	printf("\nP lies on the top-left corner of the rectangle");
      }
      else if (y==b){
	printf("\nP lies on the bottom-left corner of the rectangle");
      }
      else {
	printf("\nP lies outside the rectangle");
      }
  }
  else if (x==c){
      if ((y<d) && (y>b)){
	printf("\nP lies on the right side of the rectangle");
      }
      else if (y==d){
	printf("\nP lies on the top-right corner of the rectangle");
      }
      else if (y==b){
	printf("\nP lies on the bottom-right corner of the rectangle");
      }
      else {
	printf("\nP lies outside the rectangle");
      }
  }
  else {
      printf("\nP lies outside the rectangle");
  }
  return 0;
}
  
  
  
  
