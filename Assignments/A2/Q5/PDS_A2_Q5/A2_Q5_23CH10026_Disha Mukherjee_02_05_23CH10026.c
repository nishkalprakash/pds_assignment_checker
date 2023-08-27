//Roll No: 23CH10026
//Name: Disha Mukherjee

#include <stdio.h>

int main()
{
  int a,b,c,d,area,perim;
  float p,q;
  printf("Enter co-ordinates of bottom-left corner\n");
  scanf("%d,%d",&a,&b);
  printf("\nEnter co-ordinates of top-right corner\n");
  scanf("%d,%d",&c,&d);
  area=(c-a)*(d-b);
  perim=2*((c-a)+(d-b));
  printf("\nArea=%d and Perimeter=%d",area,perim);
  p=(a+c)/2.0;
  q=(b+d)/2.0;
  printf("\nCo-ordinates of point of intersection of 2 diagonals=(%f,%f)",p,q);
  return 0;
}
  
