//NAME: AYUSH KUAMR SINGH
//Roll No:. 23MT10015

#include <stdio.h>
#include <math.h>
int main(){
  int a,b,c,d;
  printf("Coordinate of bottom-left corner = ");
  scanf("%d %d", &a,&b);
  printf("Coordinate of top-right corner = ");
  scanf("%d %d", &c,&d);
  int area, perim;
  area= (c-a)*(d-b);
  perim = 2*((c-a)+(d-b));
  printf("The area of the rectange is = %d\nThe perimeter of the rectange is = %d\n", area, perim);
  float p = (c+a)/2.0;
  float q = (b+d)/2.0;
  printf("The coordinates of intersection of the diagonals is = (%.1f,%.1f)\n", p,q);
  return 0;

}
